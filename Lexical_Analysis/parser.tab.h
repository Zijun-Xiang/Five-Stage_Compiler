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
    OP = 258,
    WHILE = 259,
    MIN = 260,
    MAX = 261,
    FALSE = 262,
    FOR = 263,
    INT = 264,
    STRINGCONST = 265,
    NOT = 266,
    STATIC = 267,
    TO = 268,
    LEQ = 269,
    TRUE = 270,
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
    THEN = 294,
    CHAR = 295,
    ID = 296,
    CHARCONST = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "parser.y" /* yacc.c:1909  */

   struct   TokenData tinfo ;

#line 101 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
