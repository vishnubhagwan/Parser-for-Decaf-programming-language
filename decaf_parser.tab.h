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

#ifndef YY_YY_DECAF_PARSER_TAB_H_INCLUDED
# define YY_YY_DECAF_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    CALLOUT = 259,
    CLASS = 260,
    CONTINUE = 261,
    ELSE = 262,
    FALSE = 263,
    FOR = 264,
    IF = 265,
    RETURN = 266,
    TRUE = 267,
    VOID = 268,
    COMMA = 269,
    TYPE_BOOLEAN = 270,
    TYPE_INTEGER = 271,
    O_CUR_BRACE = 272,
    C_CUR_BRACE = 273,
    O_PAREN = 274,
    C_PAREN = 275,
    SEMICOLON = 276,
    O_BRACE = 277,
    C_BRACE = 278,
    OP_LOGICAL_OR = 279,
    OP_LOGICAL_AND = 280,
    EQUAL = 281,
    PLUS_EQUAL = 282,
    MINUS_EQUAL = 283,
    OP_NOT_EQUAL = 284,
    OP_EQUAL_EQUAL = 285,
    OP_LESS_THAN = 286,
    OP_GREATER_THAN = 287,
    OP_LESS_EQUAL = 288,
    OP_GREATER_EQUAL = 289,
    OP_PLUS = 290,
    OP_MINUS = 291,
    OP_MULTIPLY = 292,
    OP_DIVIDE = 293,
    OP_MODULO = 294,
    OP_NOT = 295,
    OP_UMINUS = 296,
    IDENTIFIER = 297,
    INT_LITERAL = 298,
    STRING_LITERAL = 299,
    CHAR_LITERAL = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "decaf_parser.y" /* yacc.c:1909  */

	char* sval;

#line 104 "decaf_parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_DECAF_PARSER_TAB_H_INCLUDED  */
