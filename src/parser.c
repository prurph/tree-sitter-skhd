#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOTblacklist_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_DOTload = 3,
  sym_comment = 4,
  sym_string = 5,
  sym_source_file = 6,
  sym_expression = 7,
  sym_statement = 8,
  sym_configuration_statement = 9,
  sym_blacklist_statement = 10,
  sym_load_statement = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_blacklist_statement_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTblacklist_LBRACK] = ".blacklist [",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOTload] = ".load",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_statement] = "statement",
  [sym_configuration_statement] = "configuration_statement",
  [sym_blacklist_statement] = "blacklist_statement",
  [sym_load_statement] = "load_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_blacklist_statement_repeat1] = "blacklist_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTblacklist_LBRACK] = anon_sym_DOTblacklist_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOTload] = anon_sym_DOTload,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_statement] = sym_statement,
  [sym_configuration_statement] = sym_configuration_statement,
  [sym_blacklist_statement] = sym_blacklist_statement,
  [sym_load_statement] = sym_load_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_blacklist_statement_repeat1] = aux_sym_blacklist_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTblacklist_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTload] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_blacklist_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_load_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blacklist_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '[') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOTblacklist_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOTload);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOTload] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_expression] = STATE(5),
    [sym_statement] = STATE(2),
    [sym_configuration_statement] = STATE(5),
    [sym_blacklist_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(7),
    [anon_sym_DOTload] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(11),
  },
  [2] = {
    [sym_expression] = STATE(5),
    [sym_statement] = STATE(3),
    [sym_configuration_statement] = STATE(5),
    [sym_blacklist_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(7),
    [anon_sym_DOTload] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(11),
  },
  [3] = {
    [sym_expression] = STATE(5),
    [sym_statement] = STATE(3),
    [sym_configuration_statement] = STATE(5),
    [sym_blacklist_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(17),
    [anon_sym_DOTload] = ACTIONS(20),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_DOTblacklist_LBRACK,
      anon_sym_DOTload,
      sym_string,
  [10] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_DOTblacklist_LBRACK,
      anon_sym_DOTload,
      sym_string,
  [20] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_DOTblacklist_LBRACK,
      anon_sym_DOTload,
      sym_string,
  [30] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_DOTblacklist_LBRACK,
      anon_sym_DOTload,
      sym_string,
  [40] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_DOTblacklist_LBRACK,
      anon_sym_DOTload,
      sym_string,
  [50] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_DOTblacklist_LBRACK,
      anon_sym_DOTload,
      sym_string,
  [60] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
    ACTIONS(40), 1,
      sym_string,
    STATE(11), 1,
      aux_sym_blacklist_statement_repeat1,
  [73] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(44), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_blacklist_statement_repeat1,
  [86] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    ACTIONS(48), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_blacklist_statement_repeat1,
  [99] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_string,
  [106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 86,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 106,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_statement, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist_statement, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist_statement, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blacklist_statement_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blacklist_statement_repeat1, 2), SHIFT_REPEAT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_skhd(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
