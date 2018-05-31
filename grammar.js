module.exports = grammar({
  name: 'lua',

  extras: $ => [
    /[\s]/
  ],

  rules: {
    lua: $ => 'lua'
  }
});
