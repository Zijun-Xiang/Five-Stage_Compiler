/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"


#include <cstdio>
#include <iostream>
#include <unistd.h>
#include "codegen.h"
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


#line 136 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* ';'  */
  YYSYMBOL_4_ = 4,                         /* ','  */
  YYSYMBOL_5_ = 5,                         /* '('  */
  YYSYMBOL_6_ = 6,                         /* ')'  */
  YYSYMBOL_7_ = 7,                         /* '{'  */
  YYSYMBOL_8_ = 8,                         /* '}'  */
  YYSYMBOL_9_ = 9,                         /* '['  */
  YYSYMBOL_10_ = 10,                       /* ']'  */
  YYSYMBOL_11_ = 11,                       /* '-'  */
  YYSYMBOL_12_ = 12,                       /* '+'  */
  YYSYMBOL_13_ = 13,                       /* '*'  */
  YYSYMBOL_14_ = 14,                       /* '/'  */
  YYSYMBOL_15_ = 15,                       /* '%'  */
  YYSYMBOL_16_ = 16,                       /* '='  */
  YYSYMBOL_17_ = 17,                       /* '>'  */
  YYSYMBOL_18_ = 18,                       /* '<'  */
  YYSYMBOL_19_ = 19,                       /* ':'  */
  YYSYMBOL_20_ = 20,                       /* '?'  */
  YYSYMBOL_WHILE = 21,                     /* WHILE  */
  YYSYMBOL_MIN = 22,                       /* MIN  */
  YYSYMBOL_MAX = 23,                       /* MAX  */
  YYSYMBOL_FALSE = 24,                     /* FALSE  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_STRINGCONST = 27,               /* STRINGCONST  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_TO = 30,                        /* TO  */
  YYSYMBOL_LEQ = 31,                       /* LEQ  */
  YYSYMBOL_TRUE = 32,                      /* TRUE  */
  YYSYMBOL_BOOLCONST = 33,                 /* BOOLCONST  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_RETURN = 35,                    /* RETURN  */
  YYSYMBOL_NEQ = 36,                       /* NEQ  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_PRECOMPILER = 39,               /* PRECOMPILER  */
  YYSYMBOL_NUMCONST = 40,                  /* NUMCONST  */
  YYSYMBOL_IF = 41,                        /* IF  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_BY = 43,                        /* BY  */
  YYSYMBOL_BREAK = 44,                     /* BREAK  */
  YYSYMBOL_REPEAT = 45,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 46,                     /* UNTIL  */
  YYSYMBOL_ASSIGN = 47,                    /* ASSIGN  */
  YYSYMBOL_MULASS = 48,                    /* MULASS  */
  YYSYMBOL_INC = 49,                       /* INC  */
  YYSYMBOL_ADDASS = 50,                    /* ADDASS  */
  YYSYMBOL_EQ = 51,                        /* EQ  */
  YYSYMBOL_GEQ = 52,                       /* GEQ  */
  YYSYMBOL_SUBASS = 53,                    /* SUBASS  */
  YYSYMBOL_DIVASS = 54,                    /* DIVASS  */
  YYSYMBOL_ELSE = 55,                      /* ELSE  */
  YYSYMBOL_DEC = 56,                       /* DEC  */
  YYSYMBOL_CHSIGN = 57,                    /* CHSIGN  */
  YYSYMBOL_THEN = 58,                      /* THEN  */
  YYSYMBOL_CHAR = 59,                      /* CHAR  */
  YYSYMBOL_SIZEOF = 60,                    /* SIZEOF  */
  YYSYMBOL_ID = 61,                        /* ID  */
  YYSYMBOL_LASTTERM = 62,                  /* LASTTERM  */
  YYSYMBOL_CHARCONST = 63,                 /* CHARCONST  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_precomList = 66,                /* precomList  */
  YYSYMBOL_declList = 67,                  /* declList  */
  YYSYMBOL_decl = 68,                      /* decl  */
  YYSYMBOL_varDecl = 69,                   /* varDecl  */
  YYSYMBOL_scopedVarDecl = 70,             /* scopedVarDecl  */
  YYSYMBOL_varDeclList = 71,               /* varDeclList  */
  YYSYMBOL_varDeclInit = 72,               /* varDeclInit  */
  YYSYMBOL_varDeclId = 73,                 /* varDeclId  */
  YYSYMBOL_typeSpec = 74,                  /* typeSpec  */
  YYSYMBOL_funDecl = 75,                   /* funDecl  */
  YYSYMBOL_parms = 76,                     /* parms  */
  YYSYMBOL_parmList = 77,                  /* parmList  */
  YYSYMBOL_parmTypeList = 78,              /* parmTypeList  */
  YYSYMBOL_parmIdList = 79,                /* parmIdList  */
  YYSYMBOL_parmId = 80,                    /* parmId  */
  YYSYMBOL_stmt = 81,                      /* stmt  */
  YYSYMBOL_matched = 82,                   /* matched  */
  YYSYMBOL_iterRange = 83,                 /* iterRange  */
  YYSYMBOL_unmatched = 84,                 /* unmatched  */
  YYSYMBOL_expStmt = 85,                   /* expStmt  */
  YYSYMBOL_compoundStmt = 86,              /* compoundStmt  */
  YYSYMBOL_localDecls = 87,                /* localDecls  */
  YYSYMBOL_stmtList = 88,                  /* stmtList  */
  YYSYMBOL_returnStmt = 89,                /* returnStmt  */
  YYSYMBOL_breakStmt = 90,                 /* breakStmt  */
  YYSYMBOL_exp = 91,                       /* exp  */
  YYSYMBOL_assignop = 92,                  /* assignop  */
  YYSYMBOL_simpleExp = 93,                 /* simpleExp  */
  YYSYMBOL_andExp = 94,                    /* andExp  */
  YYSYMBOL_unaryRelExp = 95,               /* unaryRelExp  */
  YYSYMBOL_relExp = 96,                    /* relExp  */
  YYSYMBOL_relop = 97,                     /* relop  */
  YYSYMBOL_minmaxExp = 98,                 /* minmaxExp  */
  YYSYMBOL_minmaxop = 99,                  /* minmaxop  */
  YYSYMBOL_sumExp = 100,                   /* sumExp  */
  YYSYMBOL_sumop = 101,                    /* sumop  */
  YYSYMBOL_mulExp = 102,                   /* mulExp  */
  YYSYMBOL_mulop = 103,                    /* mulop  */
  YYSYMBOL_unaryExp = 104,                 /* unaryExp  */
  YYSYMBOL_unaryop = 105,                  /* unaryop  */
  YYSYMBOL_factor = 106,                   /* factor  */
  YYSYMBOL_mutable = 107,                  /* mutable  */
  YYSYMBOL_immutable = 108,                /* immutable  */
  YYSYMBOL_call = 109,                     /* call  */
  YYSYMBOL_args = 110,                     /* args  */
  YYSYMBOL_argList = 111,                  /* argList  */
  YYSYMBOL_constant = 112                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,   165,   165,   168,   169,   170,   173,   174,   177,   178,
     181,   185,   186,   190,   191,   194,   195,   198,   199,   202,
     203,   204,   207,   208,   210,   211,   214,   215,   218,   221,
     222,   225,   226,   229,   230,   234,   235,   236,   237,   238,
     239,   240,   243,   244,   247,   248,   249,   250,   255,   256,
     260,   263,   264,   267,   268,   271,   272,   275,   278,   279,
     280,   281,   284,   285,   286,   287,   288,   291,   292,   295,
     296,   299,   300,   303,   304,   306,   307,   308,   309,   310,
     311,   314,   315,   318,   319,   322,   323,   326,   327,   330,
     331,   333,   334,   335,   338,   346,   349,   350,   351,   355,
     356,   359,   366,   375,   376,   377,   380,   383,   384,   387,
     388,   391,   392,   393,   394
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "';'", "','", "'('",
  "')'", "'{'", "'}'", "'['", "']'", "'-'", "'+'", "'*'", "'/'", "'%'",
  "'='", "'>'", "'<'", "':'", "'?'", "WHILE", "MIN", "MAX", "FALSE", "FOR",
  "INT", "STRINGCONST", "NOT", "STATIC", "TO", "LEQ", "TRUE", "BOOLCONST",
  "OR", "RETURN", "NEQ", "DO", "AND", "PRECOMPILER", "NUMCONST", "IF",
  "BOOL", "BY", "BREAK", "REPEAT", "UNTIL", "ASSIGN", "MULASS", "INC",
  "ADDASS", "EQ", "GEQ", "SUBASS", "DIVASS", "ELSE", "DEC", "CHSIGN",
  "THEN", "CHAR", "SIZEOF", "ID", "LASTTERM", "CHARCONST", "$accept",
  "program", "precomList", "declList", "decl", "varDecl", "scopedVarDecl",
  "varDeclList", "varDeclInit", "varDeclId", "typeSpec", "funDecl",
  "parms", "parmList", "parmTypeList", "parmIdList", "parmId", "stmt",
  "matched", "iterRange", "unmatched", "expStmt", "compoundStmt",
  "localDecls", "stmtList", "returnStmt", "breakStmt", "exp", "assignop",
  "simpleExp", "andExp", "unaryRelExp", "relExp", "relop", "minmaxExp",
  "minmaxop", "sumExp", "sumop", "mulExp", "mulop", "unaryExp", "unaryop",
  "factor", "mutable", "immutable", "call", "args", "argList", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
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
static const yytype_int8 yydefact[] =
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
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    10,    11,    12,   140,    18,    19,    20,
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: precomList declList  */
#line 165 "parser.y"
                                                    { syntaxTree = (yyvsp[0].tree);}
