module.exports = grammar(require('../ocaml/grammar'), {
  name: 'ocaml_interface',

  rules: {
    compilation_unit: $ => optional($._signature)
  }
})
