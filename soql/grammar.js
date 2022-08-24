const soqlGrammar = require("../common/soql-grammar.js")("soql");
module.exports = grammar({
  name: "soql",

  conflicts: soqlGrammar.conflicts,

  // necessary to enable testing comments
  extras: ($) => [$.formatting_comment, /\s/],

  rules: {
    source_file: ($) => seq(repeat($.header_comment), $._soql_query_expression),

    header_comment: ($) => seq("//", /.*/),
    formatting_comment: ($) => seq("///", /.*/),
    ...soqlGrammar.rules,
  },
});
