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
#include "codegen.h"
#include "yyerror.h"
#include "scanType.h"
#include "semantics.h"
#include "symbolTable.h"
#include "treeNodes.h"
#include "treeUtils.h"

using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" int tokenErrors;

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

/* Abstract Syntrax Tree */
static TreeNode* syntaxTree;
int numErrors;
int numWarnings;


#line 104 "parser.tab.c" /* yacc.c:339  */

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
    FIRSTOP = 258,
    IF = 259,
    THEN = 260,
    ELSE = 261,
    FOR = 262,
    TO = 263,
    BY = 264,
    WHILE = 265,
    DO = 266,
    BREAK = 267,
    ADDASS = 268,
    SUBASS = 269,
    MULASS = 270,
    DIVASS = 271,
    MIN = 272,
    MAX = 273,
    ID = 274,
    CHARCONST = 275,
    NUMCONST = 276,
    BOOLCONST = 277,
    STRINGCONST = 278,
    CHAR = 279,
    INT = 280,
    BOOL = 281,
    STATIC = 282,
    NEQ = 283,
    EQ = 284,
    LEQ = 285,
    GEQ = 286,
    AND = 287,
    OR = 288,
    NOT = 289,
    INC = 290,
    DEC = 291,
    PRECOMPILER = 292,
    ERROR = 293,
    RETURN = 294,
    CHSIGN = 295,
    SIZEOF = 296,
    LASTOP = 297,
    LASTTERM = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "parser.y" /* yacc.c:355  */

   TokenData *tinfo ;
   TreeNode *tnode ;
   ExpType etype;

#line 194 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   670

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    43,     2,     2,
      29,    30,    42,    40,    36,    38,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    28,
      33,    35,    34,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    85,    86,    87,    90,    91,    94,    95,
      96,    99,   100,   101,   105,   106,   107,   108,   111,   112,
     113,   114,   117,   118,   119,   120,   123,   124,   127,   128,
     131,   132,   133,   136,   137,   138,   139,   140,   141,   142,
     145,   146,   149,   150,   151,   152,   155,   156,   159,   160,
     161,   164,   165,   166,   169,   170,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   187,   188,   189,
     190,   191,   194,   195,   196,   197,   198,   201,   202,   203,
     206,   209,   210,   213,   214,   217,   218,   221,   224,   225,
     226,   227,   228,   229,   230,   231,   234,   235,   236,   237,
     238,   241,   242,   243,   246,   247,   248,   251,   252,   253,
     256,   257,   260,   261,   262,   263,   264,   265,   268,   269,
     272,   273,   276,   277,   278,   281,   282,   285,   286,   287,
     290,   291,   292,   295,   296,   297,   300,   301,   302,   305,
     306,   309,   310,   317,   318,   319,   320,   321,   324,   327,
     328,   331,   332,   335,   336,   337,   338
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FIRSTOP", "IF", "THEN", "ELSE", "FOR",
  "TO", "BY", "WHILE", "DO", "BREAK", "ADDASS", "SUBASS", "MULASS",
  "DIVASS", "MIN", "MAX", "ID", "CHARCONST", "NUMCONST", "BOOLCONST",
  "STRINGCONST", "CHAR", "INT", "BOOL", "STATIC", "';'", "'('", "')'",
  "'{'", "'}'", "'<'", "'>'", "'='", "','", "':'", "'-'", "'?'", "'+'",
  "'/'", "'*'", "'%'", "'['", "']'", "NEQ", "EQ", "LEQ", "GEQ", "AND",
  "OR", "NOT", "INC", "DEC", "PRECOMPILER", "ERROR", "RETURN", "CHSIGN",
  "SIZEOF", "LASTOP", "LASTTERM", "$accept", "program", "precomList",
  "declList", "decl", "varDecl", "scopedVarDecl", "varDeclList",
  "varDeclInit", "varDeclId", "typeSpec", "funDecl", "parms", "parmList",
  "parmTypeList", "parmIdList", "parmId", "stmt", "matched", "iterRange",
  "unmatched", "expStmt", "compoundStmt", "localDecls", "stmtList",
  "returnStmt", "breakStmt", "exp", "assignop", "simpleExp", "andExp",
  "unaryRelExp", "relExp", "relop", "minmaxExp", "minmaxop", "sumExp",
  "sumop", "mulExp", "mulop", "unaryExp", "unaryop", "factor", "mutable",
  "immutable", "call", "args", "argList", "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    59,    40,
      41,   123,   125,    60,    62,    61,    44,    58,    45,    63,
      43,    47,    42,    37,    91,    93,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298
};
# endif

