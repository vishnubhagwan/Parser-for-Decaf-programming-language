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
#line 1 "decaf_parser.y" /* yacc.c:339  */

#include <iostream>
#include <fstream>
#include <string.h>

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern int yylineno;
extern std::fstream flex_outfile;
extern std::fstream bison_outfile;

void yyerror(const char *s);

#line 81 "decaf_parser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "decaf_parser.tab.h".  */
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
    EQUAL = 279,
    PLUS_EQUAL = 280,
    MINUS_EQUAL = 281,
    IDENTIFIER = 282,
    INT_LITERAL = 283,
    STRING_LITERAL = 284,
    CHAR_LITERAL = 285,
    OP_LOGICAL_OR = 286,
    OP_LOGICAL_AND = 287,
    OP_NOT_EQUAL = 288,
    OP_EQUAL_EQUAL = 289,
    OP_PLUS = 290,
    OP_MINUS = 291,
    OP_MULTIPLY = 292,
    OP_DIVIDE = 293,
    OP_MODULO = 294,
    OP_LESS_THAN = 295,
    OP_GREATER_THAN = 296,
    OP_LESS_EQUAL = 297,
    OP_GREATER_EQUAL = 298,
    OP_NOT = 299,
    OP_UMINUS = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "decaf_parser.y" /* yacc.c:355  */

	char* sval;

#line 171 "decaf_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_DECAF_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "decaf_parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    32,    34,    36,    40,    42,    46,    48,
      52,    56,    58,    60,    62,    66,    70,    72,    76,    78,
      82,    84,    86,    88,    92,    94,    98,   102,   104,   108,
     110,   114,   116,   118,   120,   122,   124,   126,   128,   130,
     132,   136,   138,   140,   144,   146,   150,   152,   154,   156,
     159,   161,   164,   166,   169,   171,   175,   177,   179,   181,
     183,   185,   187,   189,   191,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   215,   217,   219,   221,   225,
     227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CALLOUT", "CLASS", "CONTINUE",
  "ELSE", "FALSE", "FOR", "IF", "RETURN", "TRUE", "VOID", "COMMA",
  "TYPE_BOOLEAN", "TYPE_INTEGER", "O_CUR_BRACE", "C_CUR_BRACE", "O_PAREN",
  "C_PAREN", "SEMICOLON", "O_BRACE", "C_BRACE", "EQUAL", "PLUS_EQUAL",
  "MINUS_EQUAL", "IDENTIFIER", "INT_LITERAL", "STRING_LITERAL",
  "CHAR_LITERAL", "OP_LOGICAL_OR", "OP_LOGICAL_AND", "OP_NOT_EQUAL",
  "OP_EQUAL_EQUAL", "OP_PLUS", "OP_MINUS", "OP_MULTIPLY", "OP_DIVIDE",
  "OP_MODULO", "OP_LESS_THAN", "OP_GREATER_THAN", "OP_LESS_EQUAL",
  "OP_GREATER_EQUAL", "OP_NOT", "OP_UMINUS", "$accept", "program",
  "field_decls", "method_decls", "field_decl", "id_all_list", "id_array",
  "method_decl", "method_id_list", "block", "var_decls", "var_decl", "ids",
  "statements", "statement", "assign_op", "location", "method_call",
  "callout_args", "callout_arg", "exprs", "expr", "literal", "type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,    20,    67,    57,   -55,    66,    46,   -55,   -55,   -55,
      89,   137,   -55,   -55,    59,    69,   -55,   152,   -55,   -55,
     -55,    70,    27,    -6,   -55,    18,   -55,    74,    18,    73,
      79,   -55,    12,    93,    21,   100,   102,   -55,    18,   108,
     -55,   108,   -55,   101,   199,   -55,   -55,   -55,   110,   113,
     112,   109,   120,    64,   -55,    56,   -55,   218,   -55,     0,
     -55,   -12,   119,   114,   -55,   115,   -55,   105,   130,   -55,
     -55,   130,   -55,   -55,   -55,   130,   130,   -55,   -55,   283,
     -55,    91,   130,   -55,   -55,   237,   -55,   -55,   -55,   -55,
     -55,   130,   -55,   -55,     7,    22,   130,   236,   260,   -55,
     -55,   -55,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   -55,    23,   340,   327,   -55,
     306,   116,   -55,   118,   -55,   145,   108,   -55,    72,    72,
      72,    72,    72,    72,    72,    72,    72,   209,   209,   209,
     209,   130,   -55,   -55,   -55,   -55,   -55,    50,   -55,   340,
     130,   144,   340,   118,   -55,   158,   108,   -55,   -55,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,    80,    79,     5,
       0,     0,     7,     9,     0,     0,     3,     0,     6,     4,
       8,     0,    13,     0,    14,     0,     2,     0,     0,     0,
       0,    10,     0,     0,     0,     0,    11,    12,     0,     0,
      19,     0,    15,     0,     0,    17,    16,    18,     0,     0,
       0,     0,     0,     0,    23,    44,    31,     0,    25,     0,
      30,     0,     0,     0,    39,     0,    40,     0,     0,    78,
      77,     0,    38,    75,    76,     0,     0,    56,    57,     0,
      58,     0,     0,    22,    24,     0,    21,    29,    41,    42,
      43,     0,    33,    28,     0,     0,     0,     0,     0,    74,
      73,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    55,     0,    20,
       0,     0,    26,     0,    48,     0,     0,    59,    71,    72,
      70,    69,    60,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    46,    45,    32,    27,    53,     0,    51,    52,
       0,    35,    54,     0,    49,     0,     0,    50,    36,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   -55,   146,   151,   -55,   133,    54,   136,   -39,
     -55,   147,   -55,   149,   -54,   -55,   -37,   -19,   -55,    16,
     -55,   -52,   -55,    52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    11,    12,    23,    24,    13,    32,    56,
      57,    58,    94,    59,    60,    91,    77,    78,   147,   148,
     116,   149,    80,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    79,    46,    48,    49,    87,    50,    61,    30,    51,
      52,    53,    88,    89,    90,    31,    97,    44,    86,    98,
      61,   121,    61,    99,   100,    62,    38,    55,   122,   117,
     118,    87,    39,     7,     8,    38,   123,   141,    62,   120,
      62,    41,   124,   142,   125,     1,    28,     3,    61,    29,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,    21,   153,    20,    62,     4,    49,    21,
     154,    20,    69,    15,     5,    81,    70,    33,    82,     6,
      33,     7,     8,    71,     9,    72,    22,   151,    25,   152,
      43,    55,    73,    28,    74,    49,    63,    27,   155,    69,
      75,    35,     6,    70,     7,     8,    36,    16,    76,    63,
      71,   115,   111,   112,   113,   114,   158,   159,    55,    73,
      40,    74,    49,    42,    29,    44,    69,    75,    47,    96,
      70,    64,    65,    66,    49,    76,    67,    71,    69,    68,
      92,    93,    70,   145,    95,    55,    73,   146,    74,    71,
       6,   156,     7,     8,    75,    19,    17,    55,    73,   150,
      74,    18,    76,    37,    34,     6,    75,     7,     8,   157,
      26,     0,     0,     0,    76,    44,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    48,    49,    84,    50,    85,     0,    51,    52,
      53,     0,     0,     0,     7,     8,    44,    54,     0,     0,
       0,    48,    49,     0,    50,     0,    55,    51,    52,    53,
       0,     0,     0,     7,     8,    44,    83,     0,     0,     0,
      48,    49,     0,    50,     0,    55,    51,    52,    53,    -1,
      -1,    -1,    -1,     0,    44,   119,   126,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     143,     0,     0,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114
};

