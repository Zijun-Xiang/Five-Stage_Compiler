/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */


#include <cstdio>
#include <iostream>
#include <unistd.h>
#include "scanType.h"
#include "treeNodes.h"
#include "treeUtils.h"
#include "symbolTable.h"
#include "semantics.h"
using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *msg);

/*int returnsize(TreeNode *array)
{	int sizenumber=0;
	for(int i=0;array[i] != '\0';i++)
		sizenumber += 1;
	return sizenumber;
}
*/
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


#line 130 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    WHILE = 258,
    MIN = 259,
    MAX = 260,
    FALSE = 261,
    FOR = 262,
    INT = 263,
    STRINGCONST = 264,
    NOT = 265,
    STATIC = 266,
    TO = 267,
    LEQ = 268,
    TRUE = 269,
    BOOLCONST = 270,
    OR = 271,
    RETURN = 272,
    NEQ = 273,
    DO = 274,
    AND = 275,
    PRECOMPILER = 276,
    NUMCONST = 277,
    IF = 278,
    BOOL = 279,
    BY = 280,
    BREAK = 281,
    REPEAT = 282,
    UNTIL = 283,
    ASSIGN = 284,
    MULASS = 285,
    INC = 286,
    ADDASS = 287,
    EQ = 288,
    GEQ = 289,
    SUBASS = 290,
    DIVASS = 291,
    ELSE = 292,
    DEC = 293,
    CHSIGN = 294,
    THEN = 295,
    CHAR = 296,
    SIZEOF = 297,
    ID = 298,
    LASTTERM = 299,
    CHARCONST = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 65 "parser.y" /* yacc.c:355  */

   struct TokenData *tinfo ;     //for C language, you need to add struct befors the TokenData struct class
  	TreeNode *tree;
  	ExpType type;

#line 222 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    15,     2,     2,
       5,     6,    13,    12,     4,    11,     2,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    19,     3,
      18,    16,    17,    20,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     9,     2,    10,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     7,     2,     8,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   164,   164,   167,   168,   169,   172,   173,   176,   177,
     180,   184,   185,   189,   190,   193,   194,   197,   198,   201,
     202,   203,   206,   207,   209,   210,   213,   214,   217,   220,
     221,   224,   225,   228,   229,   233,   234,   235,   236,   237,
     238,   239,   242,   243,   246,   247,   248,   249,   254,   255,
     259,   262,   263,   266,   267,   270,   271,   274,   277,   278,
     279,   280,   283,   284,   285,   286,   287,   290,   291,   294,
     295,   298,   299,   302,   303,   305,   306,   307,   308,   309,
     310,   313,   314,   317,   318,   321,   322,   325,   326,   329,
     330,   332,   333,   334,   337,   345,   348,   349,   350,   354,
     355,   358,   365,   374,   375,   376,   379,   382,   383,   386,
     387,   390,   391,   392,   393
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "';'", "','", "'('", "')'", "'{'", "'}'",
  "'['", "']'", "'-'", "'+'", "'*'", "'/'", "'%'", "'='", "'>'", "'<'",
  "':'", "'?'", "WHILE", "MIN", "MAX", "FALSE", "FOR", "INT",
  "STRINGCONST", "NOT", "STATIC", "TO", "LEQ", "TRUE", "BOOLCONST", "OR",
  "RETURN", "NEQ", "DO", "AND", "PRECOMPILER", "NUMCONST", "IF", "BOOL",
  "BY", "BREAK", "REPEAT", "UNTIL", "ASSIGN", "MULASS", "INC", "ADDASS",
  "EQ", "GEQ", "SUBASS", "DIVASS", "ELSE", "DEC", "CHSIGN", "THEN", "CHAR",
  "SIZEOF", "ID", "LASTTERM", "CHARCONST", "$accept", "program",
  "precomList", "declList", "decl", "varDecl", "scopedVarDecl",
  "varDeclList", "varDeclInit", "varDeclId", "typeSpec", "funDecl",
  "parms", "parmList", "parmTypeList", "parmIdList", "parmId", "stmt",
  "matched", "iterRange", "unmatched", "expStmt", "compoundStmt",
  "localDecls", "stmtList", "returnStmt", "breakStmt", "exp", "assignop",
  "simpleExp", "andExp", "unaryRelExp", "relExp", "relop", "minmaxExp",
  "minmaxop", "sumExp", "sumop", "mulExp", "mulop", "unaryExp", "unaryop",
  "factor", "mutable", "immutable", "call", "args", "argList", "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    59,    44,    40,    41,   123,   125,    91,
      93,    45,    43,    42,    47,    37,    61,    62,    60,    58,
      63,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300
};
# endif

