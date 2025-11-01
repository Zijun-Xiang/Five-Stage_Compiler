/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    WHILE = 258,                   /* WHILE  */
    MIN = 259,                     /* MIN  */
    MAX = 260,                     /* MAX  */
    FALSE = 261,                   /* FALSE  */
    FOR = 262,                     /* FOR  */
    INT = 263,                     /* INT  */
    STRINGCONST = 264,             /* STRINGCONST  */
    NOT = 265,                     /* NOT  */
    STATIC = 266,                  /* STATIC  */
    TO = 267,                      /* TO  */
    LEQ = 268,                     /* LEQ  */
    TRUE = 269,                    /* TRUE  */
    BOOLCONST = 270,               /* BOOLCONST  */
    OR = 271,                      /* OR  */
    RETURN = 272,                  /* RETURN  */
    NEQ = 273,                     /* NEQ  */
    DO = 274,                      /* DO  */
    AND = 275,                     /* AND  */
    PRECOMPILER = 276,             /* PRECOMPILER  */
    NUMCONST = 277,                /* NUMCONST  */
    IF = 278,                      /* IF  */
    BOOL = 279,                    /* BOOL  */
    BY = 280,                      /* BY  */
    BREAK = 281,                   /* BREAK  */
    REPEAT = 282,                  /* REPEAT  */
    UNTIL = 283,                   /* UNTIL  */
    ASSIGN = 284,                  /* ASSIGN  */
    MULASS = 285,                  /* MULASS  */
    INC = 286,                     /* INC  */
    ADDASS = 287,                  /* ADDASS  */
    EQ = 288,                      /* EQ  */
    GEQ = 289,                     /* GEQ  */
    SUBASS = 290,                  /* SUBASS  */
    DIVASS = 291,                  /* DIVASS  */
    ELSE = 292,                    /* ELSE  */
    DEC = 293,                     /* DEC  */
    CHSIGN = 294,                  /* CHSIGN  */
    THEN = 295,                    /* THEN  */
    CHAR = 296,                    /* CHAR  */
    SIZEOF = 297,                  /* SIZEOF  */
    ID = 298,                      /* ID  */
    LASTTERM = 299,                /* LASTTERM  */
    CHARCONST = 300                /* CHARCONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "parser.y"

   struct TokenData *tinfo ;     //for C language, you need to add struct befors the TokenData struct class
  	TreeNode *tree;
  	ExpType type;

#line 115 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
