%{

#include <cstdio>
#include <iostream>
#include <unistd.h>
#include "scanType.h"
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

%}
%union
{
   struct   TokenData tinfo ;
}
%token   <tinfo>  OP
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
%token   <tinfo>  THEN
%token   <tinfo>  CHAR
%token   <tinfo>  ID
%token   <tinfo>  CHARCONST
%type <tinfo>  term program
%%
program  :  program term
   |  term  {$$=$1;}
   ;
term  : 
      OP {printToken(yylval.tinfo, "OP");}
   |  NEQ {printToken(yylval.tinfo, "NEQ");}
   |  LEQ {printToken(yylval.tinfo, "LEQ");} 
   |  AND {printToken(yylval.tinfo, "AND");}
   |  PRECOMPILER {printToken(yylval.tinfo, "PRECOMPILER");}
   |  NUMCONST {printToken(yylval.tinfo, "NUMCONST");} 
   |  ELSE {printToken(yylval.tinfo, "ELSE");}
   |  UNTIL {printToken(yylval.tinfo, "UNTIL");}
   |  ASSIGN {printToken(yylval.tinfo, "ASSIGN");}
   |  REPEAT {printToken(yylval.tinfo, "REPEAT");}
   |  THEN {printToken(yylval.tinfo, "THEN");}
   |  IF {printToken(yylval.tinfo, "IF");}
   |  CHARCONST {printToken(yylval.tinfo, "CHARCONST");}
  |  WHILE {printToken(yylval.tinfo, "WHILE");}
  |  ID {printToken(yylval.tinfo, "ID");}
  |  CHAR {printToken(yylval.tinfo, "CHAR");}
  |  DEC {printToken(yylval.tinfo, "DEC");}
  |  MIN {printToken(yylval.tinfo, "MIN");}
  |  MAX {printToken(yylval.tinfo, "MAX");}
  |  BOOL {printToken(yylval.tinfo, "BOOL");}
  |  STRINGCONST {printToken(yylval.tinfo, "STRINGCONST");}
  |  BY {printToken(yylval.tinfo, "BY");}
  |  BREAK {printToken(yylval.tinfo, "BREAK");}
  |  FALSE {printToken(yylval.tinfo, "BOOLCONST");}  
  |  FOR {printToken(yylval.tinfo, "FOR");}
  |  INT {printToken(yylval.tinfo, "INT");}
  |  NOT {printToken(yylval.tinfo, "NOT");}
  |  MULASS {printToken(yylval.tinfo, "MULASS");}
  |  INC {printToken(yylval.tinfo, "INC");}
  |  ADDASS {printToken(yylval.tinfo, "ADDASS");}
  |  EQ {printToken(yylval.tinfo, "EQ");}
  |  GEQ {printToken(yylval.tinfo, "GEQ");}
  |  SUBASS {printToken(yylval.tinfo, "SUBASS");}
  |  DIVASS {printToken(yylval.tinfo, "DIVASS");}
  |  OR {printToken(yylval.tinfo, "OR");} 
  |  RETURN {printToken(yylval.tinfo, "RETURN");}
  |  DO {printToken(yylval.tinfo, "DO");}
  |  STATIC {printToken(yylval.tinfo, "STATIC");}
  |  TO {printToken(yylval.tinfo, "TO");}
  |  TRUE {printToken(yylval.tinfo, "BOOLCONST");}
;
%%

void yyerror (const char *msg)
{ 
   cout << "Error: " <<  msg << endl;
}

int main(int argc, char **argv) {
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
   return 0;
}