#define YYPACT_NINF -139

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -19,  -139,    46,   -12,  -139,  -139,  -139,  -139,  -139,    54,
      -5,  -139,  -139,   -13,  -139,    13,  -139,    55,    14,  -139,
      56,    21,    96,    94,  -139,    13,    65,  -139,    45,   159,
      99,   106,  -139,   122,    13,   105,   103,   109,  -139,   159,
    -139,  -139,  -139,  -139,   159,  -139,  -139,    60,  -139,    80,
      81,  -139,  -139,    -7,    24,    72,  -139,   185,  -139,  -139,
    -139,  -139,  -139,   111,    21,  -139,  -139,   159,    61,   148,
     159,   125,  -139,  -139,  -139,  -139,  -139,  -139,  -139,   127,
      80,   178,  -139,   122,  -139,   126,  -139,   159,   159,   159,
     159,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,   185,
     185,  -139,  -139,   185,  -139,  -139,  -139,   185,  -139,  -139,
    -139,   -17,   -15,   115,  -139,   131,     0,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,   159,  -139,  -139,  -139,
     133,   137,   135,    81,  -139,    57,    24,    72,  -139,    13,
    -139,    45,    63,   122,   159,  -139,   122,  -139,  -139,   159,
    -139,    45,    89,  -139,  -139,  -139,  -139,   117,    43,  -139,
      93,  -139,    91,  -139,   122,   159,   122,  -139,  -139,  -139,
      -3,  -139,  -139,   159,    80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     4,     0,     0,     1,    19,     3,    20,    21,     0,
       2,     7,     8,     0,     9,    25,     6,    17,     0,    14,
      15,     0,     0,    24,    27,    25,     0,    10,     0,     0,
      31,    28,    30,     0,     0,     0,     0,    17,    13,     0,
      96,    97,    98,   113,     0,   114,   111,   102,   112,    16,
      68,    70,    72,    74,    82,    86,    90,     0,    95,   100,
      99,   104,   105,     0,     0,    49,    52,     0,     0,     0,
       0,     0,    23,    33,    34,    38,    39,    40,    41,     0,
      61,   100,    26,     0,    18,     0,    71,   108,     0,     0,
       0,    77,    76,    84,    83,    75,    80,    79,    78,     0,
       0,    88,    87,     0,    91,    92,    93,     0,    94,    32,
      29,    54,     0,     0,    55,     0,     0,    57,    48,    62,
      65,    59,    63,    64,    66,    60,     0,    22,   103,   110,
       0,   107,     0,    67,    69,    73,    81,    85,    89,     0,
      51,     0,     0,     0,     0,    56,     0,    58,   106,     0,
     101,     0,     0,    50,    53,    36,    46,     0,     0,    44,
      33,   109,     0,    12,     0,     0,     0,    11,    37,    47,
      42,    35,    45,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,   136,  -139,  -139,  -118,   124,  -139,
      -2,  -139,   140,  -139,   139,  -139,    92,   -79,   -65,  -139,
    -138,  -139,  -139,  -139,  -139,  -139,  -139,   -37,  -139,   -29,
      69,   -38,  -139,  -139,    68,  -139,    71,  -139,    66,  -139,
     -54,  -139,  -139,   -26,  -139,  -139,  -139,  -139,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    11,    12,   140,    18,    19,    20,
      21,    14,    22,    23,    24,    31,    32,    72,    73,   157,
      74,    75,    76,   111,   142,    77,    78,    79,   126,    80,
      50,    51,    52,    99,    53,   100,    54,   103,    55,   107,
      56,    57,    58,    59,    60,    61,   130,   131,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      49,    13,    85,   108,   127,   156,    86,    81,    13,     5,
      91,    92,   139,    81,     5,    93,    94,    27,    28,    89,
       1,     5,   143,   152,    95,     7,   169,     6,   172,    96,
       7,    89,   115,   162,    89,   101,   102,     7,   112,     5,
     173,   116,     8,    81,    97,    98,     4,     8,    17,     9,
     129,   132,   134,   138,     8,     7,     9,    81,   146,    15,
      25,    81,    81,   154,    26,    87,    65,   159,    39,    88,
      66,   153,     8,   165,    40,    29,    41,    89,   155,    93,
      94,   160,    30,    42,    67,   104,   105,   106,    68,   147,
      43,    44,   163,    28,   167,    28,    45,    34,    69,   168,
      81,   171,    33,    46,    70,    36,    37,    71,    63,   141,
      64,    83,   161,    84,    89,   158,    81,    81,    26,    90,
      81,   109,   113,    81,    47,    65,    48,    39,   117,    66,
     118,   144,   128,    40,   145,    41,   170,   151,    81,   148,
      81,   149,    42,    67,   174,   150,    16,    68,   166,    43,
      44,   114,    38,    39,   164,    45,   110,    69,   133,    40,
       0,    41,    46,    70,    39,    35,    71,   135,    42,   137,
      40,   136,    41,    82,     0,    43,    44,     0,     0,    42,
       0,    45,     0,    47,     0,    48,    43,    44,    46,     0,
      39,     0,    45,     0,   119,     0,    40,     0,    41,    46,
       0,     0,     0,     0,     0,    42,     0,     0,     0,    47,
       0,    48,    43,     0,     0,     0,     0,     0,    45,     0,
      47,     0,    48,     0,     0,    46,   120,   121,   122,     0,
       0,   123,   124,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    48
};

