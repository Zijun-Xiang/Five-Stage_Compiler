%{

#include <cstdio>
#include <iostream>
#include <unistd.h>
#include "scanType.h"
#include "treeNodes.h"
#include "treeUtils.h"
using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *msg);

void printToken(TokenData myData, string tokenName, int type = 0) {
   cout << "Line: " << myData.linenum << " Type: " << tokenName;
   if(type==0)
     cout << " Token: " << myData.tokenstr;
   if(type==1)
     cout << " Token: " << myData.nvalue;
   if(type==2)
     cout << " Token: " << myData.cvalue;
   cout << endl;
}
int numErrors;
int numWarnings;
extern int line;
extern int yylex();
TreeNode *syntaxTree;  //超级重要，定义treeNode类型的结构体指针，用来存储生成出来的语法树
TreeNode *addSibling(TreeNode *t,TreeNode *s)   ///////wait to fix
{
if(s==NULL){printf("Error "); exit(1);}
if(t==NULL){return s;}
TreeNode *temp = t;
while(temp->sibling != NULL)
	{
	temp =  temp->sibling;
	}
temp->sibling = s;
return t;
}
void setType(TreeNode *t, ExpType type, bool isStatic)
{
	while(t){
		t->type = type;
		t->isStatic = isStatic;
		t = t->sibling;
	}
}

%}
%union
{
   struct TokenData *tinfo ;     //for C language, you need to add struct befors the TokenData struct class
  	TreeNode *tree;
  	ExpType type;
}

%type <tree>  program
%type <tree>  precomList
%type <tree>  declList
%type <tree>  decl       
%type <tree>  varDecl
%type <tree>  scopedVarDecl
%type <tree>  varDeclList
%type <tree>  varDeclInit
%type <tree>  varDeclId
%type <tree>  funDecl 
%type <tree>  parms
%type <tree>  parmList
%type <tree>  parmTypeList
%type <tree>  parmIdList
%type <tree>  parmId
%type <tree>  stmt
%type <tree>  matched
%type <tree>  iterRange
%type <tree>  unmatched
%type <tree>  expStmt
%type <tree>  compoundStmt
%type <tree>  localDecls
%type <tree>  stmtList
%type <tree>  returnStmt
%type <tree>  breakStmt
%type <tree>  exp
%type <tree>  simpleExp
%type <tree>  andExp
%type <tree>  unaryRelExp
%type <tree>  relExp
%type <tree>  minmaxExp
%type <tree>  sumExp
%type <tree>  mulExp
%type <tree>  unaryExp
%type <tree>  factor 
%type <tree>  mutable
%type <tree>  immutable
%type <tree>  call
%type <tree>  args
%type <tree>  argList
%type <tree>  constant
%type <type>  typeSpec  //
%type <tinfo> relop
%type <tinfo> sumop
%type <tinfo> mulop
%type <tinfo> unaryop
%type <tinfo>  minmaxop
%type <tinfo>  assignop
%token   <tinfo>  ';' ',' '(' ')' '{' '}' '[' ']' '-' '+' '*' '/' '%' '=' '>' '<' ':' '?'
%token   <tinfo>  WHILE
%token   <tinfo>  MIN
%token   <tinfo>  MAX
%token   <tinfo>  FALSE
%token   <tinfo>  FOR
%token   <tinfo>  INT
%token   <tinfo>  STRINGCONST
%token   <tinfo>  NOT
%token   <tinfo>  STATIC
%token   <tinfo>  TO
%token   <tinfo>  LEQ
%token   <tinfo>  TRUE
%token   <tinfo>  BOOLCONST
%token   <tinfo>  OR
%token   <tinfo>  RETURN 
%token   <tinfo>  NEQ
%token   <tinfo>  DO 
%token   <tinfo>  AND
%token   <tinfo>  PRECOMPILER
%token   <tinfo>  NUMCONST
%token   <tinfo>  IF
%token   <tinfo>  BOOL
%token   <tinfo>  BY
%token   <tinfo>  BREAK
%token   <tinfo>  REPEAT
%token   <tinfo>  UNTIL
%token   <tinfo>  ASSIGN
%token   <tinfo>  MULASS
%token   <tinfo>  INC
%token   <tinfo>  ADDASS
%token   <tinfo>  EQ
%token   <tinfo>  GEQ
%token   <tinfo>  SUBASS
%token   <tinfo>  DIVASS
%token   <tinfo>  ELSE
%token   <tinfo>  DEC
%token   <tinfo>  CHSIGN
%token   <tinfo>  THEN
%token   <tinfo>  CHAR
%token   <tinfo>  SIZEOF
%token   <tinfo>  ID
%token   <tinfo>  LASTTERM
%token   <tinfo>  CHARCONST
%%
program    : precomList declList                    { syntaxTree = $2;}
           ;