static const yytype_int16 yycheck[] =
{
      39,    53,    41,     3,     4,    59,     6,    44,    14,     9,
      10,    11,    24,    25,    26,    21,    68,    17,    18,    71,
      57,    14,    59,    75,    76,    44,    14,    27,    21,    81,
      82,    85,    20,    15,    16,    14,    14,    14,    57,    91,
      59,    20,    20,    20,    96,     5,    19,    27,    85,    22,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    11,    14,    11,    85,     0,     4,    17,
      20,    17,     8,    27,    17,    19,    12,    25,    22,    13,
      28,    15,    16,    19,    18,    21,    27,   126,    19,   141,
      38,    27,    28,    19,    30,     4,    44,    27,   150,     8,
      36,    28,    13,    12,    15,    16,    27,    18,    44,    57,
      19,    20,    40,    41,    42,    43,   155,   156,    27,    28,
      27,    30,     4,    23,    22,    17,     8,    36,    27,    24,
      12,    21,    19,    21,     4,    44,    27,    19,     8,    19,
      21,    27,    12,    27,    29,    27,    28,    29,    30,    19,
      13,     7,    15,    16,    36,    18,    10,    27,    28,    14,
      30,    10,    44,    30,    28,    13,    36,    15,    16,   153,
      18,    -1,    -1,    -1,    44,    17,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     3,     4,    57,     6,    57,    -1,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      -1,     3,     4,    -1,     6,    -1,    27,     9,    10,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,
       3,     4,    -1,     6,    -1,    27,     9,    10,    11,    40,
      41,    42,    43,    -1,    17,    18,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    47,    27,     0,    17,    13,    15,    16,    18,
      48,    49,    50,    53,    69,    27,    18,    49,    50,    18,
      53,    69,    27,    51,    52,    19,    18,    27,    19,    22,
      14,    21,    54,    69,    54,    28,    27,    52,    14,    20,
      27,    20,    23,    69,    17,    55,    55,    27,     3,     4,
       6,     9,    10,    11,    18,    27,    55,    56,    57,    59,
      60,    62,    63,    69,    21,    19,    21,    27,    19,     8,
      12,    19,    21,    28,    30,    36,    44,    62,    63,    67,
      68,    19,    22,    18,    57,    59,    18,    60,    24,    25,
      26,    61,    21,    27,    58,    29,    24,    67,    67,    67,
      67,    21,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    66,    67,    67,    18,
      67,    14,    21,    14,    20,    67,    20,    20,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    14,    20,    23,    21,    27,    29,    64,    65,    67,
      14,    55,    67,    14,    20,    67,     7,    65,    55,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    47,    47,    48,    48,    49,    49,
      50,    51,    51,    51,    51,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    56,    56,    57,    58,    58,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    69,
      69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     5,     5,     4,     2,     1,     2,     1,
       3,     3,     3,     1,     1,     4,     6,     6,     4,     2,
       4,     3,     3,     2,     2,     1,     3,     3,     1,     2,
       1,     1,     4,     2,     7,     5,     7,     3,     2,     2,
       2,     1,     1,     1,     1,     4,     4,     3,     4,     6,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1
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
#line 30 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "PROGRAM ENCOUNTERED" << std::endl; }
#line 1422 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "PROGRAM ENCOUNTERED" << std::endl; }
#line 1428 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "PROGRAM ENCOUNTERED" << std::endl; }
#line 1434 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "PROGRAM ENCOUNTERED" << std::endl; }
#line 1440 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "DECLARATION ENCOUNTERED" << std::endl; }
#line 1446 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "ID=" << (yyvsp[0].sval) << std::endl; }
#line 1452 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "ID=" << (yyvsp[0].sval) << std::endl; }
#line 1458 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "ID=" << (yyvsp[-3].sval) << std::endl << "SIZE=" << (yyvsp[-1].sval) << std::endl; }
#line 1464 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "ASSIGNMENT OPERATION ENCOUNTERED" << std::endl; }
#line 1470 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 144 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "LOCATION ENCOUNTERED=" << (yyvsp[0].sval) << std::endl; }
#line 1476 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 146 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "LOCATION ENCOUNTERED=" << (yyvsp[-3].sval) << std::endl; }
#line 1482 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 154 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "CALLOUT TO " << (yyvsp[-1].sval) << " ENCOUNTERED" << std::endl; }
#line 1488 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 156 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "CALLOUT TO " << (yyvsp[-3].sval) << " ENCOUNTERED" << std::endl; }
#line 1494 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 183 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "ADDITION ENCOUNTERED" << std::endl; }
#line 1500 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 185 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "SUBTRACTION ENCOUNTERED" << std::endl; }
#line 1506 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "MULTIPLICATION ENCOUNTERED" << std::endl; }
#line 1512 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 189 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "DIVISION ENCOUNTERED" << std::endl; }
#line 1518 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 191 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "MOD ENCOUNTERED" << std::endl; }
#line 1524 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 193 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "LESS THAN ENCOUNTERED" << std::endl; }
#line 1530 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 195 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "GREATER THAN ENCOUNTERED" << std::endl; }
#line 1536 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 215 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "INT ENCOUNTERED=" << (yyvsp[0].sval) << std::endl; }
#line 1542 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 217 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "CHAR ENCOUNTERED=" << (yyvsp[0].sval) << std::endl; }
#line 1548 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 219 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "BOOLEAN ENCOUNTERED=true" << std::endl; }
#line 1554 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 221 "decaf_parser.y" /* yacc.c:1646  */
    { bison_outfile << "BOOLEAN ENCOUNTERED=false" << std::endl; }
#line 1560 "decaf_parser.tab.c" /* yacc.c:1646  */
    break;


#line 1564 "decaf_parser.tab.c" /* yacc.c:1646  */
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
#line 230 "decaf_parser.y" /* yacc.c:1906  */


void yyerror(const char *s){
	std::cerr << s << std::endl;
	std::cerr << "Syntax error at " << yylineno << std::endl;
	exit(-1);
}