#define YYPACT_NINF -174

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-174)))

#define YYTABLE_NINF -151

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,  -174,    71,    24,  -174,   285,    53,  -174,  -174,  -174,
    -174,   644,  -174,  -174,    17,  -174,   -16,    43,   113,  -174,
      61,    21,  -174,   152,    -9,   150,   365,  -174,    33,  -174,
      73,   376,     2,    80,    81,    92,  -174,  -174,   326,  -174,
      72,   146,  -174,  -174,  -174,  -174,   400,  -174,  -174,  -174,
     411,    76,   104,  -174,  -174,   618,   214,   182,  -174,   117,
    -174,  -174,  -174,  -174,  -174,  -174,    98,   -16,  -174,    72,
      76,   -17,    86,   125,  -174,   199,   127,     2,   144,  -174,
     143,   435,    94,   147,    76,   278,    72,  -174,   446,   470,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,   586,   586,
    -174,  -174,   600,  -174,  -174,  -174,   611,    72,  -174,  -174,
    -174,   142,    85,   218,   481,   188,   365,   180,  -174,  -174,
     341,  -174,  -174,  -174,  -174,  -174,  -174,  -174,   185,  -174,
    -174,   238,    94,  -174,   186,   190,   172,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,   435,  -174,  -174,  -174,   505,    72,
     104,    72,  -174,   181,   214,    72,   182,    72,  -174,  -174,
     184,  -174,  -174,    35,     9,   200,     6,  -174,   384,  -174,
     208,  -174,   218,  -174,  -174,   435,  -174,  -174,    94,  -174,
     277,   316,   277,   516,   277,   239,  -174,   141,    93,  -174,
    -174,   218,  -174,   234,   540,   224,   365,  -174,  -174,   243,
      56,   233,     5,  -174,  -174,    65,    89,   155,  -174,  -174,
     277,    90,    10,   220,    16,   277,   261,   277,   551,  -174,
     168,  -174,  -174,  -174,  -174,   316,   316,   516,   316,  -174,
    -174,  -174,  -174,  -174,    72,     7,  -174,   234,   262,   259,
     575,   316,   316,    72,    76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     4,     0,     0,     1,     0,     0,    32,    30,    31,
       3,     0,     7,     8,     0,     9,    21,    26,     0,    20,
      22,     0,     6,    35,    26,     0,     0,    29,     0,    12,
       0,     0,    38,     0,     0,    40,    43,    13,     0,    11,
       0,   141,   154,   153,   156,   155,     0,   136,   138,   137,
       0,    24,   102,   105,   108,   111,   119,   123,   128,     0,
     134,   140,   139,   144,   145,    28,     0,    19,    18,    25,
      23,    47,    51,    46,    49,     0,     0,    36,     0,   147,
       0,     0,   146,     0,    91,   140,   109,   107,     0,     0,
     121,   120,   113,   114,   117,   116,   112,   115,     0,     0,
     126,   125,     0,   131,   130,   132,     0,   135,   133,    27,
      53,     0,     0,    39,     0,     0,     0,     0,    79,    82,
       0,    34,    54,    55,    63,    64,    65,    66,     0,    44,
      42,     0,     0,   152,     0,   149,     0,    97,    98,    99,
     100,    96,    94,    95,     0,   143,    89,    90,     0,   103,
     101,   106,   104,   110,   118,   124,   122,   129,   127,    52,
       0,    48,    78,    59,     0,     0,     0,    87,    84,    85,
       0,    77,    37,    33,   148,     0,   142,    92,    93,    88,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    86,
     151,     0,    73,    54,     0,     0,     0,    60,    72,    54,
       0,     0,     0,    61,    75,     0,    21,     0,    80,    83,
       0,    59,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    17,    15,    58,    57,     0,     0,     0,     0,    56,
      74,    71,    62,    76,    70,    67,    14,     0,     0,     0,
       0,     0,     0,    69,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,  -174,  -174,   263,  -174,  -174,   -11,   245,  -174,
      -1,  -174,   235,  -174,   203,  -174,   170,  -105,  -173,    74,
      -5,  -174,  -174,  -174,  -174,  -174,  -174,   -42,   198,   -25,
     215,   -19,  -174,  -174,   204,  -174,   189,  -174,   205,  -174,
     -47,  -174,  -174,   -26,  -174,  -174,  -174,  -174,  -174
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    11,    12,    13,   186,    18,    19,    20,
      33,    15,    34,    35,    36,    73,    74,   121,   122,   201,
     123,   124,   125,   168,   188,   126,   127,   128,   144,    84,
      52,    53,    54,    98,    55,    99,    56,   102,    57,   106,
      58,    59,    60,    85,    62,    63,   134,   135,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    51,    14,    25,    83,    61,    70,   193,   197,   199,
      14,   203,   108,   218,   182,   226,   240,   184,    23,   -50,
      38,    26,    32,     1,    61,     5,   173,   228,   110,    27,
     -45,    87,   -45,    61,    65,    28,    24,   223,   133,   136,
     180,   181,   229,     6,   232,     7,     8,     9,     7,     8,
       9,   -41,   237,   238,    66,   203,    88,    88,    88,   158,
      88,    88,    61,    61,    79,   216,    16,    88,   229,   232,
     152,     4,    61,    61,    67,   192,    61,   198,   170,    10,
      61,    71,    21,   209,    17,    79,   160,    28,    61,   164,
      61,   166,    17,   219,   191,   225,   181,   114,    31,    72,
     115,    79,   177,   116,    72,   117,   179,   137,   138,   139,
     140,    75,    41,    42,    43,    44,    45,   221,   107,    79,
      76,   118,    46,    79,   119,   208,    26,    88,   129,   141,
     111,    47,    48,   190,    27,    49,    41,    42,    43,    44,
      45,    29,   206,   109,   132,    50,    46,   142,   143,    30,
     120,     7,     8,     9,    89,    47,    48,    61,   202,    49,
      17,   112,    41,    42,    43,    44,    45,   187,    61,   212,
      61,   214,    46,  -150,   131,    80,   207,   145,    39,   204,
      37,    47,    48,   222,   205,    49,    30,   159,   -21,    26,
      81,    30,    61,   235,   220,    50,   236,    27,    90,    91,
     113,    61,   202,   114,    30,   224,   115,   165,   167,   116,
     230,   117,   233,   171,    61,   244,   174,   176,    41,    42,
      43,    44,    45,   103,   104,   105,   175,   118,    46,   110,
     119,   137,   138,   139,   140,   183,   189,    47,    48,   172,
     210,    49,   114,   213,   217,   115,   162,    79,   116,   215,
     117,    50,   100,   141,   101,   227,   120,    41,    42,    43,
      44,    45,   231,     7,     8,     9,   118,    46,   241,   119,
     242,   142,   143,    78,    22,    68,    47,    48,   191,   130,
      49,   114,   161,   148,   115,   -10,    16,   116,   154,   117,
      50,   137,   138,   139,   140,   120,    41,    42,    43,    44,
      45,   239,   153,   150,    17,   118,    46,   156,   119,   -10,
     -10,   -10,     0,   141,     0,    47,    48,   191,     0,    49,
     194,     0,     0,   195,     0,     0,   196,    77,   117,    50,
       0,   146,   147,     0,   120,    41,    42,    43,    44,    45,
       0,     0,   132,     0,   118,    46,     0,   119,     0,     0,
       7,     8,     9,     0,    47,    48,   -41,     0,    49,     0,
      41,    42,    43,    44,    45,     0,    40,     0,    50,   169,
      46,     0,     0,   120,     0,     0,     0,    69,     0,    47,
      48,     0,     0,    49,    41,    42,    43,    44,    45,     0,
       0,     0,     0,    50,    46,    41,    42,    43,    44,    45,
       0,    82,     0,    47,    48,    46,     0,    49,     7,     8,
       9,   185,    86,     0,    47,    48,     0,    50,    49,    41,
      42,    43,    44,    45,     0,     0,     0,     0,    50,    46,
      41,    42,    43,    44,    45,     0,   132,     0,    47,    48,
      46,     0,    49,     0,     0,     0,     0,   149,     0,    47,
      48,     0,    50,    49,    41,    42,    43,    44,    45,     0,
       0,     0,     0,    50,    46,    41,    42,    43,    44,    45,
       0,   151,     0,    47,    48,    46,     0,    49,     0,     0,
       0,     0,   163,     0,    47,    48,     0,    50,    49,    41,
      42,    43,    44,    45,     0,     0,     0,     0,    50,    46,
      41,    42,    43,    44,    45,     0,   178,     0,    47,    48,
      46,     0,    49,     0,     0,     0,     0,   200,     0,    47,
      48,     0,    50,    49,    41,    42,    43,    44,    45,     0,
       0,     0,     0,    50,    46,    41,    42,    43,    44,    45,
       0,   211,     0,    47,    48,    46,     0,    49,     0,     0,
       0,     0,   234,     0,    47,    48,     0,    50,    49,    41,
      42,    43,    44,    45,     0,     0,     0,     0,    50,    46,
      41,    42,    43,    44,    45,     0,   243,     0,    47,    48,
      46,     0,    49,     0,     0,     0,     0,    40,     0,    47,
      48,     0,    50,    49,    41,    42,    43,    44,    45,     0,
       0,   155,     0,    50,    46,    41,    42,    43,    44,    45,
       0,     0,   157,    47,    48,    46,     0,    49,     0,    41,
      42,    43,    44,    45,    47,    48,     0,    50,    49,    46,
      41,    42,    43,    44,    45,    90,    91,     0,    47,    48,
      46,     0,    49,     0,    -2,     5,     0,     0,     0,    47,
      48,    92,    93,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,    94,    95,    96,    97,     7,     8,
       9
};

