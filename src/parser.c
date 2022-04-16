#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 102
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOTblacklist_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_DOTload = 3,
  sym_comment = 4,
  aux_sym__key_literal_token1 = 5,
  anon_sym_return = 6,
  anon_sym_tab = 7,
  anon_sym_space = 8,
  anon_sym_backspace = 9,
  anon_sym_escape = 10,
  anon_sym_delete = 11,
  anon_sym_home = 12,
  anon_sym_end = 13,
  anon_sym_pageup = 14,
  anon_sym_pagedown = 15,
  anon_sym_insert = 16,
  anon_sym_left = 17,
  anon_sym_right = 18,
  anon_sym_up = 19,
  anon_sym_down = 20,
  anon_sym_f1 = 21,
  anon_sym_f2 = 22,
  anon_sym_f3 = 23,
  anon_sym_f4 = 24,
  anon_sym_f5 = 25,
  anon_sym_f6 = 26,
  anon_sym_f7 = 27,
  anon_sym_f8 = 28,
  anon_sym_f9 = 29,
  anon_sym_f10 = 30,
  anon_sym_f11 = 31,
  anon_sym_f12 = 32,
  anon_sym_f13 = 33,
  anon_sym_f14 = 34,
  anon_sym_f15 = 35,
  anon_sym_f16 = 36,
  anon_sym_f17 = 37,
  anon_sym_f18 = 38,
  anon_sym_f19 = 39,
  anon_sym_f20 = 40,
  anon_sym_sound_up = 41,
  anon_sym_sound_down = 42,
  anon_sym_mute = 43,
  anon_sym_play = 44,
  anon_sym_previous = 45,
  anon_sym_next = 46,
  anon_sym_rewind = 47,
  anon_sym_fast = 48,
  anon_sym_brightness_up = 49,
  anon_sym_brightness_down = 50,
  anon_sym_illumination_up = 51,
  anon_sym_illumination_down = 52,
  aux_sym__key_literal_token2 = 53,
  anon_sym_kVK_Return = 54,
  anon_sym_kVK_Tab = 55,
  anon_sym_kVK_Space = 56,
  anon_sym_kVK_Delete = 57,
  anon_sym_kVK_Escape = 58,
  anon_sym_kVK_ForwardDelete = 59,
  anon_sym_kVK_Home = 60,
  anon_sym_kVK_End = 61,
  anon_sym_kVK_PageUp = 62,
  anon_sym_kVK_PageDown = 63,
  anon_sym_kVK_Help = 64,
  anon_sym_kVK_LeftArrow = 65,
  anon_sym_kVK_RightArrow = 66,
  anon_sym_kVK_UpArrow = 67,
  anon_sym_kVK_DownArrow = 68,
  anon_sym_kVK_F1 = 69,
  anon_sym_kVK_F2 = 70,
  anon_sym_kVK_F3 = 71,
  anon_sym_kVK_F4 = 72,
  anon_sym_kVK_F5 = 73,
  anon_sym_kVK_F6 = 74,
  anon_sym_kVK_F7 = 75,
  anon_sym_kVK_F8 = 76,
  anon_sym_kVK_F9 = 77,
  anon_sym_kVK_F10 = 78,
  anon_sym_kVK_F11 = 79,
  anon_sym_kVK_F12 = 80,
  anon_sym_kVK_F13 = 81,
  anon_sym_kVK_F14 = 82,
  anon_sym_kVK_F15 = 83,
  anon_sym_kVK_F16 = 84,
  anon_sym_kVK_F17 = 85,
  anon_sym_kVK_F18 = 86,
  anon_sym_kVK_F19 = 87,
  anon_sym_kVK_F20 = 88,
  anon_sym_NX_KEYTYPE_SOUND_UP = 89,
  anon_sym_NX_KEYTYPE_SOUND_DOWN = 90,
  anon_sym_NX_KEYTYPE_MUTE = 91,
  anon_sym_NX_KEYTYPE_PLAY = 92,
  anon_sym_NX_KEYTYPE_PREVIOUS = 93,
  anon_sym_NX_KEYTYPE_NEXT = 94,
  anon_sym_NX_KEYTYPE_REWIND = 95,
  anon_sym_NX_KEYTYPE_FAST = 96,
  anon_sym_NX_KEYTYPE_BRIGHTNESS_UP = 97,
  anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN = 98,
  anon_sym_NX_KEYTYPE_ILLUMINATION_UP = 99,
  anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN = 100,
  sym_string = 101,
  sym_source_file = 102,
  sym_statement = 103,
  sym_configuration_statement = 104,
  sym_blacklist_statement = 105,
  sym_load_statement = 106,
  sym_expression = 107,
  sym_key = 108,
  sym__key_literal = 109,
  sym__keycode = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_blacklist_statement_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTblacklist_LBRACK] = ".blacklist [",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOTload] = ".load",
  [sym_comment] = "comment",
  [aux_sym__key_literal_token1] = "_key_literal_token1",
  [anon_sym_return] = "return",
  [anon_sym_tab] = "tab",
  [anon_sym_space] = "space",
  [anon_sym_backspace] = "backspace",
  [anon_sym_escape] = "escape",
  [anon_sym_delete] = "delete",
  [anon_sym_home] = "home",
  [anon_sym_end] = "end",
  [anon_sym_pageup] = "pageup",
  [anon_sym_pagedown] = "pagedown",
  [anon_sym_insert] = "insert",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_f1] = "f1",
  [anon_sym_f2] = "f2",
  [anon_sym_f3] = "f3",
  [anon_sym_f4] = "f4",
  [anon_sym_f5] = "f5",
  [anon_sym_f6] = "f6",
  [anon_sym_f7] = "f7",
  [anon_sym_f8] = "f8",
  [anon_sym_f9] = "f9",
  [anon_sym_f10] = "f10",
  [anon_sym_f11] = "f11",
  [anon_sym_f12] = "f12",
  [anon_sym_f13] = "f13",
  [anon_sym_f14] = "f14",
  [anon_sym_f15] = "f15",
  [anon_sym_f16] = "f16",
  [anon_sym_f17] = "f17",
  [anon_sym_f18] = "f18",
  [anon_sym_f19] = "f19",
  [anon_sym_f20] = "f20",
  [anon_sym_sound_up] = "sound_up",
  [anon_sym_sound_down] = "sound_down",
  [anon_sym_mute] = "mute",
  [anon_sym_play] = "play",
  [anon_sym_previous] = "previous",
  [anon_sym_next] = "next",
  [anon_sym_rewind] = "rewind",
  [anon_sym_fast] = "fast",
  [anon_sym_brightness_up] = "brightness_up",
  [anon_sym_brightness_down] = "brightness_down",
  [anon_sym_illumination_up] = "illumination_up",
  [anon_sym_illumination_down] = "illumination_down",
  [aux_sym__key_literal_token2] = "_key_literal_token2",
  [anon_sym_kVK_Return] = "kVK_Return",
  [anon_sym_kVK_Tab] = "kVK_Tab",
  [anon_sym_kVK_Space] = "kVK_Space",
  [anon_sym_kVK_Delete] = "kVK_Delete",
  [anon_sym_kVK_Escape] = "kVK_Escape",
  [anon_sym_kVK_ForwardDelete] = "kVK_ForwardDelete",
  [anon_sym_kVK_Home] = "kVK_Home",
  [anon_sym_kVK_End] = "kVK_End",
  [anon_sym_kVK_PageUp] = "kVK_PageUp",
  [anon_sym_kVK_PageDown] = "kVK_PageDown",
  [anon_sym_kVK_Help] = "kVK_Help",
  [anon_sym_kVK_LeftArrow] = "kVK_LeftArrow",
  [anon_sym_kVK_RightArrow] = "kVK_RightArrow",
  [anon_sym_kVK_UpArrow] = "kVK_UpArrow",
  [anon_sym_kVK_DownArrow] = "kVK_DownArrow",
  [anon_sym_kVK_F1] = "kVK_F1",
  [anon_sym_kVK_F2] = "kVK_F2",
  [anon_sym_kVK_F3] = "kVK_F3",
  [anon_sym_kVK_F4] = "kVK_F4",
  [anon_sym_kVK_F5] = "kVK_F5",
  [anon_sym_kVK_F6] = "kVK_F6",
  [anon_sym_kVK_F7] = "kVK_F7",
  [anon_sym_kVK_F8] = "kVK_F8",
  [anon_sym_kVK_F9] = "kVK_F9",
  [anon_sym_kVK_F10] = "kVK_F10",
  [anon_sym_kVK_F11] = "kVK_F11",
  [anon_sym_kVK_F12] = "kVK_F12",
  [anon_sym_kVK_F13] = "kVK_F13",
  [anon_sym_kVK_F14] = "kVK_F14",
  [anon_sym_kVK_F15] = "kVK_F15",
  [anon_sym_kVK_F16] = "kVK_F16",
  [anon_sym_kVK_F17] = "kVK_F17",
  [anon_sym_kVK_F18] = "kVK_F18",
  [anon_sym_kVK_F19] = "kVK_F19",
  [anon_sym_kVK_F20] = "kVK_F20",
  [anon_sym_NX_KEYTYPE_SOUND_UP] = "NX_KEYTYPE_SOUND_UP",
  [anon_sym_NX_KEYTYPE_SOUND_DOWN] = "NX_KEYTYPE_SOUND_DOWN",
  [anon_sym_NX_KEYTYPE_MUTE] = "NX_KEYTYPE_MUTE",
  [anon_sym_NX_KEYTYPE_PLAY] = "NX_KEYTYPE_PLAY",
  [anon_sym_NX_KEYTYPE_PREVIOUS] = "NX_KEYTYPE_PREVIOUS",
  [anon_sym_NX_KEYTYPE_NEXT] = "NX_KEYTYPE_NEXT",
  [anon_sym_NX_KEYTYPE_REWIND] = "NX_KEYTYPE_REWIND",
  [anon_sym_NX_KEYTYPE_FAST] = "NX_KEYTYPE_FAST",
  [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = "NX_KEYTYPE_BRIGHTNESS_UP",
  [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = "NX_KEYTYPE_BRIGHTNESS_DOWN",
  [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = "NX_KEYTYPE_ILLUMINATION_UP",
  [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = "NX_KEYTYPE_ILLUMINATION_DOWN",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_configuration_statement] = "configuration_statement",
  [sym_blacklist_statement] = "blacklist_statement",
  [sym_load_statement] = "load_statement",
  [sym_expression] = "expression",
  [sym_key] = "key",
  [sym__key_literal] = "_key_literal",
  [sym__keycode] = "_keycode",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_blacklist_statement_repeat1] = "blacklist_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTblacklist_LBRACK] = anon_sym_DOTblacklist_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOTload] = anon_sym_DOTload,
  [sym_comment] = sym_comment,
  [aux_sym__key_literal_token1] = aux_sym__key_literal_token1,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_tab] = anon_sym_tab,
  [anon_sym_space] = anon_sym_space,
  [anon_sym_backspace] = anon_sym_backspace,
  [anon_sym_escape] = anon_sym_escape,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_home] = anon_sym_home,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_pageup] = anon_sym_pageup,
  [anon_sym_pagedown] = anon_sym_pagedown,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_f1] = anon_sym_f1,
  [anon_sym_f2] = anon_sym_f2,
  [anon_sym_f3] = anon_sym_f3,
  [anon_sym_f4] = anon_sym_f4,
  [anon_sym_f5] = anon_sym_f5,
  [anon_sym_f6] = anon_sym_f6,
  [anon_sym_f7] = anon_sym_f7,
  [anon_sym_f8] = anon_sym_f8,
  [anon_sym_f9] = anon_sym_f9,
  [anon_sym_f10] = anon_sym_f10,
  [anon_sym_f11] = anon_sym_f11,
  [anon_sym_f12] = anon_sym_f12,
  [anon_sym_f13] = anon_sym_f13,
  [anon_sym_f14] = anon_sym_f14,
  [anon_sym_f15] = anon_sym_f15,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f17] = anon_sym_f17,
  [anon_sym_f18] = anon_sym_f18,
  [anon_sym_f19] = anon_sym_f19,
  [anon_sym_f20] = anon_sym_f20,
  [anon_sym_sound_up] = anon_sym_sound_up,
  [anon_sym_sound_down] = anon_sym_sound_down,
  [anon_sym_mute] = anon_sym_mute,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_previous] = anon_sym_previous,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_rewind] = anon_sym_rewind,
  [anon_sym_fast] = anon_sym_fast,
  [anon_sym_brightness_up] = anon_sym_brightness_up,
  [anon_sym_brightness_down] = anon_sym_brightness_down,
  [anon_sym_illumination_up] = anon_sym_illumination_up,
  [anon_sym_illumination_down] = anon_sym_illumination_down,
  [aux_sym__key_literal_token2] = aux_sym__key_literal_token2,
  [anon_sym_kVK_Return] = anon_sym_kVK_Return,
  [anon_sym_kVK_Tab] = anon_sym_kVK_Tab,
  [anon_sym_kVK_Space] = anon_sym_kVK_Space,
  [anon_sym_kVK_Delete] = anon_sym_kVK_Delete,
  [anon_sym_kVK_Escape] = anon_sym_kVK_Escape,
  [anon_sym_kVK_ForwardDelete] = anon_sym_kVK_ForwardDelete,
  [anon_sym_kVK_Home] = anon_sym_kVK_Home,
  [anon_sym_kVK_End] = anon_sym_kVK_End,
  [anon_sym_kVK_PageUp] = anon_sym_kVK_PageUp,
  [anon_sym_kVK_PageDown] = anon_sym_kVK_PageDown,
  [anon_sym_kVK_Help] = anon_sym_kVK_Help,
  [anon_sym_kVK_LeftArrow] = anon_sym_kVK_LeftArrow,
  [anon_sym_kVK_RightArrow] = anon_sym_kVK_RightArrow,
  [anon_sym_kVK_UpArrow] = anon_sym_kVK_UpArrow,
  [anon_sym_kVK_DownArrow] = anon_sym_kVK_DownArrow,
  [anon_sym_kVK_F1] = anon_sym_kVK_F1,
  [anon_sym_kVK_F2] = anon_sym_kVK_F2,
  [anon_sym_kVK_F3] = anon_sym_kVK_F3,
  [anon_sym_kVK_F4] = anon_sym_kVK_F4,
  [anon_sym_kVK_F5] = anon_sym_kVK_F5,
  [anon_sym_kVK_F6] = anon_sym_kVK_F6,
  [anon_sym_kVK_F7] = anon_sym_kVK_F7,
  [anon_sym_kVK_F8] = anon_sym_kVK_F8,
  [anon_sym_kVK_F9] = anon_sym_kVK_F9,
  [anon_sym_kVK_F10] = anon_sym_kVK_F10,
  [anon_sym_kVK_F11] = anon_sym_kVK_F11,
  [anon_sym_kVK_F12] = anon_sym_kVK_F12,
  [anon_sym_kVK_F13] = anon_sym_kVK_F13,
  [anon_sym_kVK_F14] = anon_sym_kVK_F14,
  [anon_sym_kVK_F15] = anon_sym_kVK_F15,
  [anon_sym_kVK_F16] = anon_sym_kVK_F16,
  [anon_sym_kVK_F17] = anon_sym_kVK_F17,
  [anon_sym_kVK_F18] = anon_sym_kVK_F18,
  [anon_sym_kVK_F19] = anon_sym_kVK_F19,
  [anon_sym_kVK_F20] = anon_sym_kVK_F20,
  [anon_sym_NX_KEYTYPE_SOUND_UP] = anon_sym_NX_KEYTYPE_SOUND_UP,
  [anon_sym_NX_KEYTYPE_SOUND_DOWN] = anon_sym_NX_KEYTYPE_SOUND_DOWN,
  [anon_sym_NX_KEYTYPE_MUTE] = anon_sym_NX_KEYTYPE_MUTE,
  [anon_sym_NX_KEYTYPE_PLAY] = anon_sym_NX_KEYTYPE_PLAY,
  [anon_sym_NX_KEYTYPE_PREVIOUS] = anon_sym_NX_KEYTYPE_PREVIOUS,
  [anon_sym_NX_KEYTYPE_NEXT] = anon_sym_NX_KEYTYPE_NEXT,
  [anon_sym_NX_KEYTYPE_REWIND] = anon_sym_NX_KEYTYPE_REWIND,
  [anon_sym_NX_KEYTYPE_FAST] = anon_sym_NX_KEYTYPE_FAST,
  [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = anon_sym_NX_KEYTYPE_BRIGHTNESS_UP,
  [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN,
  [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = anon_sym_NX_KEYTYPE_ILLUMINATION_UP,
  [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_configuration_statement] = sym_configuration_statement,
  [sym_blacklist_statement] = sym_blacklist_statement,
  [sym_load_statement] = sym_load_statement,
  [sym_expression] = sym_expression,
  [sym_key] = sym_key,
  [sym__key_literal] = sym__key_literal,
  [sym__keycode] = sym__keycode,
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
  [aux_sym__key_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pageup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pagedown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sound_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sound_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_previous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightness_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightness_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illumination_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illumination_down] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__key_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_kVK_Return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_Tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_Space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_Delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_Escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_ForwardDelete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_Home] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_End] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_PageUp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_PageDown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_Help] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_LeftArrow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_RightArrow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_UpArrow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_DownArrow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kVK_F20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_SOUND_UP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_SOUND_DOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_MUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_PLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_PREVIOUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_NEXT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_REWIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_FAST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__key_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__keycode] = {
    .visible = false,
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
      if (eof) ADVANCE(288);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'h') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'k') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(309);
      if (lookahead == '2') ADVANCE(310);
      if (lookahead == '3') ADVANCE(311);
      if (lookahead == '4') ADVANCE(312);
      if (lookahead == '5') ADVANCE(313);
      if (lookahead == '6') ADVANCE(314);
      if (lookahead == '7') ADVANCE(315);
      if (lookahead == '8') ADVANCE(316);
      if (lookahead == '9') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '2') ADVANCE(358);
      if (lookahead == '3') ADVANCE(359);
      if (lookahead == '4') ADVANCE(360);
      if (lookahead == '5') ADVANCE(361);
      if (lookahead == '6') ADVANCE(362);
      if (lookahead == '7') ADVANCE(363);
      if (lookahead == '8') ADVANCE(364);
      if (lookahead == '9') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(232);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(237);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(240);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(241);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'P') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'F') ADVANCE(4);
      if (lookahead == 'H') ADVANCE(149);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(228);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == 'U') ADVANCE(218);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(383);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(157);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(214);
      if (lookahead == 'U') ADVANCE(222);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(379);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'K') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'K') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(6);
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(378);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(386);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(388);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'P') ADVANCE(377);
      END_STATE();
    case 56:
      if (lookahead == 'P') ADVANCE(385);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(387);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'S') ADVANCE(381);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(384);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(382);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 71:
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 75:
      if (lookahead == 'V') ADVANCE(33);
      END_STATE();
    case 76:
      if (lookahead == 'W') ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == 'W') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 'W') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 'W') ADVANCE(43);
      END_STATE();
    case 80:
      if (lookahead == 'X') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'X') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'Y') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'Y') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 'Y') ADVANCE(380);
      END_STATE();
    case 85:
      if (lookahead == '[') ADVANCE(289);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 111:
      if (lookahead == 'b') ADVANCE(295);
      END_STATE();
    case 112:
      if (lookahead == 'b') ADVANCE(343);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 158:
      if (lookahead == 'f') ADVANCE(250);
      END_STATE();
    case 159:
      if (lookahead == 'f') ADVANCE(263);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(256);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(264);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 174:
      if (lookahead == 'k') ADVANCE(244);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(337);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 271:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 272:
      if (lookahead == 'w') ADVANCE(188);
      END_STATE();
    case 273:
      if (lookahead == 'w') ADVANCE(355);
      END_STATE();
    case 274:
      if (lookahead == 'w') ADVANCE(356);
      END_STATE();
    case 275:
      if (lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 276:
      if (lookahead == 'w') ADVANCE(354);
      END_STATE();
    case 277:
      if (lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 278:
      if (lookahead == 'w') ADVANCE(190);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(192);
      END_STATE();
    case 281:
      if (lookahead == 'w') ADVANCE(193);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(194);
      END_STATE();
    case 283:
      if (lookahead == 'w') ADVANCE(195);
      END_STATE();
    case 284:
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 285:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 286:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 287:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOTblacklist_LBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOTload);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__key_literal_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_escape);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_pageup);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_pagedown);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_f1);
      if (lookahead == '0') ADVANCE(318);
      if (lookahead == '1') ADVANCE(319);
      if (lookahead == '2') ADVANCE(320);
      if (lookahead == '3') ADVANCE(321);
      if (lookahead == '4') ADVANCE(322);
      if (lookahead == '5') ADVANCE(323);
      if (lookahead == '6') ADVANCE(324);
      if (lookahead == '7') ADVANCE(325);
      if (lookahead == '8') ADVANCE(326);
      if (lookahead == '9') ADVANCE(327);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_f2);
      if (lookahead == '0') ADVANCE(328);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_f3);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_f4);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_f5);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_f6);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_f7);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_f8);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_f9);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_f10);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_f11);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_f12);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_f13);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_f14);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_f15);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_f17);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_f18);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_f19);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_f20);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_sound_up);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_sound_down);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_mute);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_previous);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_rewind);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_fast);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_brightness_up);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_brightness_down);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_illumination_up);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_illumination_down);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__key_literal_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_kVK_Return);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_kVK_Tab);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_kVK_Space);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_kVK_Delete);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_kVK_Escape);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_kVK_ForwardDelete);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_kVK_Home);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_kVK_End);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_kVK_PageUp);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_kVK_PageDown);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_kVK_Help);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_kVK_LeftArrow);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_kVK_RightArrow);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_kVK_UpArrow);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_kVK_DownArrow);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_kVK_F1);
      if (lookahead == '0') ADVANCE(366);
      if (lookahead == '1') ADVANCE(367);
      if (lookahead == '2') ADVANCE(368);
      if (lookahead == '3') ADVANCE(369);
      if (lookahead == '4') ADVANCE(370);
      if (lookahead == '5') ADVANCE(371);
      if (lookahead == '6') ADVANCE(372);
      if (lookahead == '7') ADVANCE(373);
      if (lookahead == '8') ADVANCE(374);
      if (lookahead == '9') ADVANCE(375);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_kVK_F2);
      if (lookahead == '0') ADVANCE(376);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_kVK_F3);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_kVK_F4);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_kVK_F5);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_kVK_F6);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_kVK_F7);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_kVK_F8);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_kVK_F9);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_kVK_F10);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_kVK_F11);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_kVK_F12);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_kVK_F13);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_kVK_F14);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_kVK_F15);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_kVK_F16);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_kVK_F17);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_kVK_F18);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_kVK_F19);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_kVK_F20);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_SOUND_UP);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_SOUND_DOWN);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_MUTE);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_PLAY);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_PREVIOUS);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_NEXT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_REWIND);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_FAST);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_BRIGHTNESS_UP);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_ILLUMINATION_UP);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOTload] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_tab] = ACTIONS(1),
    [anon_sym_space] = ACTIONS(1),
    [anon_sym_backspace] = ACTIONS(1),
    [anon_sym_escape] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_home] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_pageup] = ACTIONS(1),
    [anon_sym_pagedown] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_f1] = ACTIONS(1),
    [anon_sym_f2] = ACTIONS(1),
    [anon_sym_f3] = ACTIONS(1),
    [anon_sym_f4] = ACTIONS(1),
    [anon_sym_f5] = ACTIONS(1),
    [anon_sym_f6] = ACTIONS(1),
    [anon_sym_f7] = ACTIONS(1),
    [anon_sym_f8] = ACTIONS(1),
    [anon_sym_f9] = ACTIONS(1),
    [anon_sym_f10] = ACTIONS(1),
    [anon_sym_f11] = ACTIONS(1),
    [anon_sym_f12] = ACTIONS(1),
    [anon_sym_f13] = ACTIONS(1),
    [anon_sym_f14] = ACTIONS(1),
    [anon_sym_f15] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f17] = ACTIONS(1),
    [anon_sym_f18] = ACTIONS(1),
    [anon_sym_f19] = ACTIONS(1),
    [anon_sym_f20] = ACTIONS(1),
    [anon_sym_sound_up] = ACTIONS(1),
    [anon_sym_sound_down] = ACTIONS(1),
    [anon_sym_mute] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_previous] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_rewind] = ACTIONS(1),
    [anon_sym_fast] = ACTIONS(1),
    [anon_sym_brightness_up] = ACTIONS(1),
    [anon_sym_brightness_down] = ACTIONS(1),
    [anon_sym_illumination_up] = ACTIONS(1),
    [anon_sym_illumination_down] = ACTIONS(1),
    [anon_sym_kVK_Return] = ACTIONS(1),
    [anon_sym_kVK_Tab] = ACTIONS(1),
    [anon_sym_kVK_Space] = ACTIONS(1),
    [anon_sym_kVK_Delete] = ACTIONS(1),
    [anon_sym_kVK_Escape] = ACTIONS(1),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(1),
    [anon_sym_kVK_Home] = ACTIONS(1),
    [anon_sym_kVK_End] = ACTIONS(1),
    [anon_sym_kVK_PageUp] = ACTIONS(1),
    [anon_sym_kVK_PageDown] = ACTIONS(1),
    [anon_sym_kVK_Help] = ACTIONS(1),
    [anon_sym_kVK_LeftArrow] = ACTIONS(1),
    [anon_sym_kVK_RightArrow] = ACTIONS(1),
    [anon_sym_kVK_UpArrow] = ACTIONS(1),
    [anon_sym_kVK_DownArrow] = ACTIONS(1),
    [anon_sym_kVK_F1] = ACTIONS(1),
    [anon_sym_kVK_F2] = ACTIONS(1),
    [anon_sym_kVK_F3] = ACTIONS(1),
    [anon_sym_kVK_F4] = ACTIONS(1),
    [anon_sym_kVK_F5] = ACTIONS(1),
    [anon_sym_kVK_F6] = ACTIONS(1),
    [anon_sym_kVK_F7] = ACTIONS(1),
    [anon_sym_kVK_F8] = ACTIONS(1),
    [anon_sym_kVK_F9] = ACTIONS(1),
    [anon_sym_kVK_F10] = ACTIONS(1),
    [anon_sym_kVK_F11] = ACTIONS(1),
    [anon_sym_kVK_F12] = ACTIONS(1),
    [anon_sym_kVK_F13] = ACTIONS(1),
    [anon_sym_kVK_F14] = ACTIONS(1),
    [anon_sym_kVK_F15] = ACTIONS(1),
    [anon_sym_kVK_F16] = ACTIONS(1),
    [anon_sym_kVK_F17] = ACTIONS(1),
    [anon_sym_kVK_F18] = ACTIONS(1),
    [anon_sym_kVK_F19] = ACTIONS(1),
    [anon_sym_kVK_F20] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(1),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym_statement] = STATE(2),
    [sym_configuration_statement] = STATE(5),
    [sym_blacklist_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [sym_expression] = STATE(5),
    [sym_key] = STATE(4),
    [sym__key_literal] = STATE(7),
    [sym__keycode] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(7),
    [anon_sym_DOTload] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_tab] = ACTIONS(11),
    [anon_sym_space] = ACTIONS(11),
    [anon_sym_backspace] = ACTIONS(11),
    [anon_sym_escape] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_home] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_pageup] = ACTIONS(11),
    [anon_sym_pagedown] = ACTIONS(11),
    [anon_sym_insert] = ACTIONS(11),
    [anon_sym_left] = ACTIONS(11),
    [anon_sym_right] = ACTIONS(11),
    [anon_sym_up] = ACTIONS(11),
    [anon_sym_down] = ACTIONS(11),
    [anon_sym_f1] = ACTIONS(13),
    [anon_sym_f2] = ACTIONS(13),
    [anon_sym_f3] = ACTIONS(11),
    [anon_sym_f4] = ACTIONS(11),
    [anon_sym_f5] = ACTIONS(11),
    [anon_sym_f6] = ACTIONS(11),
    [anon_sym_f7] = ACTIONS(11),
    [anon_sym_f8] = ACTIONS(11),
    [anon_sym_f9] = ACTIONS(11),
    [anon_sym_f10] = ACTIONS(11),
    [anon_sym_f11] = ACTIONS(11),
    [anon_sym_f12] = ACTIONS(11),
    [anon_sym_f13] = ACTIONS(11),
    [anon_sym_f14] = ACTIONS(11),
    [anon_sym_f15] = ACTIONS(11),
    [anon_sym_f16] = ACTIONS(11),
    [anon_sym_f17] = ACTIONS(11),
    [anon_sym_f18] = ACTIONS(11),
    [anon_sym_f19] = ACTIONS(11),
    [anon_sym_f20] = ACTIONS(11),
    [anon_sym_sound_up] = ACTIONS(11),
    [anon_sym_sound_down] = ACTIONS(11),
    [anon_sym_mute] = ACTIONS(11),
    [anon_sym_play] = ACTIONS(11),
    [anon_sym_previous] = ACTIONS(11),
    [anon_sym_next] = ACTIONS(11),
    [anon_sym_rewind] = ACTIONS(11),
    [anon_sym_fast] = ACTIONS(11),
    [anon_sym_brightness_up] = ACTIONS(11),
    [anon_sym_brightness_down] = ACTIONS(11),
    [anon_sym_illumination_up] = ACTIONS(11),
    [anon_sym_illumination_down] = ACTIONS(11),
    [anon_sym_kVK_Return] = ACTIONS(15),
    [anon_sym_kVK_Tab] = ACTIONS(15),
    [anon_sym_kVK_Space] = ACTIONS(15),
    [anon_sym_kVK_Delete] = ACTIONS(15),
    [anon_sym_kVK_Escape] = ACTIONS(15),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(15),
    [anon_sym_kVK_Home] = ACTIONS(15),
    [anon_sym_kVK_End] = ACTIONS(15),
    [anon_sym_kVK_PageUp] = ACTIONS(15),
    [anon_sym_kVK_PageDown] = ACTIONS(15),
    [anon_sym_kVK_Help] = ACTIONS(15),
    [anon_sym_kVK_LeftArrow] = ACTIONS(15),
    [anon_sym_kVK_RightArrow] = ACTIONS(15),
    [anon_sym_kVK_UpArrow] = ACTIONS(15),
    [anon_sym_kVK_DownArrow] = ACTIONS(15),
    [anon_sym_kVK_F1] = ACTIONS(17),
    [anon_sym_kVK_F2] = ACTIONS(17),
    [anon_sym_kVK_F3] = ACTIONS(15),
    [anon_sym_kVK_F4] = ACTIONS(15),
    [anon_sym_kVK_F5] = ACTIONS(15),
    [anon_sym_kVK_F6] = ACTIONS(15),
    [anon_sym_kVK_F7] = ACTIONS(15),
    [anon_sym_kVK_F8] = ACTIONS(15),
    [anon_sym_kVK_F9] = ACTIONS(15),
    [anon_sym_kVK_F10] = ACTIONS(15),
    [anon_sym_kVK_F11] = ACTIONS(15),
    [anon_sym_kVK_F12] = ACTIONS(15),
    [anon_sym_kVK_F13] = ACTIONS(15),
    [anon_sym_kVK_F14] = ACTIONS(15),
    [anon_sym_kVK_F15] = ACTIONS(15),
    [anon_sym_kVK_F16] = ACTIONS(15),
    [anon_sym_kVK_F17] = ACTIONS(15),
    [anon_sym_kVK_F18] = ACTIONS(15),
    [anon_sym_kVK_F19] = ACTIONS(15),
    [anon_sym_kVK_F20] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(15),
    [sym_string] = ACTIONS(19),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_configuration_statement] = STATE(5),
    [sym_blacklist_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [sym_expression] = STATE(5),
    [sym_key] = STATE(4),
    [sym__key_literal] = STATE(7),
    [sym__keycode] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(7),
    [anon_sym_DOTload] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_tab] = ACTIONS(11),
    [anon_sym_space] = ACTIONS(11),
    [anon_sym_backspace] = ACTIONS(11),
    [anon_sym_escape] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_home] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_pageup] = ACTIONS(11),
    [anon_sym_pagedown] = ACTIONS(11),
    [anon_sym_insert] = ACTIONS(11),
    [anon_sym_left] = ACTIONS(11),
    [anon_sym_right] = ACTIONS(11),
    [anon_sym_up] = ACTIONS(11),
    [anon_sym_down] = ACTIONS(11),
    [anon_sym_f1] = ACTIONS(13),
    [anon_sym_f2] = ACTIONS(13),
    [anon_sym_f3] = ACTIONS(11),
    [anon_sym_f4] = ACTIONS(11),
    [anon_sym_f5] = ACTIONS(11),
    [anon_sym_f6] = ACTIONS(11),
    [anon_sym_f7] = ACTIONS(11),
    [anon_sym_f8] = ACTIONS(11),
    [anon_sym_f9] = ACTIONS(11),
    [anon_sym_f10] = ACTIONS(11),
    [anon_sym_f11] = ACTIONS(11),
    [anon_sym_f12] = ACTIONS(11),
    [anon_sym_f13] = ACTIONS(11),
    [anon_sym_f14] = ACTIONS(11),
    [anon_sym_f15] = ACTIONS(11),
    [anon_sym_f16] = ACTIONS(11),
    [anon_sym_f17] = ACTIONS(11),
    [anon_sym_f18] = ACTIONS(11),
    [anon_sym_f19] = ACTIONS(11),
    [anon_sym_f20] = ACTIONS(11),
    [anon_sym_sound_up] = ACTIONS(11),
    [anon_sym_sound_down] = ACTIONS(11),
    [anon_sym_mute] = ACTIONS(11),
    [anon_sym_play] = ACTIONS(11),
    [anon_sym_previous] = ACTIONS(11),
    [anon_sym_next] = ACTIONS(11),
    [anon_sym_rewind] = ACTIONS(11),
    [anon_sym_fast] = ACTIONS(11),
    [anon_sym_brightness_up] = ACTIONS(11),
    [anon_sym_brightness_down] = ACTIONS(11),
    [anon_sym_illumination_up] = ACTIONS(11),
    [anon_sym_illumination_down] = ACTIONS(11),
    [anon_sym_kVK_Return] = ACTIONS(15),
    [anon_sym_kVK_Tab] = ACTIONS(15),
    [anon_sym_kVK_Space] = ACTIONS(15),
    [anon_sym_kVK_Delete] = ACTIONS(15),
    [anon_sym_kVK_Escape] = ACTIONS(15),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(15),
    [anon_sym_kVK_Home] = ACTIONS(15),
    [anon_sym_kVK_End] = ACTIONS(15),
    [anon_sym_kVK_PageUp] = ACTIONS(15),
    [anon_sym_kVK_PageDown] = ACTIONS(15),
    [anon_sym_kVK_Help] = ACTIONS(15),
    [anon_sym_kVK_LeftArrow] = ACTIONS(15),
    [anon_sym_kVK_RightArrow] = ACTIONS(15),
    [anon_sym_kVK_UpArrow] = ACTIONS(15),
    [anon_sym_kVK_DownArrow] = ACTIONS(15),
    [anon_sym_kVK_F1] = ACTIONS(17),
    [anon_sym_kVK_F2] = ACTIONS(17),
    [anon_sym_kVK_F3] = ACTIONS(15),
    [anon_sym_kVK_F4] = ACTIONS(15),
    [anon_sym_kVK_F5] = ACTIONS(15),
    [anon_sym_kVK_F6] = ACTIONS(15),
    [anon_sym_kVK_F7] = ACTIONS(15),
    [anon_sym_kVK_F8] = ACTIONS(15),
    [anon_sym_kVK_F9] = ACTIONS(15),
    [anon_sym_kVK_F10] = ACTIONS(15),
    [anon_sym_kVK_F11] = ACTIONS(15),
    [anon_sym_kVK_F12] = ACTIONS(15),
    [anon_sym_kVK_F13] = ACTIONS(15),
    [anon_sym_kVK_F14] = ACTIONS(15),
    [anon_sym_kVK_F15] = ACTIONS(15),
    [anon_sym_kVK_F16] = ACTIONS(15),
    [anon_sym_kVK_F17] = ACTIONS(15),
    [anon_sym_kVK_F18] = ACTIONS(15),
    [anon_sym_kVK_F19] = ACTIONS(15),
    [anon_sym_kVK_F20] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(15),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(15),
    [sym_string] = ACTIONS(19),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_configuration_statement] = STATE(5),
    [sym_blacklist_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [sym_expression] = STATE(5),
    [sym_key] = STATE(4),
    [sym__key_literal] = STATE(7),
    [sym__keycode] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(25),
    [anon_sym_DOTload] = ACTIONS(28),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(31),
    [anon_sym_tab] = ACTIONS(31),
    [anon_sym_space] = ACTIONS(31),
    [anon_sym_backspace] = ACTIONS(31),
    [anon_sym_escape] = ACTIONS(31),
    [anon_sym_delete] = ACTIONS(31),
    [anon_sym_home] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(31),
    [anon_sym_pageup] = ACTIONS(31),
    [anon_sym_pagedown] = ACTIONS(31),
    [anon_sym_insert] = ACTIONS(31),
    [anon_sym_left] = ACTIONS(31),
    [anon_sym_right] = ACTIONS(31),
    [anon_sym_up] = ACTIONS(31),
    [anon_sym_down] = ACTIONS(31),
    [anon_sym_f1] = ACTIONS(34),
    [anon_sym_f2] = ACTIONS(34),
    [anon_sym_f3] = ACTIONS(31),
    [anon_sym_f4] = ACTIONS(31),
    [anon_sym_f5] = ACTIONS(31),
    [anon_sym_f6] = ACTIONS(31),
    [anon_sym_f7] = ACTIONS(31),
    [anon_sym_f8] = ACTIONS(31),
    [anon_sym_f9] = ACTIONS(31),
    [anon_sym_f10] = ACTIONS(31),
    [anon_sym_f11] = ACTIONS(31),
    [anon_sym_f12] = ACTIONS(31),
    [anon_sym_f13] = ACTIONS(31),
    [anon_sym_f14] = ACTIONS(31),
    [anon_sym_f15] = ACTIONS(31),
    [anon_sym_f16] = ACTIONS(31),
    [anon_sym_f17] = ACTIONS(31),
    [anon_sym_f18] = ACTIONS(31),
    [anon_sym_f19] = ACTIONS(31),
    [anon_sym_f20] = ACTIONS(31),
    [anon_sym_sound_up] = ACTIONS(31),
    [anon_sym_sound_down] = ACTIONS(31),
    [anon_sym_mute] = ACTIONS(31),
    [anon_sym_play] = ACTIONS(31),
    [anon_sym_previous] = ACTIONS(31),
    [anon_sym_next] = ACTIONS(31),
    [anon_sym_rewind] = ACTIONS(31),
    [anon_sym_fast] = ACTIONS(31),
    [anon_sym_brightness_up] = ACTIONS(31),
    [anon_sym_brightness_down] = ACTIONS(31),
    [anon_sym_illumination_up] = ACTIONS(31),
    [anon_sym_illumination_down] = ACTIONS(31),
    [anon_sym_kVK_Return] = ACTIONS(37),
    [anon_sym_kVK_Tab] = ACTIONS(37),
    [anon_sym_kVK_Space] = ACTIONS(37),
    [anon_sym_kVK_Delete] = ACTIONS(37),
    [anon_sym_kVK_Escape] = ACTIONS(37),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(37),
    [anon_sym_kVK_Home] = ACTIONS(37),
    [anon_sym_kVK_End] = ACTIONS(37),
    [anon_sym_kVK_PageUp] = ACTIONS(37),
    [anon_sym_kVK_PageDown] = ACTIONS(37),
    [anon_sym_kVK_Help] = ACTIONS(37),
    [anon_sym_kVK_LeftArrow] = ACTIONS(37),
    [anon_sym_kVK_RightArrow] = ACTIONS(37),
    [anon_sym_kVK_UpArrow] = ACTIONS(37),
    [anon_sym_kVK_DownArrow] = ACTIONS(37),
    [anon_sym_kVK_F1] = ACTIONS(40),
    [anon_sym_kVK_F2] = ACTIONS(40),
    [anon_sym_kVK_F3] = ACTIONS(37),
    [anon_sym_kVK_F4] = ACTIONS(37),
    [anon_sym_kVK_F5] = ACTIONS(37),
    [anon_sym_kVK_F6] = ACTIONS(37),
    [anon_sym_kVK_F7] = ACTIONS(37),
    [anon_sym_kVK_F8] = ACTIONS(37),
    [anon_sym_kVK_F9] = ACTIONS(37),
    [anon_sym_kVK_F10] = ACTIONS(37),
    [anon_sym_kVK_F11] = ACTIONS(37),
    [anon_sym_kVK_F12] = ACTIONS(37),
    [anon_sym_kVK_F13] = ACTIONS(37),
    [anon_sym_kVK_F14] = ACTIONS(37),
    [anon_sym_kVK_F15] = ACTIONS(37),
    [anon_sym_kVK_F16] = ACTIONS(37),
    [anon_sym_kVK_F17] = ACTIONS(37),
    [anon_sym_kVK_F18] = ACTIONS(37),
    [anon_sym_kVK_F19] = ACTIONS(37),
    [anon_sym_kVK_F20] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(37),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(37),
    [sym_string] = ACTIONS(43),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(46),
    [anon_sym_DOTload] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(46),
    [anon_sym_return] = ACTIONS(46),
    [anon_sym_tab] = ACTIONS(46),
    [anon_sym_space] = ACTIONS(46),
    [anon_sym_backspace] = ACTIONS(46),
    [anon_sym_escape] = ACTIONS(46),
    [anon_sym_delete] = ACTIONS(46),
    [anon_sym_home] = ACTIONS(46),
    [anon_sym_end] = ACTIONS(46),
    [anon_sym_pageup] = ACTIONS(46),
    [anon_sym_pagedown] = ACTIONS(46),
    [anon_sym_insert] = ACTIONS(46),
    [anon_sym_left] = ACTIONS(46),
    [anon_sym_right] = ACTIONS(46),
    [anon_sym_up] = ACTIONS(46),
    [anon_sym_down] = ACTIONS(46),
    [anon_sym_f1] = ACTIONS(48),
    [anon_sym_f2] = ACTIONS(48),
    [anon_sym_f3] = ACTIONS(46),
    [anon_sym_f4] = ACTIONS(46),
    [anon_sym_f5] = ACTIONS(46),
    [anon_sym_f6] = ACTIONS(46),
    [anon_sym_f7] = ACTIONS(46),
    [anon_sym_f8] = ACTIONS(46),
    [anon_sym_f9] = ACTIONS(46),
    [anon_sym_f10] = ACTIONS(46),
    [anon_sym_f11] = ACTIONS(46),
    [anon_sym_f12] = ACTIONS(46),
    [anon_sym_f13] = ACTIONS(46),
    [anon_sym_f14] = ACTIONS(46),
    [anon_sym_f15] = ACTIONS(46),
    [anon_sym_f16] = ACTIONS(46),
    [anon_sym_f17] = ACTIONS(46),
    [anon_sym_f18] = ACTIONS(46),
    [anon_sym_f19] = ACTIONS(46),
    [anon_sym_f20] = ACTIONS(46),
    [anon_sym_sound_up] = ACTIONS(46),
    [anon_sym_sound_down] = ACTIONS(46),
    [anon_sym_mute] = ACTIONS(46),
    [anon_sym_play] = ACTIONS(46),
    [anon_sym_previous] = ACTIONS(46),
    [anon_sym_next] = ACTIONS(46),
    [anon_sym_rewind] = ACTIONS(46),
    [anon_sym_fast] = ACTIONS(46),
    [anon_sym_brightness_up] = ACTIONS(46),
    [anon_sym_brightness_down] = ACTIONS(46),
    [anon_sym_illumination_up] = ACTIONS(46),
    [anon_sym_illumination_down] = ACTIONS(46),
    [anon_sym_kVK_Return] = ACTIONS(46),
    [anon_sym_kVK_Tab] = ACTIONS(46),
    [anon_sym_kVK_Space] = ACTIONS(46),
    [anon_sym_kVK_Delete] = ACTIONS(46),
    [anon_sym_kVK_Escape] = ACTIONS(46),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(46),
    [anon_sym_kVK_Home] = ACTIONS(46),
    [anon_sym_kVK_End] = ACTIONS(46),
    [anon_sym_kVK_PageUp] = ACTIONS(46),
    [anon_sym_kVK_PageDown] = ACTIONS(46),
    [anon_sym_kVK_Help] = ACTIONS(46),
    [anon_sym_kVK_LeftArrow] = ACTIONS(46),
    [anon_sym_kVK_RightArrow] = ACTIONS(46),
    [anon_sym_kVK_UpArrow] = ACTIONS(46),
    [anon_sym_kVK_DownArrow] = ACTIONS(46),
    [anon_sym_kVK_F1] = ACTIONS(48),
    [anon_sym_kVK_F2] = ACTIONS(48),
    [anon_sym_kVK_F3] = ACTIONS(46),
    [anon_sym_kVK_F4] = ACTIONS(46),
    [anon_sym_kVK_F5] = ACTIONS(46),
    [anon_sym_kVK_F6] = ACTIONS(46),
    [anon_sym_kVK_F7] = ACTIONS(46),
    [anon_sym_kVK_F8] = ACTIONS(46),
    [anon_sym_kVK_F9] = ACTIONS(46),
    [anon_sym_kVK_F10] = ACTIONS(46),
    [anon_sym_kVK_F11] = ACTIONS(46),
    [anon_sym_kVK_F12] = ACTIONS(46),
    [anon_sym_kVK_F13] = ACTIONS(46),
    [anon_sym_kVK_F14] = ACTIONS(46),
    [anon_sym_kVK_F15] = ACTIONS(46),
    [anon_sym_kVK_F16] = ACTIONS(46),
    [anon_sym_kVK_F17] = ACTIONS(46),
    [anon_sym_kVK_F18] = ACTIONS(46),
    [anon_sym_kVK_F19] = ACTIONS(46),
    [anon_sym_kVK_F20] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(46),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(50),
    [anon_sym_DOTload] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(50),
    [anon_sym_return] = ACTIONS(50),
    [anon_sym_tab] = ACTIONS(50),
    [anon_sym_space] = ACTIONS(50),
    [anon_sym_backspace] = ACTIONS(50),
    [anon_sym_escape] = ACTIONS(50),
    [anon_sym_delete] = ACTIONS(50),
    [anon_sym_home] = ACTIONS(50),
    [anon_sym_end] = ACTIONS(50),
    [anon_sym_pageup] = ACTIONS(50),
    [anon_sym_pagedown] = ACTIONS(50),
    [anon_sym_insert] = ACTIONS(50),
    [anon_sym_left] = ACTIONS(50),
    [anon_sym_right] = ACTIONS(50),
    [anon_sym_up] = ACTIONS(50),
    [anon_sym_down] = ACTIONS(50),
    [anon_sym_f1] = ACTIONS(52),
    [anon_sym_f2] = ACTIONS(52),
    [anon_sym_f3] = ACTIONS(50),
    [anon_sym_f4] = ACTIONS(50),
    [anon_sym_f5] = ACTIONS(50),
    [anon_sym_f6] = ACTIONS(50),
    [anon_sym_f7] = ACTIONS(50),
    [anon_sym_f8] = ACTIONS(50),
    [anon_sym_f9] = ACTIONS(50),
    [anon_sym_f10] = ACTIONS(50),
    [anon_sym_f11] = ACTIONS(50),
    [anon_sym_f12] = ACTIONS(50),
    [anon_sym_f13] = ACTIONS(50),
    [anon_sym_f14] = ACTIONS(50),
    [anon_sym_f15] = ACTIONS(50),
    [anon_sym_f16] = ACTIONS(50),
    [anon_sym_f17] = ACTIONS(50),
    [anon_sym_f18] = ACTIONS(50),
    [anon_sym_f19] = ACTIONS(50),
    [anon_sym_f20] = ACTIONS(50),
    [anon_sym_sound_up] = ACTIONS(50),
    [anon_sym_sound_down] = ACTIONS(50),
    [anon_sym_mute] = ACTIONS(50),
    [anon_sym_play] = ACTIONS(50),
    [anon_sym_previous] = ACTIONS(50),
    [anon_sym_next] = ACTIONS(50),
    [anon_sym_rewind] = ACTIONS(50),
    [anon_sym_fast] = ACTIONS(50),
    [anon_sym_brightness_up] = ACTIONS(50),
    [anon_sym_brightness_down] = ACTIONS(50),
    [anon_sym_illumination_up] = ACTIONS(50),
    [anon_sym_illumination_down] = ACTIONS(50),
    [anon_sym_kVK_Return] = ACTIONS(50),
    [anon_sym_kVK_Tab] = ACTIONS(50),
    [anon_sym_kVK_Space] = ACTIONS(50),
    [anon_sym_kVK_Delete] = ACTIONS(50),
    [anon_sym_kVK_Escape] = ACTIONS(50),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(50),
    [anon_sym_kVK_Home] = ACTIONS(50),
    [anon_sym_kVK_End] = ACTIONS(50),
    [anon_sym_kVK_PageUp] = ACTIONS(50),
    [anon_sym_kVK_PageDown] = ACTIONS(50),
    [anon_sym_kVK_Help] = ACTIONS(50),
    [anon_sym_kVK_LeftArrow] = ACTIONS(50),
    [anon_sym_kVK_RightArrow] = ACTIONS(50),
    [anon_sym_kVK_UpArrow] = ACTIONS(50),
    [anon_sym_kVK_DownArrow] = ACTIONS(50),
    [anon_sym_kVK_F1] = ACTIONS(52),
    [anon_sym_kVK_F2] = ACTIONS(52),
    [anon_sym_kVK_F3] = ACTIONS(50),
    [anon_sym_kVK_F4] = ACTIONS(50),
    [anon_sym_kVK_F5] = ACTIONS(50),
    [anon_sym_kVK_F6] = ACTIONS(50),
    [anon_sym_kVK_F7] = ACTIONS(50),
    [anon_sym_kVK_F8] = ACTIONS(50),
    [anon_sym_kVK_F9] = ACTIONS(50),
    [anon_sym_kVK_F10] = ACTIONS(50),
    [anon_sym_kVK_F11] = ACTIONS(50),
    [anon_sym_kVK_F12] = ACTIONS(50),
    [anon_sym_kVK_F13] = ACTIONS(50),
    [anon_sym_kVK_F14] = ACTIONS(50),
    [anon_sym_kVK_F15] = ACTIONS(50),
    [anon_sym_kVK_F16] = ACTIONS(50),
    [anon_sym_kVK_F17] = ACTIONS(50),
    [anon_sym_kVK_F18] = ACTIONS(50),
    [anon_sym_kVK_F19] = ACTIONS(50),
    [anon_sym_kVK_F20] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(50),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(54),
    [anon_sym_DOTload] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(54),
    [anon_sym_return] = ACTIONS(54),
    [anon_sym_tab] = ACTIONS(54),
    [anon_sym_space] = ACTIONS(54),
    [anon_sym_backspace] = ACTIONS(54),
    [anon_sym_escape] = ACTIONS(54),
    [anon_sym_delete] = ACTIONS(54),
    [anon_sym_home] = ACTIONS(54),
    [anon_sym_end] = ACTIONS(54),
    [anon_sym_pageup] = ACTIONS(54),
    [anon_sym_pagedown] = ACTIONS(54),
    [anon_sym_insert] = ACTIONS(54),
    [anon_sym_left] = ACTIONS(54),
    [anon_sym_right] = ACTIONS(54),
    [anon_sym_up] = ACTIONS(54),
    [anon_sym_down] = ACTIONS(54),
    [anon_sym_f1] = ACTIONS(56),
    [anon_sym_f2] = ACTIONS(56),
    [anon_sym_f3] = ACTIONS(54),
    [anon_sym_f4] = ACTIONS(54),
    [anon_sym_f5] = ACTIONS(54),
    [anon_sym_f6] = ACTIONS(54),
    [anon_sym_f7] = ACTIONS(54),
    [anon_sym_f8] = ACTIONS(54),
    [anon_sym_f9] = ACTIONS(54),
    [anon_sym_f10] = ACTIONS(54),
    [anon_sym_f11] = ACTIONS(54),
    [anon_sym_f12] = ACTIONS(54),
    [anon_sym_f13] = ACTIONS(54),
    [anon_sym_f14] = ACTIONS(54),
    [anon_sym_f15] = ACTIONS(54),
    [anon_sym_f16] = ACTIONS(54),
    [anon_sym_f17] = ACTIONS(54),
    [anon_sym_f18] = ACTIONS(54),
    [anon_sym_f19] = ACTIONS(54),
    [anon_sym_f20] = ACTIONS(54),
    [anon_sym_sound_up] = ACTIONS(54),
    [anon_sym_sound_down] = ACTIONS(54),
    [anon_sym_mute] = ACTIONS(54),
    [anon_sym_play] = ACTIONS(54),
    [anon_sym_previous] = ACTIONS(54),
    [anon_sym_next] = ACTIONS(54),
    [anon_sym_rewind] = ACTIONS(54),
    [anon_sym_fast] = ACTIONS(54),
    [anon_sym_brightness_up] = ACTIONS(54),
    [anon_sym_brightness_down] = ACTIONS(54),
    [anon_sym_illumination_up] = ACTIONS(54),
    [anon_sym_illumination_down] = ACTIONS(54),
    [anon_sym_kVK_Return] = ACTIONS(54),
    [anon_sym_kVK_Tab] = ACTIONS(54),
    [anon_sym_kVK_Space] = ACTIONS(54),
    [anon_sym_kVK_Delete] = ACTIONS(54),
    [anon_sym_kVK_Escape] = ACTIONS(54),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(54),
    [anon_sym_kVK_Home] = ACTIONS(54),
    [anon_sym_kVK_End] = ACTIONS(54),
    [anon_sym_kVK_PageUp] = ACTIONS(54),
    [anon_sym_kVK_PageDown] = ACTIONS(54),
    [anon_sym_kVK_Help] = ACTIONS(54),
    [anon_sym_kVK_LeftArrow] = ACTIONS(54),
    [anon_sym_kVK_RightArrow] = ACTIONS(54),
    [anon_sym_kVK_UpArrow] = ACTIONS(54),
    [anon_sym_kVK_DownArrow] = ACTIONS(54),
    [anon_sym_kVK_F1] = ACTIONS(56),
    [anon_sym_kVK_F2] = ACTIONS(56),
    [anon_sym_kVK_F3] = ACTIONS(54),
    [anon_sym_kVK_F4] = ACTIONS(54),
    [anon_sym_kVK_F5] = ACTIONS(54),
    [anon_sym_kVK_F6] = ACTIONS(54),
    [anon_sym_kVK_F7] = ACTIONS(54),
    [anon_sym_kVK_F8] = ACTIONS(54),
    [anon_sym_kVK_F9] = ACTIONS(54),
    [anon_sym_kVK_F10] = ACTIONS(54),
    [anon_sym_kVK_F11] = ACTIONS(54),
    [anon_sym_kVK_F12] = ACTIONS(54),
    [anon_sym_kVK_F13] = ACTIONS(54),
    [anon_sym_kVK_F14] = ACTIONS(54),
    [anon_sym_kVK_F15] = ACTIONS(54),
    [anon_sym_kVK_F16] = ACTIONS(54),
    [anon_sym_kVK_F17] = ACTIONS(54),
    [anon_sym_kVK_F18] = ACTIONS(54),
    [anon_sym_kVK_F19] = ACTIONS(54),
    [anon_sym_kVK_F20] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(54),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(58),
    [anon_sym_DOTload] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(58),
    [anon_sym_return] = ACTIONS(58),
    [anon_sym_tab] = ACTIONS(58),
    [anon_sym_space] = ACTIONS(58),
    [anon_sym_backspace] = ACTIONS(58),
    [anon_sym_escape] = ACTIONS(58),
    [anon_sym_delete] = ACTIONS(58),
    [anon_sym_home] = ACTIONS(58),
    [anon_sym_end] = ACTIONS(58),
    [anon_sym_pageup] = ACTIONS(58),
    [anon_sym_pagedown] = ACTIONS(58),
    [anon_sym_insert] = ACTIONS(58),
    [anon_sym_left] = ACTIONS(58),
    [anon_sym_right] = ACTIONS(58),
    [anon_sym_up] = ACTIONS(58),
    [anon_sym_down] = ACTIONS(58),
    [anon_sym_f1] = ACTIONS(60),
    [anon_sym_f2] = ACTIONS(60),
    [anon_sym_f3] = ACTIONS(58),
    [anon_sym_f4] = ACTIONS(58),
    [anon_sym_f5] = ACTIONS(58),
    [anon_sym_f6] = ACTIONS(58),
    [anon_sym_f7] = ACTIONS(58),
    [anon_sym_f8] = ACTIONS(58),
    [anon_sym_f9] = ACTIONS(58),
    [anon_sym_f10] = ACTIONS(58),
    [anon_sym_f11] = ACTIONS(58),
    [anon_sym_f12] = ACTIONS(58),
    [anon_sym_f13] = ACTIONS(58),
    [anon_sym_f14] = ACTIONS(58),
    [anon_sym_f15] = ACTIONS(58),
    [anon_sym_f16] = ACTIONS(58),
    [anon_sym_f17] = ACTIONS(58),
    [anon_sym_f18] = ACTIONS(58),
    [anon_sym_f19] = ACTIONS(58),
    [anon_sym_f20] = ACTIONS(58),
    [anon_sym_sound_up] = ACTIONS(58),
    [anon_sym_sound_down] = ACTIONS(58),
    [anon_sym_mute] = ACTIONS(58),
    [anon_sym_play] = ACTIONS(58),
    [anon_sym_previous] = ACTIONS(58),
    [anon_sym_next] = ACTIONS(58),
    [anon_sym_rewind] = ACTIONS(58),
    [anon_sym_fast] = ACTIONS(58),
    [anon_sym_brightness_up] = ACTIONS(58),
    [anon_sym_brightness_down] = ACTIONS(58),
    [anon_sym_illumination_up] = ACTIONS(58),
    [anon_sym_illumination_down] = ACTIONS(58),
    [anon_sym_kVK_Return] = ACTIONS(58),
    [anon_sym_kVK_Tab] = ACTIONS(58),
    [anon_sym_kVK_Space] = ACTIONS(58),
    [anon_sym_kVK_Delete] = ACTIONS(58),
    [anon_sym_kVK_Escape] = ACTIONS(58),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(58),
    [anon_sym_kVK_Home] = ACTIONS(58),
    [anon_sym_kVK_End] = ACTIONS(58),
    [anon_sym_kVK_PageUp] = ACTIONS(58),
    [anon_sym_kVK_PageDown] = ACTIONS(58),
    [anon_sym_kVK_Help] = ACTIONS(58),
    [anon_sym_kVK_LeftArrow] = ACTIONS(58),
    [anon_sym_kVK_RightArrow] = ACTIONS(58),
    [anon_sym_kVK_UpArrow] = ACTIONS(58),
    [anon_sym_kVK_DownArrow] = ACTIONS(58),
    [anon_sym_kVK_F1] = ACTIONS(60),
    [anon_sym_kVK_F2] = ACTIONS(60),
    [anon_sym_kVK_F3] = ACTIONS(58),
    [anon_sym_kVK_F4] = ACTIONS(58),
    [anon_sym_kVK_F5] = ACTIONS(58),
    [anon_sym_kVK_F6] = ACTIONS(58),
    [anon_sym_kVK_F7] = ACTIONS(58),
    [anon_sym_kVK_F8] = ACTIONS(58),
    [anon_sym_kVK_F9] = ACTIONS(58),
    [anon_sym_kVK_F10] = ACTIONS(58),
    [anon_sym_kVK_F11] = ACTIONS(58),
    [anon_sym_kVK_F12] = ACTIONS(58),
    [anon_sym_kVK_F13] = ACTIONS(58),
    [anon_sym_kVK_F14] = ACTIONS(58),
    [anon_sym_kVK_F15] = ACTIONS(58),
    [anon_sym_kVK_F16] = ACTIONS(58),
    [anon_sym_kVK_F17] = ACTIONS(58),
    [anon_sym_kVK_F18] = ACTIONS(58),
    [anon_sym_kVK_F19] = ACTIONS(58),
    [anon_sym_kVK_F20] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(58),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(62),
    [anon_sym_DOTload] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(62),
    [anon_sym_return] = ACTIONS(62),
    [anon_sym_tab] = ACTIONS(62),
    [anon_sym_space] = ACTIONS(62),
    [anon_sym_backspace] = ACTIONS(62),
    [anon_sym_escape] = ACTIONS(62),
    [anon_sym_delete] = ACTIONS(62),
    [anon_sym_home] = ACTIONS(62),
    [anon_sym_end] = ACTIONS(62),
    [anon_sym_pageup] = ACTIONS(62),
    [anon_sym_pagedown] = ACTIONS(62),
    [anon_sym_insert] = ACTIONS(62),
    [anon_sym_left] = ACTIONS(62),
    [anon_sym_right] = ACTIONS(62),
    [anon_sym_up] = ACTIONS(62),
    [anon_sym_down] = ACTIONS(62),
    [anon_sym_f1] = ACTIONS(64),
    [anon_sym_f2] = ACTIONS(64),
    [anon_sym_f3] = ACTIONS(62),
    [anon_sym_f4] = ACTIONS(62),
    [anon_sym_f5] = ACTIONS(62),
    [anon_sym_f6] = ACTIONS(62),
    [anon_sym_f7] = ACTIONS(62),
    [anon_sym_f8] = ACTIONS(62),
    [anon_sym_f9] = ACTIONS(62),
    [anon_sym_f10] = ACTIONS(62),
    [anon_sym_f11] = ACTIONS(62),
    [anon_sym_f12] = ACTIONS(62),
    [anon_sym_f13] = ACTIONS(62),
    [anon_sym_f14] = ACTIONS(62),
    [anon_sym_f15] = ACTIONS(62),
    [anon_sym_f16] = ACTIONS(62),
    [anon_sym_f17] = ACTIONS(62),
    [anon_sym_f18] = ACTIONS(62),
    [anon_sym_f19] = ACTIONS(62),
    [anon_sym_f20] = ACTIONS(62),
    [anon_sym_sound_up] = ACTIONS(62),
    [anon_sym_sound_down] = ACTIONS(62),
    [anon_sym_mute] = ACTIONS(62),
    [anon_sym_play] = ACTIONS(62),
    [anon_sym_previous] = ACTIONS(62),
    [anon_sym_next] = ACTIONS(62),
    [anon_sym_rewind] = ACTIONS(62),
    [anon_sym_fast] = ACTIONS(62),
    [anon_sym_brightness_up] = ACTIONS(62),
    [anon_sym_brightness_down] = ACTIONS(62),
    [anon_sym_illumination_up] = ACTIONS(62),
    [anon_sym_illumination_down] = ACTIONS(62),
    [anon_sym_kVK_Return] = ACTIONS(62),
    [anon_sym_kVK_Tab] = ACTIONS(62),
    [anon_sym_kVK_Space] = ACTIONS(62),
    [anon_sym_kVK_Delete] = ACTIONS(62),
    [anon_sym_kVK_Escape] = ACTIONS(62),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(62),
    [anon_sym_kVK_Home] = ACTIONS(62),
    [anon_sym_kVK_End] = ACTIONS(62),
    [anon_sym_kVK_PageUp] = ACTIONS(62),
    [anon_sym_kVK_PageDown] = ACTIONS(62),
    [anon_sym_kVK_Help] = ACTIONS(62),
    [anon_sym_kVK_LeftArrow] = ACTIONS(62),
    [anon_sym_kVK_RightArrow] = ACTIONS(62),
    [anon_sym_kVK_UpArrow] = ACTIONS(62),
    [anon_sym_kVK_DownArrow] = ACTIONS(62),
    [anon_sym_kVK_F1] = ACTIONS(64),
    [anon_sym_kVK_F2] = ACTIONS(64),
    [anon_sym_kVK_F3] = ACTIONS(62),
    [anon_sym_kVK_F4] = ACTIONS(62),
    [anon_sym_kVK_F5] = ACTIONS(62),
    [anon_sym_kVK_F6] = ACTIONS(62),
    [anon_sym_kVK_F7] = ACTIONS(62),
    [anon_sym_kVK_F8] = ACTIONS(62),
    [anon_sym_kVK_F9] = ACTIONS(62),
    [anon_sym_kVK_F10] = ACTIONS(62),
    [anon_sym_kVK_F11] = ACTIONS(62),
    [anon_sym_kVK_F12] = ACTIONS(62),
    [anon_sym_kVK_F13] = ACTIONS(62),
    [anon_sym_kVK_F14] = ACTIONS(62),
    [anon_sym_kVK_F15] = ACTIONS(62),
    [anon_sym_kVK_F16] = ACTIONS(62),
    [anon_sym_kVK_F17] = ACTIONS(62),
    [anon_sym_kVK_F18] = ACTIONS(62),
    [anon_sym_kVK_F19] = ACTIONS(62),
    [anon_sym_kVK_F20] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(62),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(62),
    [sym_string] = ACTIONS(62),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(66),
    [anon_sym_DOTload] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(66),
    [anon_sym_return] = ACTIONS(66),
    [anon_sym_tab] = ACTIONS(66),
    [anon_sym_space] = ACTIONS(66),
    [anon_sym_backspace] = ACTIONS(66),
    [anon_sym_escape] = ACTIONS(66),
    [anon_sym_delete] = ACTIONS(66),
    [anon_sym_home] = ACTIONS(66),
    [anon_sym_end] = ACTIONS(66),
    [anon_sym_pageup] = ACTIONS(66),
    [anon_sym_pagedown] = ACTIONS(66),
    [anon_sym_insert] = ACTIONS(66),
    [anon_sym_left] = ACTIONS(66),
    [anon_sym_right] = ACTIONS(66),
    [anon_sym_up] = ACTIONS(66),
    [anon_sym_down] = ACTIONS(66),
    [anon_sym_f1] = ACTIONS(68),
    [anon_sym_f2] = ACTIONS(68),
    [anon_sym_f3] = ACTIONS(66),
    [anon_sym_f4] = ACTIONS(66),
    [anon_sym_f5] = ACTIONS(66),
    [anon_sym_f6] = ACTIONS(66),
    [anon_sym_f7] = ACTIONS(66),
    [anon_sym_f8] = ACTIONS(66),
    [anon_sym_f9] = ACTIONS(66),
    [anon_sym_f10] = ACTIONS(66),
    [anon_sym_f11] = ACTIONS(66),
    [anon_sym_f12] = ACTIONS(66),
    [anon_sym_f13] = ACTIONS(66),
    [anon_sym_f14] = ACTIONS(66),
    [anon_sym_f15] = ACTIONS(66),
    [anon_sym_f16] = ACTIONS(66),
    [anon_sym_f17] = ACTIONS(66),
    [anon_sym_f18] = ACTIONS(66),
    [anon_sym_f19] = ACTIONS(66),
    [anon_sym_f20] = ACTIONS(66),
    [anon_sym_sound_up] = ACTIONS(66),
    [anon_sym_sound_down] = ACTIONS(66),
    [anon_sym_mute] = ACTIONS(66),
    [anon_sym_play] = ACTIONS(66),
    [anon_sym_previous] = ACTIONS(66),
    [anon_sym_next] = ACTIONS(66),
    [anon_sym_rewind] = ACTIONS(66),
    [anon_sym_fast] = ACTIONS(66),
    [anon_sym_brightness_up] = ACTIONS(66),
    [anon_sym_brightness_down] = ACTIONS(66),
    [anon_sym_illumination_up] = ACTIONS(66),
    [anon_sym_illumination_down] = ACTIONS(66),
    [anon_sym_kVK_Return] = ACTIONS(66),
    [anon_sym_kVK_Tab] = ACTIONS(66),
    [anon_sym_kVK_Space] = ACTIONS(66),
    [anon_sym_kVK_Delete] = ACTIONS(66),
    [anon_sym_kVK_Escape] = ACTIONS(66),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(66),
    [anon_sym_kVK_Home] = ACTIONS(66),
    [anon_sym_kVK_End] = ACTIONS(66),
    [anon_sym_kVK_PageUp] = ACTIONS(66),
    [anon_sym_kVK_PageDown] = ACTIONS(66),
    [anon_sym_kVK_Help] = ACTIONS(66),
    [anon_sym_kVK_LeftArrow] = ACTIONS(66),
    [anon_sym_kVK_RightArrow] = ACTIONS(66),
    [anon_sym_kVK_UpArrow] = ACTIONS(66),
    [anon_sym_kVK_DownArrow] = ACTIONS(66),
    [anon_sym_kVK_F1] = ACTIONS(68),
    [anon_sym_kVK_F2] = ACTIONS(68),
    [anon_sym_kVK_F3] = ACTIONS(66),
    [anon_sym_kVK_F4] = ACTIONS(66),
    [anon_sym_kVK_F5] = ACTIONS(66),
    [anon_sym_kVK_F6] = ACTIONS(66),
    [anon_sym_kVK_F7] = ACTIONS(66),
    [anon_sym_kVK_F8] = ACTIONS(66),
    [anon_sym_kVK_F9] = ACTIONS(66),
    [anon_sym_kVK_F10] = ACTIONS(66),
    [anon_sym_kVK_F11] = ACTIONS(66),
    [anon_sym_kVK_F12] = ACTIONS(66),
    [anon_sym_kVK_F13] = ACTIONS(66),
    [anon_sym_kVK_F14] = ACTIONS(66),
    [anon_sym_kVK_F15] = ACTIONS(66),
    [anon_sym_kVK_F16] = ACTIONS(66),
    [anon_sym_kVK_F17] = ACTIONS(66),
    [anon_sym_kVK_F18] = ACTIONS(66),
    [anon_sym_kVK_F19] = ACTIONS(66),
    [anon_sym_kVK_F20] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(66),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(66),
    [sym_string] = ACTIONS(66),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(70),
    [anon_sym_DOTload] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_tab] = ACTIONS(70),
    [anon_sym_space] = ACTIONS(70),
    [anon_sym_backspace] = ACTIONS(70),
    [anon_sym_escape] = ACTIONS(70),
    [anon_sym_delete] = ACTIONS(70),
    [anon_sym_home] = ACTIONS(70),
    [anon_sym_end] = ACTIONS(70),
    [anon_sym_pageup] = ACTIONS(70),
    [anon_sym_pagedown] = ACTIONS(70),
    [anon_sym_insert] = ACTIONS(70),
    [anon_sym_left] = ACTIONS(70),
    [anon_sym_right] = ACTIONS(70),
    [anon_sym_up] = ACTIONS(70),
    [anon_sym_down] = ACTIONS(70),
    [anon_sym_f1] = ACTIONS(72),
    [anon_sym_f2] = ACTIONS(72),
    [anon_sym_f3] = ACTIONS(70),
    [anon_sym_f4] = ACTIONS(70),
    [anon_sym_f5] = ACTIONS(70),
    [anon_sym_f6] = ACTIONS(70),
    [anon_sym_f7] = ACTIONS(70),
    [anon_sym_f8] = ACTIONS(70),
    [anon_sym_f9] = ACTIONS(70),
    [anon_sym_f10] = ACTIONS(70),
    [anon_sym_f11] = ACTIONS(70),
    [anon_sym_f12] = ACTIONS(70),
    [anon_sym_f13] = ACTIONS(70),
    [anon_sym_f14] = ACTIONS(70),
    [anon_sym_f15] = ACTIONS(70),
    [anon_sym_f16] = ACTIONS(70),
    [anon_sym_f17] = ACTIONS(70),
    [anon_sym_f18] = ACTIONS(70),
    [anon_sym_f19] = ACTIONS(70),
    [anon_sym_f20] = ACTIONS(70),
    [anon_sym_sound_up] = ACTIONS(70),
    [anon_sym_sound_down] = ACTIONS(70),
    [anon_sym_mute] = ACTIONS(70),
    [anon_sym_play] = ACTIONS(70),
    [anon_sym_previous] = ACTIONS(70),
    [anon_sym_next] = ACTIONS(70),
    [anon_sym_rewind] = ACTIONS(70),
    [anon_sym_fast] = ACTIONS(70),
    [anon_sym_brightness_up] = ACTIONS(70),
    [anon_sym_brightness_down] = ACTIONS(70),
    [anon_sym_illumination_up] = ACTIONS(70),
    [anon_sym_illumination_down] = ACTIONS(70),
    [anon_sym_kVK_Return] = ACTIONS(70),
    [anon_sym_kVK_Tab] = ACTIONS(70),
    [anon_sym_kVK_Space] = ACTIONS(70),
    [anon_sym_kVK_Delete] = ACTIONS(70),
    [anon_sym_kVK_Escape] = ACTIONS(70),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(70),
    [anon_sym_kVK_Home] = ACTIONS(70),
    [anon_sym_kVK_End] = ACTIONS(70),
    [anon_sym_kVK_PageUp] = ACTIONS(70),
    [anon_sym_kVK_PageDown] = ACTIONS(70),
    [anon_sym_kVK_Help] = ACTIONS(70),
    [anon_sym_kVK_LeftArrow] = ACTIONS(70),
    [anon_sym_kVK_RightArrow] = ACTIONS(70),
    [anon_sym_kVK_UpArrow] = ACTIONS(70),
    [anon_sym_kVK_DownArrow] = ACTIONS(70),
    [anon_sym_kVK_F1] = ACTIONS(72),
    [anon_sym_kVK_F2] = ACTIONS(72),
    [anon_sym_kVK_F3] = ACTIONS(70),
    [anon_sym_kVK_F4] = ACTIONS(70),
    [anon_sym_kVK_F5] = ACTIONS(70),
    [anon_sym_kVK_F6] = ACTIONS(70),
    [anon_sym_kVK_F7] = ACTIONS(70),
    [anon_sym_kVK_F8] = ACTIONS(70),
    [anon_sym_kVK_F9] = ACTIONS(70),
    [anon_sym_kVK_F10] = ACTIONS(70),
    [anon_sym_kVK_F11] = ACTIONS(70),
    [anon_sym_kVK_F12] = ACTIONS(70),
    [anon_sym_kVK_F13] = ACTIONS(70),
    [anon_sym_kVK_F14] = ACTIONS(70),
    [anon_sym_kVK_F15] = ACTIONS(70),
    [anon_sym_kVK_F16] = ACTIONS(70),
    [anon_sym_kVK_F17] = ACTIONS(70),
    [anon_sym_kVK_F18] = ACTIONS(70),
    [anon_sym_kVK_F19] = ACTIONS(70),
    [anon_sym_kVK_F20] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(70),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_DOTblacklist_LBRACK] = ACTIONS(74),
    [anon_sym_DOTload] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [aux_sym__key_literal_token1] = ACTIONS(74),
    [anon_sym_return] = ACTIONS(74),
    [anon_sym_tab] = ACTIONS(74),
    [anon_sym_space] = ACTIONS(74),
    [anon_sym_backspace] = ACTIONS(74),
    [anon_sym_escape] = ACTIONS(74),
    [anon_sym_delete] = ACTIONS(74),
    [anon_sym_home] = ACTIONS(74),
    [anon_sym_end] = ACTIONS(74),
    [anon_sym_pageup] = ACTIONS(74),
    [anon_sym_pagedown] = ACTIONS(74),
    [anon_sym_insert] = ACTIONS(74),
    [anon_sym_left] = ACTIONS(74),
    [anon_sym_right] = ACTIONS(74),
    [anon_sym_up] = ACTIONS(74),
    [anon_sym_down] = ACTIONS(74),
    [anon_sym_f1] = ACTIONS(76),
    [anon_sym_f2] = ACTIONS(76),
    [anon_sym_f3] = ACTIONS(74),
    [anon_sym_f4] = ACTIONS(74),
    [anon_sym_f5] = ACTIONS(74),
    [anon_sym_f6] = ACTIONS(74),
    [anon_sym_f7] = ACTIONS(74),
    [anon_sym_f8] = ACTIONS(74),
    [anon_sym_f9] = ACTIONS(74),
    [anon_sym_f10] = ACTIONS(74),
    [anon_sym_f11] = ACTIONS(74),
    [anon_sym_f12] = ACTIONS(74),
    [anon_sym_f13] = ACTIONS(74),
    [anon_sym_f14] = ACTIONS(74),
    [anon_sym_f15] = ACTIONS(74),
    [anon_sym_f16] = ACTIONS(74),
    [anon_sym_f17] = ACTIONS(74),
    [anon_sym_f18] = ACTIONS(74),
    [anon_sym_f19] = ACTIONS(74),
    [anon_sym_f20] = ACTIONS(74),
    [anon_sym_sound_up] = ACTIONS(74),
    [anon_sym_sound_down] = ACTIONS(74),
    [anon_sym_mute] = ACTIONS(74),
    [anon_sym_play] = ACTIONS(74),
    [anon_sym_previous] = ACTIONS(74),
    [anon_sym_next] = ACTIONS(74),
    [anon_sym_rewind] = ACTIONS(74),
    [anon_sym_fast] = ACTIONS(74),
    [anon_sym_brightness_up] = ACTIONS(74),
    [anon_sym_brightness_down] = ACTIONS(74),
    [anon_sym_illumination_up] = ACTIONS(74),
    [anon_sym_illumination_down] = ACTIONS(74),
    [anon_sym_kVK_Return] = ACTIONS(74),
    [anon_sym_kVK_Tab] = ACTIONS(74),
    [anon_sym_kVK_Space] = ACTIONS(74),
    [anon_sym_kVK_Delete] = ACTIONS(74),
    [anon_sym_kVK_Escape] = ACTIONS(74),
    [anon_sym_kVK_ForwardDelete] = ACTIONS(74),
    [anon_sym_kVK_Home] = ACTIONS(74),
    [anon_sym_kVK_End] = ACTIONS(74),
    [anon_sym_kVK_PageUp] = ACTIONS(74),
    [anon_sym_kVK_PageDown] = ACTIONS(74),
    [anon_sym_kVK_Help] = ACTIONS(74),
    [anon_sym_kVK_LeftArrow] = ACTIONS(74),
    [anon_sym_kVK_RightArrow] = ACTIONS(74),
    [anon_sym_kVK_UpArrow] = ACTIONS(74),
    [anon_sym_kVK_DownArrow] = ACTIONS(74),
    [anon_sym_kVK_F1] = ACTIONS(76),
    [anon_sym_kVK_F2] = ACTIONS(76),
    [anon_sym_kVK_F3] = ACTIONS(74),
    [anon_sym_kVK_F4] = ACTIONS(74),
    [anon_sym_kVK_F5] = ACTIONS(74),
    [anon_sym_kVK_F6] = ACTIONS(74),
    [anon_sym_kVK_F7] = ACTIONS(74),
    [anon_sym_kVK_F8] = ACTIONS(74),
    [anon_sym_kVK_F9] = ACTIONS(74),
    [anon_sym_kVK_F10] = ACTIONS(74),
    [anon_sym_kVK_F11] = ACTIONS(74),
    [anon_sym_kVK_F12] = ACTIONS(74),
    [anon_sym_kVK_F13] = ACTIONS(74),
    [anon_sym_kVK_F14] = ACTIONS(74),
    [anon_sym_kVK_F15] = ACTIONS(74),
    [anon_sym_kVK_F16] = ACTIONS(74),
    [anon_sym_kVK_F17] = ACTIONS(74),
    [anon_sym_kVK_F18] = ACTIONS(74),
    [anon_sym_kVK_F19] = ACTIONS(74),
    [anon_sym_kVK_F20] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_SOUND_UP] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_SOUND_DOWN] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_MUTE] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_PLAY] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_PREVIOUS] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_NEXT] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_REWIND] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_FAST] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_UP] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_BRIGHTNESS_DOWN] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_UP] = ACTIONS(74),
    [anon_sym_NX_KEYTYPE_ILLUMINATION_DOWN] = ACTIONS(74),
    [sym_string] = ACTIONS(74),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    ACTIONS(80), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_blacklist_statement_repeat1,
  [13] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_blacklist_statement_repeat1,
  [26] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_blacklist_statement_repeat1,
  [39] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_string,
  [46] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym__key_literal_token2,
  [53] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 13,
  [SMALL_STATE(14)] = 26,
  [SMALL_STATE(15)] = 39,
  [SMALL_STATE(16)] = 46,
  [SMALL_STATE(17)] = 53,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_statement, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration_statement, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist_statement, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blacklist_statement, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_literal, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_literal, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist_statement, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blacklist_statement, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blacklist_statement_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blacklist_statement_repeat1, 2), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