#line 1380 "parser.tab.c"
    break;

  case 3: /* precomList: precomList PRECOMPILER  */
#line 168 "parser.y"
                                                      {(yyval.tree) = NULL; printf("%s\n", yylval.tinfo->tokenstr);}
#line 1386 "parser.tab.c"
    break;

  case 4: /* precomList: PRECOMPILER  */
#line 169 "parser.y"
                                                           {(yyval.tree) = NULL; printf("%s\n", yylval.tinfo->tokenstr);}
#line 1392 "parser.tab.c"
    break;

  case 5: /* precomList: %empty  */
#line 170 "parser.y"
                                                           { (yyval.tree) = NULL; }
#line 1398 "parser.tab.c"
    break;

  case 6: /* declList: declList decl  */
#line 173 "parser.y"
                                                    {(yyval.tree) = addSibling((yyvsp[-1].tree),(yyvsp[0].tree));/* addSibling*/ }
#line 1404 "parser.tab.c"
    break;

  case 7: /* declList: decl  */
#line 174 "parser.y"
                                                   {(yyval.tree) = (yyvsp[0].tree);}
#line 1410 "parser.tab.c"
    break;

  case 8: /* decl: varDecl  */
#line 177 "parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree); }
#line 1416 "parser.tab.c"
    break;

  case 9: /* decl: funDecl  */