static const yytype_int16 yycheck[] =
{
      26,    26,     3,    14,    46,    31,    31,   180,   181,   182,
      11,   184,    59,     8,     5,     5,     9,    11,     1,    36,
      29,    37,     1,    55,    50,     1,   131,    11,    45,    45,
      28,    50,    30,    59,     1,    44,    19,   210,    80,    81,
       5,     6,   215,    19,   217,    24,    25,    26,    24,    25,
      26,    30,   225,   226,    21,   228,    51,    51,    51,   106,
      51,    51,    88,    89,    29,     9,     1,    51,   241,   242,
      89,     0,    98,    99,     1,   180,   102,   182,   120,    55,
     106,     1,    29,   188,    19,    29,     1,    44,   114,   114,
     116,   116,    19,    28,     1,     5,     6,     4,    37,    19,
       7,    29,   144,    10,    19,    12,   148,    13,    14,    15,
      16,    30,    19,    20,    21,    22,    23,    28,     1,    29,
      28,    28,    29,    29,    31,    32,    37,    51,     1,    35,
      44,    38,    39,   175,    45,    42,    19,    20,    21,    22,
      23,    28,     1,    45,     1,    52,    29,    53,    54,    36,
      57,    24,    25,    26,    50,    38,    39,   183,   183,    42,
      19,    36,    19,    20,    21,    22,    23,   168,   194,   194,
     196,   196,    29,    30,    30,    29,   187,    30,    28,   184,
      28,    38,    39,    28,   185,    42,    36,    45,    36,    37,
      44,    36,   218,   218,   205,    52,    28,    45,    17,    18,
       1,   227,   227,     4,    36,   210,     7,    19,    28,    10,
     215,    12,   217,    28,   240,   240,    30,    45,    19,    20,
      21,    22,    23,    41,    42,    43,    36,    28,    29,    45,
      31,    13,    14,    15,    16,    35,    28,    38,    39,     1,
       6,    42,     4,    19,    11,     7,    28,    29,    10,     6,
      12,    52,    38,    35,    40,    35,    57,    19,    20,    21,
      22,    23,     1,    24,    25,    26,    28,    29,     6,    31,
      11,    53,    54,    38,    11,    30,    38,    39,     1,    76,
      42,     4,   112,    85,     7,     0,     1,    10,    99,    12,
      52,    13,    14,    15,    16,    57,    19,    20,    21,    22,
      23,   227,    98,    88,    19,    28,    29,   102,    31,    24,
      25,    26,    -1,    35,    -1,    38,    39,     1,    -1,    42,
       4,    -1,    -1,     7,    -1,    -1,    10,     1,    12,    52,
      -1,    53,    54,    -1,    57,    19,    20,    21,    22,    23,
      -1,    -1,     1,    -1,    28,    29,    -1,    31,    -1,    -1,
      24,    25,    26,    -1,    38,    39,    30,    -1,    42,    -1,
      19,    20,    21,    22,    23,    -1,     1,    -1,    52,    28,
      29,    -1,    -1,    57,    -1,    -1,    -1,     1,    -1,    38,
      39,    -1,    -1,    42,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    52,    29,    19,    20,    21,    22,    23,
      -1,     1,    -1,    38,    39,    29,    -1,    42,    24,    25,
      26,    27,     1,    -1,    38,    39,    -1,    52,    42,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    52,    29,
      19,    20,    21,    22,    23,    -1,     1,    -1,    38,    39,
      29,    -1,    42,    -1,    -1,    -1,    -1,     1,    -1,    38,
      39,    -1,    52,    42,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    52,    29,    19,    20,    21,    22,    23,
      -1,     1,    -1,    38,    39,    29,    -1,    42,    -1,    -1,
      -1,    -1,     1,    -1,    38,    39,    -1,    52,    42,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    52,    29,
      19,    20,    21,    22,    23,    -1,     1,    -1,    38,    39,
      29,    -1,    42,    -1,    -1,    -1,    -1,     1,    -1,    38,
      39,    -1,    52,    42,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    52,    29,    19,    20,    21,    22,    23,
      -1,     1,    -1,    38,    39,    29,    -1,    42,    -1,    -1,
      -1,    -1,     1,    -1,    38,    39,    -1,    52,    42,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    52,    29,
      19,    20,    21,    22,    23,    -1,     1,    -1,    38,    39,
      29,    -1,    42,    -1,    -1,    -1,    -1,     1,    -1,    38,
      39,    -1,    52,    42,    19,    20,    21,    22,    23,    -1,
      -1,     1,    -1,    52,    29,    19,    20,    21,    22,    23,
      -1,    -1,     1,    38,    39,    29,    -1,    42,    -1,    19,
      20,    21,    22,    23,    38,    39,    -1,    52,    42,    29,
      19,    20,    21,    22,    23,    17,    18,    -1,    38,    39,
      29,    -1,    42,    -1,     0,     1,    -1,    -1,    -1,    38,
      39,    33,    34,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    46,    47,    48,    49,    24,    25,
      26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    63,    64,     0,     1,    19,    24,    25,    26,
      55,    65,    66,    67,    72,    73,     1,    19,    69,    70,
      71,    29,    66,     1,    19,    69,    37,    45,    44,    28,
      36,    37,     1,    72,    74,    75,    76,    28,    29,    28,
       1,    19,    20,    21,    22,    23,    29,    38,    39,    42,
      52,    91,    92,    93,    94,    96,    98,   100,   102,   103,
     104,   105,   106,   107,   110,     1,    21,     1,    70,     1,
      91,     1,    19,    77,    78,    30,    28,     1,    74,    29,
      29,    44,     1,    89,    91,   105,     1,    93,    51,    50,
      17,    18,    33,    34,    46,    47,    48,    49,    95,    97,
      38,    40,    99,    41,    42,    43,   101,     1,   102,    45,
      45,    44,    36,     1,     4,     7,    10,    12,    28,    31,
      57,    79,    80,    82,    83,    84,    87,    88,    89,     1,
      76,    30,     1,    89,   108,   109,    89,    13,    14,    15,
      16,    35,    53,    54,    90,    30,    53,    54,    90,     1,
      92,     1,    93,    96,    98,     1,   100,     1,   102,    45,
       1,    78,    28,     1,    91,    19,    91,    28,    85,    28,
      89,    28,     1,    79,    30,    36,    45,    89,     1,    89,
       5,     6,     5,    35,    11,    27,    68,    72,    86,    28,
      89,     1,    79,    80,     4,     7,    10,    80,    79,    80,
       1,    81,    91,    80,    82,    72,     1,    69,    32,    79,
       6,     1,    91,    19,    91,     6,     9,    11,     8,    28,
      69,    28,    28,    80,    82,     5,     5,    35,    11,    80,
      82,     1,    80,    82,     1,    91,    28,    80,    80,    81,
       9,     6,    11,     1,    91
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    70,    70,    71,    71,    71,    71,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    77,    77,
      77,    78,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    82,    83,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    91,    91,    91,    92,    92,    92,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    98,    99,    99,   100,   100,   100,
     101,   101,   101,   102,   102,   102,   103,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   107,   108,
     108,   109,   109,   110,   110,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     2,     1,     1,     1,
       1,     3,     3,     3,     4,     3,     3,     3,     3,     3,
       1,     1,     1,     3,     3,     3,     1,     4,     3,     2,
       1,     1,     1,     6,     5,     2,     4,     6,     3,     5,
       1,     0,     3,     1,     3,     1,     2,     2,     3,     1,
       1,     1,     3,     2,     1,     1,     6,     6,     6,     2,
       4,     4,     6,     1,     1,     1,     1,     3,     5,     5,
       3,     3,     4,     4,     6,     4,     6,     2,     2,     1,
       4,     2,     0,     2,     0,     2,     3,     2,     3,     2,
       2,     1,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     1,     3,     2,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     3,     1,     1,     3,     1,     3,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     4,     3,     1,     1,     2,     2,     4,     1,
       0,     3,     1,     1,     1,     1,     1
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
#line 82 "parser.y" /* yacc.c:1646  */
    { syntaxTree = (yyvsp[0].tnode); }
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; printf("%s\n", yylval.tinfo->tokenstr); }
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; printf("%s\n", yylval.tinfo->tokenstr);}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "parser.y" /* yacc.c:1646  */
    {  (yyval.tnode) = NULL;  }
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = addSibling((yyvsp[-1].tnode), (yyvsp[0].tnode));  }
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 99 "parser.y" /* yacc.c:1646  */
    { setType((yyvsp[-2].etype), (yyvsp[-1].tnode), false); (yyval.tnode) = (yyvsp[-1].tnode);  }
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 101 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 105 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[-1].tnode); setType((yyvsp[-2].etype), (yyvsp[-1].tnode), true); }
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 106 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[-1].tnode); setType((yyvsp[-2].etype), (yyvsp[-1].tnode), false); }
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = addSibling((yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 112 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode);  }
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 114 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 117 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[-2].tnode); if ((yyval.tnode) != NULL) (yyval.tnode)->child[0] = (yyvsp[0].tnode); }
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 119 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 120 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 123 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newDeclNode(VarK, UndefinedType, (yyvsp[0].tinfo)); }
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 124 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newDeclNode(VarK, UndefinedType, (yyvsp[-3].tinfo));
                                                       (yyval.tnode)->isArray = true;
                                                       (yyval.tnode)->size = 1 + (yyvsp[-1].tinfo)->nvalue; }