static const yytype_int16 yycheck[] =
{
      29,     3,    39,    57,    83,   143,    44,    33,    10,    26,
      17,    18,    29,    39,    26,    22,    23,     3,     4,    34,
      39,    26,    37,   141,    31,    42,   164,    39,   166,    36,
      42,    34,    69,   151,    34,    11,    12,    42,    67,    26,
      43,    70,    59,    69,    51,    52,     0,    59,    61,    61,
      87,    88,    90,   107,    59,    42,    61,    83,    58,     5,
       5,    87,    88,   142,     9,     5,     3,   146,     5,     9,
       7,     8,    59,    30,    11,    19,    13,    34,   143,    22,
      23,   146,    61,    20,    21,    13,    14,    15,    25,   126,
      27,    28,     3,     4,     3,     4,    33,     3,    35,   164,
     126,   166,     6,    40,    41,    40,    61,    44,     9,   111,
       4,     6,   149,    10,    34,   144,   142,   143,     9,    38,
     146,    10,    61,   149,    61,     3,    63,     5,     3,     7,
       3,    16,     6,    11,     3,    13,   165,   139,   164,     6,
     166,     4,    20,    21,   173,    10,    10,    25,    55,    27,
      28,     3,    28,     5,    37,    33,    64,    35,    89,    11,
      -1,    13,    40,    41,     5,    25,    44,    99,    20,   103,
      11,   100,    13,    34,    -1,    27,    28,    -1,    -1,    20,
      -1,    33,    -1,    61,    -1,    63,    27,    28,    40,    -1,
       5,    -1,    33,    -1,    16,    -1,    11,    -1,    13,    40,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    61,
      -1,    63,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      61,    -1,    63,    -1,    -1,    40,    48,    49,    50,    -1,
      -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    65,    66,     0,    26,    39,    42,    59,    61,
      67,    68,    69,    74,    75,     5,    68,    61,    71,    72,
      73,    74,    76,    77,    78,     5,     9,     3,     4,    19,
      61,    79,    80,     6,     3,    76,    40,    61,    72,     5,
      11,    13,    20,    27,    28,    33,    40,    61,    63,    93,
      94,    95,    96,    98,   100,   102,   104,   105,   106,   107,
     108,   109,   112,     9,     4,     3,     7,    21,    25,    35,
      41,    44,    81,    82,    84,    85,    86,    89,    90,    91,
      93,   107,    78,     6,    10,    91,    95,     5,     9,    34,
      38,    17,    18,    22,    23,    31,    36,    51,    52,    97,
      99,    11,    12,   101,    13,    14,    15,   103,   104,    10,
      80,    87,    93,    61,     3,    91,    93,     3,     3,    16,
      48,    49,    50,    53,    54,    56,    92,    81,     6,    91,
     110,   111,    91,    94,    95,    98,   100,   102,   104,    29,
      70,    74,    88,    37,    16,     3,    58,    91,     6,     4,
      10,    74,    71,     8,    81,    82,    84,    83,    93,    81,
      82,    91,    71,     3,    37,    30,    55,     3,    82,    84,
      93,    82,    84,    43,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    84,    84,    84,    84,    85,    85,
      86,    87,    87,    88,    88,    89,    89,    90,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   103,   104,   104,   105,   105,   105,   106,
     106,   107,   107,   108,   108,   108,   109,   110,   110,   111,
     111,   112,   112,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     2,     1,     1,     1,
       3,     4,     3,     3,     1,     1,     3,     1,     4,     1,
       1,     1,     6,     5,     1,     0,     3,     1,     2,     3,
       1,     1,     3,     1,     1,     6,     4,     6,     1,     1,
       1,     1,     3,     5,     4,     6,     4,     6,     2,     1,
       4,     2,     0,     2,     0,     2,     3,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     1,     1,     4,     1,     0,     3,
       1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 164 "parser.y" /* yacc.c:1646  */
    { syntaxTree = (yyvsp[0].tree);}
#line 1469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = NULL; printf("%s\n", yylval.tinfo->tokenstr);}
#line 1475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = NULL; printf("%s\n", yylval.tinfo->tokenstr);}
#line 1481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 1487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = addSibling((yyvsp[-1].tree),(yyvsp[0].tree));/* addSibling*/ }
#line 1493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree); }
#line 1505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree); }
#line 1511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[-1].tree); setType((yyvsp[-1].tree),(yyvsp[-2].type),false);/* DRBC Note: Be careful! And setType.*/}
#line 1517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[-1].tree); setType((yyvsp[-1].tree),(yyvsp[-2].type),true);}
#line 1523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[-1].tree); setType((yyvsp[-1].tree),(yyvsp[-2].type),false);/* DRBC Note: Be careful! And setType.*/}
#line 1529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = addSibling((yyvsp[-2].tree),(yyvsp[0].tree));/* addSibling */}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[-2].tree); if ((yyval.tree) != NULL) (yyval.tree) -> child[0] = (yyvsp[0].tree);/* DRBC Note: $$ = $1; if ($$ != NULL) $$->child[0] = $3; */}
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newDeclNode(VarK,UndefinedType,(yyvsp[0].tinfo));/* newDeclNode */}
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newDeclNode(VarK,UndefinedType,(yyvsp[-3].tinfo)); (yyval.tree) -> isArray = true; (yyvsp[-3].tinfo)->nvalue=(yyvsp[-1].tinfo)->nvalue+1; (yyval.tree)->size=(yyvsp[-1].tinfo)->nvalue+1;}
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.type) = Integer;/* Integer*/ }
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.type) = Boolean;/* Boolean*/}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.type) = Char;/* Char */}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = newDeclNode(FuncK,(yyvsp[-5].type),(yyvsp[-4].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = newDeclNode(FuncK,Void,(yyvsp[-4].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = addSibling((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree); setType((yyvsp[0].tree),(yyvsp[-1].type),false);/* DRBC Note: Be careful! And setType.*/}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = addSibling((yyvsp[-2].tree), (yyvsp[0].tree));/* addSibling*/}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newDeclNode(ParamK, UndefinedType, (yyvsp[0].tinfo));/* newDeclNode*/}
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newDeclNode(ParamK, UndefinedType, (yyvsp[-2].tinfo)); (yyval.tree)->isArray = true;/* newDeclNode*/}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(IfK,(yyvsp[-5].tinfo),(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(WhileK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(ForK,(yyvsp[-5].tinfo),newDeclNode(VarK,Integer,(yyvsp[-4].tinfo)),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(RangeK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(RangeK,(yyvsp[-3].tinfo),(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(IfK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(IfK,(yyvsp[-5].tinfo),(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(WhileK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(ForK,(yyvsp[-5].tinfo),newDeclNode(VarK,Integer,(yyvsp[-4].tinfo)),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = NULL;/* NULL*/}
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(CompoundK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[-1].tree));}
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = addSibling((yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = NULL; /* NULL*/}
#line 1751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 266 "parser.y" /* yacc.c:1646  */
    {(yyvsp[0].tree) == NULL ? (yyval.tree) = (yyvsp[-1].tree) : (yyval.tree) = addSibling((yyvsp[-1].tree),(yyvsp[0].tree));/* addSibling DRBC Note: $2 might legitamately be empty here. If so $$ = $1;*/}
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = NULL; /* NULL*/}
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 270 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(ReturnK,(yyvsp[-1].tinfo));/* newStmtNode*/}
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 271 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(ReturnK,(yyvsp[-2].tinfo),(yyvsp[-1].tree));/* newStmtNode*/}
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 274 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newStmtNode(BreakK,(yyvsp[-1].tinfo));/* newStmtNode*/}
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(AssignK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(AssignK,(yyvsp[0].tinfo),(yyvsp[-1].tree));/* newExpNode*/}
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(AssignK,(yyvsp[0].tinfo),(yyvsp[-1].tree));/* newExpNode*/}
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 280 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree); }
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 283 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 284 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 285 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 286 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 287 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 290 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 291 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 294 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 295 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 298 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[0].tree));/* newExpNode*/}
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 302 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 303 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 305 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 306 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 307 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 308 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 309 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 310 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 317 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 318 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 321 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 322 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 325 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 326 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 329 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 330 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 332 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 333 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 334 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 337 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[0].tree));
				/*TreeNode* opNode = newExpNode(OpK, (TokenData*)$1);//很重要可以借鉴
				opNode->child[0] = $2;$$ = opNode;*/
				if ( (yyvsp[-1].tinfo)->tokenclass == SIZEOF && (yyvsp[0].tree)->kind.exp == IdK){
					(yyvsp[0].tree)->isArray = true;              // 设置为目标变量的 size
          				
					}
	     			}
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 345 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 348 "parser.y" /* yacc.c:1646  */
    {(yyvsp[0].tinfo)->tokenclass=CHSIGN; (yyval.tinfo)=(yyvsp[0].tinfo);}
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 349 "parser.y" /* yacc.c:1646  */
    {(yyvsp[0].tinfo)->tokenclass=SIZEOF; (yyval.tinfo)=(yyvsp[0].tinfo);}
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 350 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 354 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 355 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 358 "parser.y" /* yacc.c:1646  */
    {	
				(yyval.tree) = newExpNode(OpK,(yyvsp[-2].tinfo),NULL,(yyvsp[-1].tree)); //This creates an OpK node for the array access ([)
				(yyval.tree)->child[0] = newExpNode(IdK,(yyvsp[-3].tinfo)); 
				(yyval.tree)->child[0]->isArray = true;(yyvsp[-1].tree)->isArray = false;
				(yyval.tree)->child[0]->type = Char;
				(yyval.tree)->child[0]->attr.name = (yyvsp[-3].tinfo)->svalue;
				}
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 365 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(IdK,(yyvsp[0].tinfo)); 
							/* TreeNode *decl = (TreeNode *)lookup((char *)$1->svalue);
        						if (decl != NULL) {
            							if (decl->isArray) {
                							$$->child[0]->size = decl->size;  
            							}	
							}*/
							(yyval.tree)->attr.name = (yyvsp[0].tinfo)->svalue; }
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 374 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[-1].tree);(yyval.tree)->varKind = LocalStatic;/* DRBC Note: Be careful!*/}
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 375 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 376 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = (yyvsp[0].tree);}
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 379 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(CallK,(yyvsp[-3].tinfo),(yyvsp[-1].tree));/* $$->isArray = true; */}
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 382 "parser.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);}
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 383 "parser.y" /* yacc.c:1646  */
    { (yyval.tree)=NULL; }
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 386 "parser.y" /* yacc.c:1646  */
    {if ((yyvsp[0].tree)->kind.exp == IdK) (yyvsp[0].tree)->isArray = true;addSibling((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 387 "parser.y" /* yacc.c:1646  */
    {if ((yyvsp[0].tree)->kind.exp == IdK) (yyvsp[0].tree)->isArray = true;(yyval.tree) = (yyvsp[0].tree);}
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 390 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); (yyval.tree)->type=Integer; (yyval.tree) -> attr.value=(yyvsp[0].tinfo)->nvalue;}
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 391 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); (yyval.tree)->type=Char; (yyval.tree)->attr.cvalue=(yyvsp[0].tinfo)->cvalue;}
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 392 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); (yyval.tree)->attr.string = strdup((yyvsp[0].tinfo)->svalue); (yyval.tree)->size = (yyvsp[0].tinfo)->nvalue + 1; (yyval.tree)->isArray = true; setType((yyval.tree),Char,true);}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 393 "parser.y" /* yacc.c:1646  */
    {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); setType((yyval.tree),Boolean,true);}
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2147 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 396 "parser.y" /* yacc.c:1906  */

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
    SymbolTable *symtab;
    symtab = new SymbolTable();
    symtab->debug(false);
    int globalOffset;
    syntaxTree = semanticAnalysis(syntaxTree,symtab,globalOffset);
   if(numErrors == 0){
   	printTree(stdout,syntaxTree);  //ser to true, ture for assignment 4
   }
   //printTree(stdout,syntaxTree);
   printf("Number of warnings: 0\n");
    printf("Number of errors: 0\n");
	
   return 0;
}