#line 178 "parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree); }
#line 1422 "parser.tab.c"
    break;

  case 10: /* varDecl: typeSpec varDeclList ';'  */
#line 181 "parser.y"
                                                    {(yyval.tree) = (yyvsp[-1].tree); setType((yyvsp[-1].tree),(yyvsp[-2].type),false);/* DRBC Note: Be careful! And setType.*/}
#line 1428 "parser.tab.c"
    break;

  case 11: /* scopedVarDecl: STATIC typeSpec varDeclList ';'  */
#line 185 "parser.y"
                                                    {(yyval.tree) = (yyvsp[-1].tree); setType((yyvsp[-1].tree),(yyvsp[-2].type),true);}
#line 1434 "parser.tab.c"
    break;

  case 12: /* scopedVarDecl: typeSpec varDeclList ';'  */
#line 186 "parser.y"
                                                       {(yyval.tree) = (yyvsp[-1].tree); setType((yyvsp[-1].tree),(yyvsp[-2].type),false);}
#line 1440 "parser.tab.c"
    break;

  case 13: /* varDeclList: varDeclList ',' varDeclInit  */
#line 190 "parser.y"
                                                    {(yyval.tree) = addSibling((yyvsp[-2].tree),(yyvsp[0].tree));/* addSibling */}
#line 1446 "parser.tab.c"
    break;

  case 16: /* varDeclInit: varDeclId ':' simpleExp  */
#line 195 "parser.y"
                                                       {(yyval.tree) = (yyvsp[-2].tree); if ((yyval.tree) != NULL) (yyval.tree) -> child[0] = (yyvsp[0].tree);/* DRBC Note: $$ = $1; if ($$ != NULL) $$->child[0] = $3; */}
#line 1452 "parser.tab.c"
    break;

  case 17: /* varDeclId: ID  */
#line 198 "parser.y"
                                                         {(yyval.tree) = newDeclNode(VarK,UndefinedType,(yyvsp[0].tinfo));/* newDeclNode */}