precomList : precomList PRECOMPILER                   {$$ = NULL; printf("%s\n", yylval.tinfo->tokenstr);}
             | PRECOMPILER                                 {$$ = NULL; printf("%s\n", yylval.tinfo->tokenstr);}
             | /* empty */                                 { $$ = NULL; }
           ;

declList   : declList decl                          {$$ = addSibling($1,$2);/* addSibling*/ }
             | decl				   {$$ = $1;}
           ;

decl       : varDecl					{$$ = $1; }
             | funDecl					{$$ = $1; }
           ;

varDecl    : typeSpec varDeclList ';'               {$$ = $2; setType($2,$1,false);/* DRBC Note: Be careful! And setType.*/}
           ;


scopedVarDecl : STATIC typeSpec varDeclList ';'     {$$ = $3; setType($3,$2,true);/* DRBC Note: Be careful! And setType.*/}
                | typeSpec varDeclList ';'             {$$ = $2; setType($2,$1,false);/* DRBC Note: Be careful! And setType.*/}
              ;


varDeclList  : varDeclList ',' varDeclInit          {$$ = addSibling($1,$3);/* addSibling */}
               | varDeclInit
             ;

varDeclInit  : varDeclId
               | varDeclId ':' simpleExp               {$$ = $1; if ($$ != NULL) $$ -> child[0] = $3;/* DRBC Note: $$ = $1; if ($$ != NULL) $$->child[0] = $3; */}
             ;

varDeclId   : ID                                         {$$ = newDeclNode(VarK,UndefinedType,$1);/* newDeclNode */}
             | ID '[' NUMCONST ']'                         {$$ = newDeclNode(VarK,UndefinedType,$1); $$ -> isArray = true; $$->size=$3->nvalue+1;/* newDeclNode; $$->size = $3->nvalue + 1; */}
             ;

typeSpec   : INT                                        {$$ = Integer;/* Integer*/ }
             | BOOL                                        {$$ = Boolean;/* Boolean*/}
             | CHAR                                        {$$ = Char;/* Char */}
           ;

funDecl    : typeSpec ID '(' parms ')' stmt       { $$ = newDeclNode(FuncK,$1,$2,$4,$6); }
             | ID '(' parms ')' stmt                   { $$ = newDeclNode(FuncK,Void,$1,$3,$5); }
           ;
parms      : parmList					{ $$ = $1; }                    //和原代码不一样
             | /* empty */                                { $$ = NULL; }  
           ;

parmList   : parmList ';' parmTypeList              { $$ = addSibling($1, $3);}
             | parmTypeList                         { $$ = $1; }  //只有一个参数时     
           ;

parmTypeList : typeSpec parmIdList                  {$$ = $2; setType($2,$1,false);/* DRBC Note: Be careful! And setType.*/}
             ;						

parmIdList   : parmIdList ',' parmId                 {$$ = addSibling($1, $3);/* addSibling*/}
             | parmId					{$$ = $1;}
             ;

parmId     : ID                                          {$$ = newDeclNode(ParamK, UndefinedType, $1);/* newDeclNode*/}
             | ID '[' ']'                                   {$$ = newDeclNode(ParamK, UndefinedType, $1); $$->isArray = true;/* newDeclNode*/}
           ;

stmt       : matched                                       {$$ = $1;}
             | unmatched                                    {$$ = $1;}
           ;


matched    : IF simpleExp THEN matched ELSE matched      {$$ = newStmtNode(IfK,$1,$2,$4,$6);}/* newStmtNode*/
             | WHILE simpleExp DO matched                  {$$ = newStmtNode(WhileK,$1,$2,$4);}/* newStmtNode*/
             | FOR ID '=' iterRange DO matched             {$$ = newStmtNode(ForK,$1,newDeclNode(VarK,Integer,$2),$4,$6);}/* newStmtNode(newDeclNode)*/
             | expStmt			{ $$ = $1; }
             | compoundStmt		{ $$ = $1; }
             | returnStmt		{ $$ = $1; }
             | breakStmt		{ $$ = $1; }
           ;

iterRange  : simpleExp TO simpleExp                  {$$ = newStmtNode(RangeK,$2,$1,$3);/* newStmtNode*/}
             | simpleExp TO simpleExp BY simpleExp    {$$ = newStmtNode(RangeK,$2,$1,$3,$5);/* newStmtNode*/}
           ;

