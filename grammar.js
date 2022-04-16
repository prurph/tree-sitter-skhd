const keyLiterals = {
  return: 'kVK_Return',
  tab: 'kVK_Tab',
  space: 'kVK_Space',
  backspace: 'kVK_Delete',
  escape: 'kVK_Escape',
  delete: 'kVK_ForwardDelete',
  home: 'kVK_Home',
  end: 'kVK_End',
  pageup: 'kVK_PageUp',
  pagedown: 'kVK_PageDown',
  insert: 'kVK_Help',
  left: 'kVK_LeftArrow',
  right: 'kVK_RightArrow',
  up: 'kVK_UpArrow',
  down: 'kVK_DownArrow',
  f1: 'kVK_F1',
  f2: 'kVK_F2',
  f3: 'kVK_F3',
  f4: 'kVK_F4',
  f5: 'kVK_F5',
  f6: 'kVK_F6',
  f7: 'kVK_F7',
  f8: 'kVK_F8',
  f9: 'kVK_F9',
  f10: 'kVK_F10',
  f11: 'kVK_F11',
  f12: 'kVK_F12',
  f13: 'kVK_F13',
  f14: 'kVK_F14',
  f15: 'kVK_F15',
  f16: 'kVK_F16',
  f17: 'kVK_F17',
  f18: 'kVK_F18',
  f19: 'kVK_F19',
  f20: 'kVK_F20',
  sound_up: 'NX_KEYTYPE_SOUND_UP',
  sound_down: 'NX_KEYTYPE_SOUND_DOWN',
  mute: 'NX_KEYTYPE_MUTE',
  play: 'NX_KEYTYPE_PLAY',
  previous: 'NX_KEYTYPE_PREVIOUS',
  next: 'NX_KEYTYPE_NEXT',
  rewind: 'NX_KEYTYPE_REWIND',
  fast: 'NX_KEYTYPE_FAST',
  brightness_up: 'NX_KEYTYPE_BRIGHTNESS_UP',
  brightness_down: 'NX_KEYTYPE_BRIGHTNESS_DOWN',
  illumination_up: 'NX_KEYTYPE_ILLUMINATION_UP',
  illumination_down: 'NX_KEYTYPE_ILLUMINATION_DOWN',
};

module.exports = grammar({
  name: 'skhd',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat(
      $.statement
    ),

    statement: $ => choice(
      $.configuration_statement,
      $.expression,
    ),

    configuration_statement: $ => choice(
      $.blacklist_statement,
      $.load_statement
    ),


    blacklist_statement: $ => seq('.blacklist [', repeat($.string), ']'),
    load_statement: $ => seq('.load', $.string),

    expression: $ => choice(
      $.string,
      // TODO: keys alone are not valid expressions
      $.key
    ),

    comment: $ => token(seq('#', /.*/)),
    key: $ => choice($._key_literal, $._keycode),
    _key_literal: $ => seq(
      choice(/[a-z0-9]\s/, ...(Object.keys(keyLiterals))),
      /\s+/
    ),
    _keycode: $ => choice(...Object.values(keyLiterals)),
    string: $ => /".+/,
  }
})