#line 1711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 127 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 128 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok;  }
#line 1723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 131 "parser.y" /* yacc.c:1646  */
    { (yyval.etype) = Integer; }
#line 1729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.etype) = Boolean;}
#line 1735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.etype) = Char;}
#line 1741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 136 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newDeclNode(FuncK, (yyvsp[-5].etype), (yyvsp[-4].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newDeclNode(FuncK, Void, (yyvsp[-4].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL;  }
#line 1759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL;  }
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 140 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 141 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL;  }
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL;  }
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 145 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode);}
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = addSibling((yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 152 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 155 "parser.y" /* yacc.c:1646  */
    { setType((yyvsp[-1].etype), (yyvsp[0].tnode), false); (yyval.tnode) = (yyvsp[0].tnode); }
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 156 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = addSibling((yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newDeclNode(ParamK, UndefinedType, (yyvsp[0].tinfo)); }
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newDeclNode(ParamK, UndefinedType, (yyvsp[-2].tinfo)); (yyval.tnode)->isArray = true; }
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(IfK, (yyvsp[-5].tinfo), (yyvsp[-4].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));  }
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(WhileK, (yyvsp[-3].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode));  }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(ForK, (yyvsp[-5].tinfo), NULL, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->child[0] = newDeclNode(VarK, Integer, (yyvsp[-4].tinfo)); }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(RangeK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(RangeK, (yyvsp[-3].tinfo), (yyvsp[-4].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(IfK, (yyvsp[-3].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(IfK, (yyvsp[-5].tinfo), (yyvsp[-4].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 197 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(WhileK, (yyvsp[-3].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(ForK, (yyvsp[-5].tinfo), NULL, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->child[0] = newDeclNode(VarK, Integer, (yyvsp[-4].tinfo)); }
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[-1].tnode); }
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(CompoundK, (yyvsp[-3].tinfo), (yyvsp[-2].tnode), (yyvsp[-1].tnode));  }
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = addSibling((yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 210 "parser.y" /* yacc.c:1646  */
    {  (yyval.tnode) = NULL; }
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = addSibling((yyvsp[-1].tnode), (yyvsp[0].tnode)); }
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 214 "parser.y" /* yacc.c:1646  */
    {  (yyval.tnode) = NULL; }
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 217 "parser.y" /* yacc.c:1646  */
    {  (yyval.tnode) = newStmtNode(ReturnK, (yyvsp[-1].tinfo));}
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(ReturnK, (yyvsp[-2].tinfo), (yyvsp[-1].tnode));  }
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newStmtNode(BreakK, (yyvsp[-1].tinfo)); }
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 224 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(AssignK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(AssignK, (yyvsp[0].tinfo), (yyvsp[-1].tnode)); }
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(AssignK, (yyvsp[0].tinfo), (yyvsp[-1].tnode)); }
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 229 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);  }
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 241 "parser.y" /* yacc.c:1646  */
    {  (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 246 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[0].tnode)); }
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 260 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 261 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 264 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 265 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 269 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 272 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 276 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 281 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 285 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[-2].tnode), (yyvsp[0].tnode)); }
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 286 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 290 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 291 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(OpK, (yyvsp[-1].tinfo), (yyvsp[0].tnode)); }
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 296 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.tinfo) = (yyvsp[0].tinfo); (yyval.tinfo)->tokenclass = CHSIGN; (yyval.tinfo)->tokenstr = (char*)"chsign";  }
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.tinfo) = (yyvsp[0].tinfo); (yyval.tinfo)->tokenclass = SIZEOF; (yyval.tinfo)->tokenstr = (char*)"sizeof";  }
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.tinfo) = (yyvsp[0].tinfo); }
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 305 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 306 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(IdK, (yyvsp[0].tinfo)); }
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 310 "parser.y" /* yacc.c:1646  */
    { TreeNode* tmp = newExpNode(IdK, (yyvsp[-3].tinfo));
                                                       tmp->isArray = true; 
                                                       (yyval.tnode) = newExpNode(OpK, (yyvsp[-2].tinfo), tmp, (yyvsp[-1].tnode));
                                                       (yyval.tnode)->isArray = true;
                                                     }
