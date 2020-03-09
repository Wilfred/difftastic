module.exports = grammar(require('./base'), {
  name: "clojure",

  // XXX: for convenience when tweaking
  // conflicts: ($, base) => base.concat([
  // ]),

  rules: {
    _non_discard: ($, base) =>
      choice(base,
             $.var_definition,
             $.function_definition),

    var_definition: $ =>
      seq('(',
          'def',
          field('name', $._form),
          repeat(field('rest', $._form)),
          ')'),

    // two types from clojure.core:
    //
    //   [name doc-string? attr-map? [params*] prepost-map? body]
    //   [name doc-string? attr-map? ([params*] prepost-map? body)+ attr-map?]
    //
    // also see clojure.core.specs.alpha
    function_definition: $ =>
      //prec(2,
           // seq('(',
           //     choice('defn', 'defn-'), // /(defn|defn-)/, XXX: doesn't work :(
           //     field('name', $.symbol),
           //     optional(field('doc_string', $.string)),
           //     optional(field('meta', $.map)), // XXX: specs calls this meta
           //     choice(seq(field('params', $.vector),
           //                optional(field('prepost_map', $.map)),
           //                repeat(field('body', $._form))),
           //            repeat1(seq('(',
           //                        field('params', $.vector),
           //                        optional(field('prepost_map', $.map)),
           //                        repeat(field('body', $._form)),
           //                        ')'))),
           //     ')')
    //),
           seq('(',
               choice('defn', 'defn-'), // /(defn|defn-)/, XXX: doesn't work :(
               field('name', $._form),
               repeat($._form),
               ')')

  }
});
