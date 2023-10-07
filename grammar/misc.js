const {parens, sep1} = require('./util.js')

module.exports = {
  decl_default: $ => seq('default', parens(optional(sep1($.comma, $._type_infix)))),

}