#line 2405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[-1].tnode); }
#line 2411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 2417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = (yyvsp[0].tnode); }
#line 2423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; yyerrok; }
#line 2435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(CallK, (yyvsp[-3].tinfo), (yyvsp[-1].tnode)); }
#line 2441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 327 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL; }
#line 2453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = addSibling((yyvsp[-2].tnode), (yyvsp[0].tnode));  }
#line 2459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 332 "parser.y" /* yacc.c:1646  */
    {(yyval.tnode) = (yyvsp[0].tnode); }
#line 2465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(ConstantK, (yyvsp[0].tinfo)); (yyval.tnode)->type = Integer; }
#line 2471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(ConstantK, (yyvsp[0].tinfo)); (yyval.tnode)->type = Char; }
#line 2477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(ConstantK, (yyvsp[0].tinfo)); (yyval.tnode)->type = Char; (yyval.tnode)->isArray = true; (yyval.tnode)->size = 1 + (yyvsp[0].tinfo)->nvalue;  }
#line 2483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 338 "parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = newExpNode(ConstantK, (yyvsp[0].tinfo)); (yyval.tnode)->type = Boolean; }
#line 2489 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2493 "parser.tab.c" /* yacc.c:1646  */
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
#line 342 "parser.y" /* yacc.c:1906  */



/*
 * @brief driver code to run the compiler
*/
int main(int argc, char **argv) {
   int option, index;
   char *file = NULL;
   extern FILE *yyin;
//   numErrors = 0, numWarnings = 0;
   SymbolTable *symtab;
   symtab = new SymbolTable();
   symtab->debug(false);
   int globalOffset;

   initErrorProcessing();
   initTokenStrings();

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

   if (numErrors == 0) {
      syntaxTree = semanticAnalysis(syntaxTree, symtab, globalOffset);
      //printTree(stdout, syntaxTree, false, false);
   }

   if (numErrors == 0) {
      codegen(stdout, argv[1], syntaxTree, symtab, globalOffset, false);
   }

   printf("Number of warnings: %d\n", numWarnings);
   printf("Number of errors: %d\n", numErrors + tokenErrors);

   return 0;
}