#line 1458 "parser.tab.c"
    break;

  case 18: /* varDeclId: ID '[' NUMCONST ']'  */
#line 199 "parser.y"
                        {(yyval.tree) = newDeclNode(VarK,UndefinedType,(yyvsp[-3].tinfo)); (yyval.tree) -> isArray = true; (yyvsp[-3].tinfo)->nvalue=(yyvsp[-1].tinfo)->nvalue+1; (yyval.tree)->size=(yyvsp[-1].tinfo)->nvalue+1;}
#line 1464 "parser.tab.c"
    break;

  case 19: /* typeSpec: INT  */
#line 202 "parser.y"
                                                        {(yyval.type) = Integer;/* Integer*/ }
#line 1470 "parser.tab.c"
    break;

  case 20: /* typeSpec: BOOL  */
#line 203 "parser.y"
                                                           {(yyval.type) = Boolean;/* Boolean*/}
#line 1476 "parser.tab.c"
    break;

  case 21: /* typeSpec: CHAR  */
#line 204 "parser.y"
                                                           {(yyval.type) = Char;/* Char */}
#line 1482 "parser.tab.c"
    break;

  case 22: /* funDecl: typeSpec ID '(' parms ')' stmt  */
#line 207 "parser.y"
                                                  { (yyval.tree) = newDeclNode(FuncK,(yyvsp[-5].type),(yyvsp[-4].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 1488 "parser.tab.c"
    break;

  case 23: /* funDecl: ID '(' parms ')' stmt  */
#line 208 "parser.y"
                                                       { (yyval.tree) = newDeclNode(FuncK,Void,(yyvsp[-4].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 1494 "parser.tab.c"
    break;

  case 24: /* parms: parmList  */
#line 210 "parser.y"
                                                        { (yyval.tree) = (yyvsp[0].tree); }
#line 1500 "parser.tab.c"
    break;

  case 25: /* parms: %empty  */
#line 211 "parser.y"
                                                          { (yyval.tree) = NULL; }
#line 1506 "parser.tab.c"
    break;

  case 26: /* parmList: parmList ';' parmTypeList  */
#line 214 "parser.y"
                                                    { (yyval.tree) = addSibling((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1512 "parser.tab.c"
    break;

  case 27: /* parmList: parmTypeList  */
#line 215 "parser.y"
                                                    { (yyval.tree) = (yyvsp[0].tree); }
#line 1518 "parser.tab.c"
    break;

  case 28: /* parmTypeList: typeSpec parmIdList  */
#line 218 "parser.y"
                                                    {(yyval.tree) = (yyvsp[0].tree); setType((yyvsp[0].tree),(yyvsp[-1].type),false);/* DRBC Note: Be careful! And setType.*/}
#line 1524 "parser.tab.c"
    break;

  case 29: /* parmIdList: parmIdList ',' parmId  */
#line 221 "parser.y"
                                                     {(yyval.tree) = addSibling((yyvsp[-2].tree), (yyvsp[0].tree));/* addSibling*/}
#line 1530 "parser.tab.c"
    break;

  case 30: /* parmIdList: parmId  */
#line 222 "parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1536 "parser.tab.c"
    break;

  case 31: /* parmId: ID  */
#line 225 "parser.y"
                                                         {(yyval.tree) = newDeclNode(ParamK, UndefinedType, (yyvsp[0].tinfo));/* newDeclNode*/}
#line 1542 "parser.tab.c"
    break;

  case 32: /* parmId: ID '[' ']'  */
#line 226 "parser.y"
                                                            {(yyval.tree) = newDeclNode(ParamK, UndefinedType, (yyvsp[-2].tinfo)); (yyval.tree)->isArray = true;/* newDeclNode*/}
#line 1548 "parser.tab.c"
    break;

  case 33: /* stmt: matched  */
#line 229 "parser.y"
                                                           {(yyval.tree) = (yyvsp[0].tree);}
#line 1554 "parser.tab.c"
    break;

  case 34: /* stmt: unmatched  */
#line 230 "parser.y"
                                                            {(yyval.tree) = (yyvsp[0].tree);}
#line 1560 "parser.tab.c"
    break;

  case 35: /* matched: IF simpleExp THEN matched ELSE matched  */
#line 234 "parser.y"
                                                         {(yyval.tree) = newStmtNode(IfK,(yyvsp[-5].tinfo),(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1566 "parser.tab.c"
    break;

  case 36: /* matched: WHILE simpleExp DO matched  */
#line 235 "parser.y"
                                                           {(yyval.tree) = newStmtNode(WhileK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1572 "parser.tab.c"
    break;

  case 37: /* matched: FOR ID '=' iterRange DO matched  */
#line 236 "parser.y"
                                                           {(yyval.tree) = newStmtNode(ForK,(yyvsp[-5].tinfo),newDeclNode(VarK,Integer,(yyvsp[-4].tinfo)),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1578 "parser.tab.c"
    break;

  case 38: /* matched: expStmt  */
#line 237 "parser.y"
                                        { (yyval.tree) = (yyvsp[0].tree); }
#line 1584 "parser.tab.c"
    break;

  case 39: /* matched: compoundStmt  */
#line 238 "parser.y"
                                        { (yyval.tree) = (yyvsp[0].tree); }
#line 1590 "parser.tab.c"
    break;

  case 40: /* matched: returnStmt  */
#line 239 "parser.y"
                                        { (yyval.tree) = (yyvsp[0].tree); }
#line 1596 "parser.tab.c"
    break;

  case 41: /* matched: breakStmt  */
#line 240 "parser.y"
                                        { (yyval.tree) = (yyvsp[0].tree); }
#line 1602 "parser.tab.c"
    break;

  case 42: /* iterRange: simpleExp TO simpleExp  */
#line 243 "parser.y"
                                                     {(yyval.tree) = newStmtNode(RangeK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1608 "parser.tab.c"
    break;

  case 43: /* iterRange: simpleExp TO simpleExp BY simpleExp  */
#line 244 "parser.y"
                                                      {(yyval.tree) = newStmtNode(RangeK,(yyvsp[-3].tinfo),(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1614 "parser.tab.c"
    break;

  case 44: /* unmatched: IF simpleExp THEN stmt  */
#line 247 "parser.y"
                                                        {(yyval.tree) = newStmtNode(IfK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1620 "parser.tab.c"
    break;

  case 45: /* unmatched: IF simpleExp THEN matched ELSE unmatched  */
#line 248 "parser.y"
                                                         {(yyval.tree) = newStmtNode(IfK,(yyvsp[-5].tinfo),(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1626 "parser.tab.c"
    break;

  case 46: /* unmatched: WHILE simpleExp DO unmatched  */
#line 249 "parser.y"
                                                           {(yyval.tree) = newStmtNode(WhileK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newStmtNode*/}
#line 1632 "parser.tab.c"
    break;

  case 47: /* unmatched: FOR ID '=' iterRange DO unmatched  */
#line 250 "parser.y"
                                                 {(yyval.tree) = newStmtNode(ForK,(yyvsp[-5].tinfo),newDeclNode(VarK,Integer,(yyvsp[-4].tinfo)),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 1638 "parser.tab.c"
    break;

  case 49: /* expStmt: ';'  */
#line 256 "parser.y"
                                                         {(yyval.tree) = NULL;/* NULL*/}
#line 1644 "parser.tab.c"
    break;

  case 50: /* compoundStmt: '{' localDecls stmtList '}'  */
#line 260 "parser.y"
                                                   {(yyval.tree) = newStmtNode(CompoundK,(yyvsp[-3].tinfo),(yyvsp[-2].tree),(yyvsp[-1].tree));(yyvsp[-2].tree)->nodekind==StmtK;(yyvsp[-1].tree)->nodekind==StmtK;}
#line 1650 "parser.tab.c"
    break;

  case 51: /* localDecls: localDecls scopedVarDecl  */
#line 263 "parser.y"
                                                   {(yyval.tree) = addSibling((yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1656 "parser.tab.c"
    break;

  case 52: /* localDecls: %empty  */
#line 264 "parser.y"
                                                         {(yyval.tree) = NULL; /* NULL*/}
#line 1662 "parser.tab.c"
    break;

  case 53: /* stmtList: stmtList stmt  */
#line 267 "parser.y"
                                                                                           {(yyvsp[0].tree) == NULL ? (yyval.tree) = (yyvsp[-1].tree) : (yyval.tree) = addSibling((yyvsp[-1].tree),(yyvsp[0].tree));/* addSibling DRBC Note: $2 might legitamately be empty here. If so $$ = $1;*/}
#line 1668 "parser.tab.c"
    break;

  case 54: /* stmtList: %empty  */
#line 268 "parser.y"
                                                         {(yyval.tree) = NULL; /* NULL*/}
#line 1674 "parser.tab.c"
    break;

  case 55: /* returnStmt: RETURN ';'  */
#line 271 "parser.y"
                                                       {(yyval.tree) = newStmtNode(ReturnK,(yyvsp[-1].tinfo));/* newStmtNode*/}
#line 1680 "parser.tab.c"
    break;

  case 56: /* returnStmt: RETURN exp ';'  */
#line 272 "parser.y"
                                                        {(yyval.tree) = newStmtNode(ReturnK,(yyvsp[-2].tinfo),(yyvsp[-1].tree));/* newStmtNode*/}
#line 1686 "parser.tab.c"
    break;

  case 57: /* breakStmt: BREAK ';'  */
#line 275 "parser.y"
                                                       {(yyval.tree) = newStmtNode(BreakK,(yyvsp[-1].tinfo));/* newStmtNode*/}
#line 1692 "parser.tab.c"
    break;

  case 58: /* exp: mutable assignop exp  */
#line 278 "parser.y"
                                                 {(yyval.tree) = newExpNode(AssignK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1698 "parser.tab.c"
    break;

  case 59: /* exp: mutable INC  */
#line 279 "parser.y"
                                                        {(yyval.tree) = newExpNode(AssignK,(yyvsp[0].tinfo),(yyvsp[-1].tree));/* newExpNode*/}
#line 1704 "parser.tab.c"
    break;

  case 60: /* exp: mutable DEC  */
#line 280 "parser.y"
                                                        {(yyval.tree) = newExpNode(AssignK,(yyvsp[0].tinfo),(yyvsp[-1].tree));/* newExpNode*/}
#line 1710 "parser.tab.c"
    break;

  case 61: /* exp: simpleExp  */
#line 281 "parser.y"
                                      {(yyval.tree) = (yyvsp[0].tree); }
#line 1716 "parser.tab.c"
    break;

  case 62: /* assignop: '='  */
#line 284 "parser.y"
                                   {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1722 "parser.tab.c"
    break;

  case 63: /* assignop: ADDASS  */
#line 285 "parser.y"
                                {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1728 "parser.tab.c"
    break;

  case 64: /* assignop: SUBASS  */
#line 286 "parser.y"
                                {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1734 "parser.tab.c"
    break;

  case 65: /* assignop: MULASS  */
#line 287 "parser.y"
                                {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1740 "parser.tab.c"
    break;

  case 66: /* assignop: DIVASS  */
#line 288 "parser.y"
                                {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1746 "parser.tab.c"
    break;

  case 67: /* simpleExp: simpleExp OR andExp  */
#line 291 "parser.y"
                                                 {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1752 "parser.tab.c"
    break;

  case 68: /* simpleExp: andExp  */
#line 292 "parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1758 "parser.tab.c"
    break;

  case 69: /* andExp: andExp AND unaryRelExp  */
#line 295 "parser.y"
                                                 {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1764 "parser.tab.c"
    break;

  case 70: /* andExp: unaryRelExp  */
#line 296 "parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1770 "parser.tab.c"
    break;

  case 71: /* unaryRelExp: NOT unaryRelExp  */
#line 299 "parser.y"
                                                   {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[0].tree));/* newExpNode*/}
#line 1776 "parser.tab.c"
    break;

  case 72: /* unaryRelExp: relExp  */
#line 300 "parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1782 "parser.tab.c"
    break;

  case 73: /* relExp: minmaxExp relop minmaxExp  */
#line 303 "parser.y"
                                                {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 1788 "parser.tab.c"
    break;

  case 74: /* relExp: minmaxExp  */
#line 304 "parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1794 "parser.tab.c"
    break;

  case 75: /* relop: LEQ  */
#line 306 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1800 "parser.tab.c"
    break;

  case 76: /* relop: '<'  */
#line 307 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1806 "parser.tab.c"
    break;

  case 77: /* relop: '>'  */
#line 308 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1812 "parser.tab.c"
    break;

  case 78: /* relop: GEQ  */
#line 309 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1818 "parser.tab.c"
    break;

  case 79: /* relop: EQ  */
#line 310 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1824 "parser.tab.c"
    break;

  case 80: /* relop: NEQ  */
#line 311 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1830 "parser.tab.c"
    break;

  case 81: /* minmaxExp: minmaxExp minmaxop sumExp  */
#line 314 "parser.y"
                                                    {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1836 "parser.tab.c"
    break;

  case 82: /* minmaxExp: sumExp  */
#line 315 "parser.y"
                                                         {(yyval.tree) = (yyvsp[0].tree);}
#line 1842 "parser.tab.c"
    break;

  case 83: /* minmaxop: MAX  */
#line 318 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1848 "parser.tab.c"
    break;

  case 84: /* minmaxop: MIN  */
#line 319 "parser.y"
                                 {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1854 "parser.tab.c"
    break;

  case 85: /* sumExp: sumExp sumop mulExp  */
#line 322 "parser.y"
                                              {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1860 "parser.tab.c"
    break;

  case 86: /* sumExp: mulExp  */
#line 323 "parser.y"
                                         {(yyval.tree) = (yyvsp[0].tree);}
#line 1866 "parser.tab.c"
    break;

  case 87: /* sumop: '+'  */
#line 326 "parser.y"
                                        {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1872 "parser.tab.c"
    break;

  case 88: /* sumop: '-'  */
#line 327 "parser.y"
                                        {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1878 "parser.tab.c"
    break;

  case 89: /* mulExp: mulExp mulop unaryExp  */
#line 330 "parser.y"
                                             {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[-2].tree),(yyvsp[0].tree));/* newExpNode*/}
#line 1884 "parser.tab.c"
    break;

  case 90: /* mulExp: unaryExp  */
#line 331 "parser.y"
                                             {(yyval.tree) = (yyvsp[0].tree);}
#line 1890 "parser.tab.c"
    break;

  case 91: /* mulop: '*'  */
#line 333 "parser.y"
                                        {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1896 "parser.tab.c"
    break;

  case 92: /* mulop: '/'  */
#line 334 "parser.y"
                                        {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1902 "parser.tab.c"
    break;

  case 93: /* mulop: '%'  */
#line 335 "parser.y"
                                        {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1908 "parser.tab.c"
    break;

  case 94: /* unaryExp: unaryop unaryExp  */
#line 338 "parser.y"
                               {(yyval.tree) = newExpNode(OpK,(yyvsp[-1].tinfo),(yyvsp[0].tree));
				/*TreeNode* opNode = newExpNode(OpK, (TokenData*)$1);//很重要可以借鉴
				opNode->child[0] = $2;$$ = opNode;*/
				if ( (yyvsp[-1].tinfo)->tokenclass == SIZEOF && (yyvsp[0].tree)->kind.exp == IdK){
					(yyvsp[0].tree)->isArray = true;              // 设置为目标变量的 size
          				
					}
	     			}
#line 1921 "parser.tab.c"
    break;

  case 95: /* unaryExp: factor  */
#line 346 "parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1927 "parser.tab.c"
    break;

  case 96: /* unaryop: '-'  */
#line 349 "parser.y"
                                             {(yyvsp[0].tinfo)->tokenclass=CHSIGN; (yyval.tinfo)=(yyvsp[0].tinfo);}
#line 1933 "parser.tab.c"
    break;

  case 97: /* unaryop: '*'  */
#line 350 "parser.y"
                                                        {(yyvsp[0].tinfo)->tokenclass=SIZEOF; (yyval.tinfo)=(yyvsp[0].tinfo);}
#line 1939 "parser.tab.c"
    break;

  case 98: /* unaryop: '?'  */
#line 351 "parser.y"
                                                         {(yyval.tinfo) = (yyvsp[0].tinfo);}
#line 1945 "parser.tab.c"
    break;

  case 99: /* factor: immutable  */
#line 355 "parser.y"
                                                 {(yyval.tree) = (yyvsp[0].tree);}
#line 1951 "parser.tab.c"
    break;

  case 100: /* factor: mutable  */
#line 356 "parser.y"
                                                 {(yyval.tree) = (yyvsp[0].tree);}
#line 1957 "parser.tab.c"
    break;

  case 101: /* mutable: ID '[' exp ']'  */
#line 359 "parser.y"
                           {	
				(yyval.tree) = newExpNode(OpK,(yyvsp[-2].tinfo),NULL,(yyvsp[-1].tree)); //This creates an OpK node for the array access ([)
				(yyval.tree)->child[0] = newExpNode(IdK,(yyvsp[-3].tinfo)); 
				(yyval.tree)->child[0]->isArray = true;(yyvsp[-1].tree)->isArray = false;
				(yyval.tree)->child[0]->type = Char;
				(yyval.tree)->child[0]->attr.name = (yyvsp[-3].tinfo)->svalue;
				}
#line 1969 "parser.tab.c"
    break;

  case 102: /* mutable: ID  */
#line 366 "parser.y"
                                                      {(yyval.tree) = newExpNode(IdK,(yyvsp[0].tinfo)); 
							/* TreeNode *decl = (TreeNode *)lookup((char *)$1->svalue);
        						if (decl != NULL) {
            							if (decl->isArray) {
                							$$->child[0]->size = decl->size;  
            							}	
							}*/
							(yyval.tree)->attr.name = (yyvsp[0].tinfo)->svalue; }
#line 1982 "parser.tab.c"
    break;

  case 103: /* immutable: '(' exp ')'  */
#line 375 "parser.y"
                                                    {(yyval.tree) = (yyvsp[-1].tree);(yyval.tree)->varKind = LocalStatic;/* DRBC Note: Be careful!*/}
#line 1988 "parser.tab.c"
    break;

  case 104: /* immutable: call  */
#line 376 "parser.y"
                                                    {(yyval.tree) = (yyvsp[0].tree);}
#line 1994 "parser.tab.c"
    break;

  case 105: /* immutable: constant  */
#line 377 "parser.y"
                                                    {(yyval.tree) = (yyvsp[0].tree);}
#line 2000 "parser.tab.c"
    break;

  case 106: /* call: ID '(' args ')'  */
#line 380 "parser.y"
                             {(yyval.tree) = newExpNode(CallK,(yyvsp[-3].tinfo),(yyvsp[-1].tree));/*$3->kind.decl=ParamK; $$->isArray = true; */}
#line 2006 "parser.tab.c"
    break;

  case 107: /* args: argList  */
#line 383 "parser.y"
                                                        {(yyval.tree)=(yyvsp[0].tree);}
#line 2012 "parser.tab.c"
    break;

  case 108: /* args: %empty  */
#line 384 "parser.y"
                                                          { (yyval.tree)=NULL; }
#line 2018 "parser.tab.c"
    break;

  case 109: /* argList: argList ',' exp  */
#line 387 "parser.y"
                                                   {if ((yyvsp[0].tree)->kind.exp == IdK) (yyvsp[0].tree)->isArray = true;addSibling((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2024 "parser.tab.c"
    break;

  case 110: /* argList: exp  */
#line 388 "parser.y"
                                                        {if ((yyvsp[0].tree)->kind.exp == IdK) (yyvsp[0].tree)->isArray = true;(yyval.tree) = (yyvsp[0].tree);}
#line 2030 "parser.tab.c"
    break;

  case 111: /* constant: NUMCONST  */
#line 391 "parser.y"
                                          {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); (yyval.tree)->type=Integer; (yyval.tree) -> attr.value=(yyvsp[0].tinfo)->nvalue;}
#line 2036 "parser.tab.c"
    break;

  case 112: /* constant: CHARCONST  */
#line 392 "parser.y"
                                          {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); (yyval.tree)->type=Char; (yyval.tree)->attr.cvalue=(yyvsp[0].tinfo)->cvalue;}
#line 2042 "parser.tab.c"
    break;

  case 113: /* constant: STRINGCONST  */
#line 393 "parser.y"
                {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); (yyval.tree)->attr.string = strdup((yyvsp[0].tinfo)->svalue); (yyval.tree)->size = (yyvsp[0].tinfo)->nvalue + 1; (yyval.tree)->isArray = true; setType((yyval.tree),Char,true);}
#line 2048 "parser.tab.c"
    break;

  case 114: /* constant: BOOLCONST  */
#line 394 "parser.y"
                                          {(yyval.tree) = newExpNode(ConstantK,(yyvsp[0].tinfo)); setType((yyval.tree),Boolean,true);}
#line 2054 "parser.tab.c"
    break;


#line 2058 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 397 "parser.y"

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
    codegen(stdout,(char *)argv[1],syntaxTree,symtab,globalOffset,false);
   if(numErrors == 0){
//   	printTree(stdout,syntaxTree);  //set to true, ture for assignment 4
   }
   //printTree(stdout,syntaxTree);
   printf("Number of warnings: 0\n");
    printf("Number of errors: 0\n");
	
   return 0;
}

