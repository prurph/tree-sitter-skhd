module.exports = grammar({
  name: 'skhd',
  extras: $ => [
    $.comment,
    /\s/,
  ],
  rules: {
    source_file: $ => repeat(
      $.statement,
    ),

    expression: $ => choice(
      $.string
    ),

    statement: $ => choice(
      $.configuration_statement,
      $.expression,
    ),

    configuration_statement: $ => choice(
      $.blacklist_statement,
      $.load_statement,
    ),


    blacklist_statement: $ => seq('.blacklist [', repeat($.string), ']'),
    load_statement: $ => seq('.load', $.string),

    comment: $ => token(seq('#', /.*/)),
    string: $ => /".+/,
  }
})
