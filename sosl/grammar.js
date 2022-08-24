const soslGrammar = require("../common/sosl-grammar.js")("sosl");
module.exports = grammar({
  name: "sosl",

  /*
      RESOURCES
      https://blog.jeffdouglas.com/2009/09/23/syntax-rules-for-soql/
      https://github.com/forcedotcom/apex-tmLanguage
      https://developer.salesforce.com/docs/atlas.en-us.238.0.soql_sosl.meta/soql_sosl/sforce_api_calls_soql_sosl_intro.htm
    */

  conflicts: soslGrammar.conflicts,

  // necessary to enable testing comments
  extras: ($) => [$.formatting_comment, /\s/],

  rules: {
    source_file: ($) => seq(optional($.header_comment), $._query_expression),

    header_comment: ($) => seq("//", /.*/),
    formatting_comment: ($) => seq("///", /.*/),
    ...soslGrammar.rules,
  },
});