unmatched  : IF simpleExp THEN stmt                     {$$ = newStmtNode(IfK,$1,$2,$4);/* newStmtNode*/}
             | IF simpleExp THEN matched ELSE unmatched  {$$ = newStmtNode(IfK,$1,$2,$4,$6);/* newStmtNode*/}
             | WHILE simpleExp DO unmatched                {$$ = newStmtNode(WhileK,$1,$2,$4);/* newStmtNode*/}
             | FOR ID '=' iterRange DO unmatched           {$$ = newStmtNode(ForK,$1,newDeclNode(VarK,Integer,$2),$4,$6);/* newStmtNode(newDeclNode)*/}
           ;

expStmt    : exp ';'
             | ';'                                        {$$ = NULL;/* NULL*/}
           ;

compoundStmt : '{' localDecls stmtList '}'         {$$ = newStmtNode(CompoundK,$1,$2,$3);/* newStmtNode*/}
             ;
localDecls : localDecls scopedVarDecl              {$$ = addSibling($1,$2);}
             | /* empty */                               {$$ = NULL; /* NULL*/}
             ;

stmtList   : stmtList stmt                         {$2 == NULL ? $$ = $1 : $$ = addSibling($1,$2);/* addSibling DRBC Note: $2 might legitamately be empty here. If so $$ = $1;*/}
             | /* empty */                               {$$ = NULL; /* NULL*/}
           ;

returnStmt : RETURN ';'                                {$$ = newStmtNode(ReturnK,$1);/* newStmtNode*/}
             | RETURN exp ';'                           {$$ = newStmtNode(ReturnK,$1,$2);/* newStmtNode*/}
           ;

breakStmt  : BREAK ';'                                 {$$ = newStmtNode(BreakK,$1);/* newStmtNode*/}
           ;

exp        : mutable assignop exp                {$$ = newExpNode(AssignK,$2,$1,$3);/* newExpNode*/}
             | mutable INC                              {$$ = newExpNode(AssignK,$2,$1);/* newExpNode*/}
             | mutable DEC                              {$$ = newExpNode(AssignK,$2,$1);/* newExpNode*/}
             | simpleExp              {$$ = $1; }
           ;
assignop  : '='                    {$$ = $1;}
            | ADDASS		{$$ = $1;}
            | SUBASS		{$$ = $1;}
            | MULASS		{$$ = $1;}
            | DIVASS		{$$ = $1;}
          ;

simpleExp  : simpleExp OR andExp                 {$$ = newExpNode(OpK,$2,$1,$3);/* newExpNode*/}
             | andExp            		{$$ = $1;}
           ;

andExp     : andExp AND unaryRelExp              {$$ = newExpNode(OpK,$2,$1,$3);/* newExpNode*/}
             | unaryRelExp			{$$ = $1;}
           ;

unaryRelExp : NOT unaryRelExp                      {$$ = newExpNode(OpK,$1,$2);/* newExpNode*/}
              | relExp					{$$ = $1;}
            ;

relExp     : minmaxExp relop minmaxExp          {$$ = newExpNode(OpK,$2,$1,$3);}
             | minmaxExp			{$$ = $1;}
           ;
relop      : LEQ		 {$$ = $1;}
             | '<'		 {$$ = $1;}
             | '>'		 {$$ = $1;}
             | GEQ		 {$$ = $1;}
             | EQ		 {$$ = $1;}
             | NEQ		 {$$ = $1;}
           ;

minmaxExp  : minmaxExp minmaxop sumExp              {$$ = newExpNode(OpK,$2,$1,$3);/* newExpNode*/}
             | sumExp					 {$$ = $1;}
           ;

minmaxop   : MAX		 {$$ = $1;}
             | MIN		 {$$ = $1;}
           ;

sumExp     : sumExp sumop mulExp              {$$ = newExpNode(OpK,$2,$1,$3);/* newExpNode*/}
             | mulExp			 {$$ = $1;}
           ;

sumop      : '+'			{$$ = $1;}
             | '-'			{$$ = $1;}
           ;

mulExp     : mulExp mulop unaryExp           {$$ = newExpNode(OpK,$2,$1,$3);/* newExpNode*/}
             | unaryExp			     {$$ = $1;}
           ;
mulop      : '*'			{$$ = $1;}
             | '/'			{$$ = $1;}
             | '%'			{$$ = $1;}
           ;

unaryExp   : unaryop unaryExp                   {$$ = newExpNode(OpK,$1,$2);/* newExpNode*/}
             | factor				{$$ = $1;}
           ;

unaryop    : '-'   /*替换'-'*/                          {$1->tokenclass=CHSIGN; $$=$1;} //change sign
             | '*'                                      {$1->tokenclass=SIZEOF; $$=$1;}
             | '?'					 {$$ = $1;}
             ;
           ;

factor     : immutable				 {$$ = $1;}
             | mutable				 {$$ = $1;}
           ;

