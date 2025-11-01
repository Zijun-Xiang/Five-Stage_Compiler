/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 40 "parser.y" /* yacc.c:1909  */

   TokenData *tinfo ;
   TreeNode *tnode ;
   ExpType etype;

#line 104 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
