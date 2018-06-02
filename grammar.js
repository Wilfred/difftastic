module.exports = grammar({
  name: 'lua',

  extras: $ => [
    /[\s\n]/
  ],

  rules: {
    lua: $ => 'lua'
  }
});
