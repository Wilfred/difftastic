// Ref: https://yaml.org/spec/1.2/spec.html#schema/core/

module.exports = grammar({
  name: "schema",
  extras: $ => [],
  rules: {
    pln: $ => choice($.nul, $.bol, $.int, $.flt),
    nul: $ => /~|null|Null|NULL/,
    bol: $ => /true|True|TRUE|false|False|FALSE/,
    int: $ => or([
      /[-+]?[0-9]+/, // base 10
      /0o[0-7]+/, // base 8
      /0x[0-9a-fA-F]+/, // base 16
    ]),
    flt: $ => or([
      /[-+]?(\.[0-9]+|[0-9]+(\.[0-9]*)?)([eE][-+]?[0-9]+)?/, // number
      /[-+]?(\.inf|\.Inf|\.INF)/, // infinity
      /(\.nan|\.NaN|\.NAN)/, // not a number
    ]),
  },
});

function or(regexList) {
  return new RegExp(regexList.map(regex => `(${regex.source})`).join('|'));
}