mutable    : ID                                       {$$ = newExpNode(IdK,$1); $$->attr.name = $1->svalue;/* newExpNode*/}
             | ID '[' exp ']'                          {$$ = newExpNode(OpK,$2,NULL,$3); $$->child[0] = newExpNode(IdK,$1); $$->child[0]->attr.name = $1->svalue;/* newExpNode*/}
           ;
immutable  : '(' exp ')'                            {$$ = $2;/* DRBC Note: Be careful!*/}
             | call				    {$$ = $1;}
             | constant				    {$$ = $1;}
           ;

call       : ID '(' args ')'                        {$$ = newExpNode(CallK,$1,$3);/*newExpNode*/}
           ;

args       : argList					{$$=$1;}
             | /* empty */                                { $$=NULL; }
           ;

argList    : argList ',' exp                       {addSibling($1,$3);}
             | exp					{$$ = $1;}
           ;

constant   : NUMCONST                                   {$$ = newExpNode(ConstantK,$1); $$->type=Integer; $$ -> attr.value=$1->nvalue;}
	     | CHARCONST                                {$$ = newExpNode(ConstantK,$1); $$->type=Char; $$->attr.cvalue=$1->cvalue;}
             | STRINGCONST                              {$$ = newExpNode(ConstantK,$1); $$->size = $1->nvalue + 1; $$->isArray = true; setType($$,Char,true);}
             | BOOLCONST                                {$$ = newExpNode(ConstantK,$1); setType($$,Boolean,true);}
           ;

%%
char *largerTokens[LASTTERM+1];
void initTokenStrings()
{
largerTokens[ADDASS] = (char *)"+=";
largerTokens[AND] = (char *)"and";
largerTokens[BOOL] = (char *)"bool";
largerTokens[BOOLCONST] = (char *)"boolconst";
largerTokens[BREAK] = (char *)"break";
largerTokens[BY] = (char *)"by";
largerTokens[CHAR] = (char *)"char";
largerTokens[CHARCONST] = (char *)"charconst";
largerTokens[CHSIGN] = (char *)"chsign";
largerTokens[DEC] = (char *)"--";
largerTokens[DIVASS] = (char *)"/=";
largerTokens[DO] = (char *)"do";
largerTokens[MULASS] = (char *)"*=";
largerTokens[ELSE] = (char *)"else";
largerTokens[EQ] = (char *)"==";
largerTokens[FOR] = (char *)"for";
largerTokens[GEQ] = (char *)">=";
largerTokens[LEQ] = (char *)"<=";
largerTokens[ID] = (char *)"id";
largerTokens[IF] = (char *)"if";
largerTokens[INC] = (char *)"++";
largerTokens[INT] = (char *)"int";
largerTokens[MAX] = (char *)":>:";
largerTokens[MIN] = (char *)":<:";
largerTokens[NEQ] = (char *)"!=";
largerTokens[NOT] = (char *)"not";
largerTokens[NUMCONST] = (char *)"numconst";
largerTokens[OR] = (char *)"or";
largerTokens[RETURN] = (char *)"return";
largerTokens[SIZEOF] = (char *)"sizeof";
largerTokens[STATIC] = (char *)"static";
largerTokens[STRINGCONST] = (char *)"stringconst";
largerTokens[SUBASS] = (char *)"-=";
largerTokens[THEN] = (char *)"then";
largerTokens[TO] = (char *)"to";
largerTokens[WHILE] = (char *)"while";
largerTokens[LASTTERM] = (char *)"lastterm";
}

static char tokenBuffer[16];
char *tokenToStr(int type)
{
	if(type>LASTTERM){
		return (char *)"UNKNOWN";
	}
	else if (type>256){
	return largerTokens[type];
	}
	else if ((type<32) || (type>127)){
	sprintf(tokenBuffer, "Token#%d",type);
	}
	else{
	tokenBuffer[0] = type;
	tokenBuffer[1] = '\0';
	}
	return tokenBuffer;
}


void yyerror (const char *msg)
{ 
   cout << "Error: " <<  msg << endl;
}

int main(int argc, char **argv) {
   initTokenStrings();
   int option, index;
   char *file = NULL;
   extern FILE *yyin;
   while ((option = getopt (argc, argv, "")) != -1)
      switch (option)
      {
      default:
         ;
      }
   if ( optind == argc ) yyparse();
   for (index = optind; index < argc; index++) 
   {
      yyin = fopen (argv[index], "r");
      yyparse();
      fclose (yyin);
   }
   if(numErrors == 0){
   	printTree(stdout,syntaxTree);  //ser to true, ture for assignment 4
   }
   //printTree(stdout,syntaxTree);
   printf("Number of warnings: 0\n");
    printf("Number of errors: 0\n");
	
   return 0;
}

