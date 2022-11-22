/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_HOME_AZNAUR_GIT_LLVM_COURSE_GLANG_SRC_PARSER_H_INCLUDED
# define YY_YY_HOME_AZNAUR_GIT_LLVM_COURSE_GLANG_SRC_PARSER_H_INCLUDED
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
    TOK_IDENTIFIER = 258,
    TOK_INTEGER = 259,
    TOK_DOUBLE = 260,
    TOK_ASSIGN = 261,
    TOK_EQUAL = 262,
    TOK_NEQUAL = 263,
    TOK_LPAREN = 264,
    TOK_RPAREN = 265,
    TOK_LBRACE = 266,
    TOK_RBRACE = 267,
    TOK_COMMA = 268,
    TOK_PLUS = 269,
    TOK_MINUS = 270,
    TOK_MUL = 271,
    TOK_DIV = 272
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "/home/aznaur/git/llvm_course/glang/src/parser.y"

  glang::Node *node;
  glang::Block *block;
  glang::Expression *expr;
  glang::Statement *stmt;
  glang::Identifier *ident;
  glang::VariableDeclaration *var_decl;
  std::vector<glang::VariableDeclaration*> *var_vec;
  std::vector<glang::Expression*> *expr_vec;
  std::string *string;
  int token;

#line 88 "/home/aznaur/git/llvm_course/glang/src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_AZNAUR_GIT_LLVM_COURSE_GLANG_SRC_PARSER_H_INCLUDED  */