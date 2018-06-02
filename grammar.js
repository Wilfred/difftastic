module.exports = grammar({
  name: 'lua',

  extras: $ => [
    $.single_comment,
    $.multiline_comment,
    /[\s\n]/
  ],

  externals: $ => [
    $.single_comment,
    $.multiline_comment,
  ],

  rules: {
    lua: $ => repeat('lua')
  }
});
