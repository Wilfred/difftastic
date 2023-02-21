module.exports = grammar({
    name: "newick",

    rules: {
        source_file: $ => repeat($.tree),
        tree: $ => seq($._node, ";"),
        _node: $ => choice(field("leaf", $.leaf), field("clade", $.clade)),
        leaf: $ => choice(
            field("attributes", $.attributes),
            seq(field("name", $.name), optional(field("attributes", $.attributes))),
        ),
        clade: $ => seq(
            "(",
            optional($._node),
            repeat(seq(",", optional($._node))),
            ")", optional($.name), optional($.attributes)
        ),
        attributes: $ => choice(
            seq(":", field("length", $.length)),
            seq(optional(seq(":", field("length", $.length))), field("data", $.data))
        ),
        data: $ => seq("[&&NHX", repeat1(field("entry", $.nhx_entry)), "]"),
        nhx_entry: $ => seq(":", field("key", $.nhx_val), "=", optional(field("value", $.nhx_val))),
        length: $ => $.float,

        _data_safe: $ => /[^:,;()\[\]=\s]+/,
        nhx_val: $ => repeat1($._data_safe),
        float: $ => /\d(_?\d)*(\.\d)?(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
        name: $ => /[^:,;()\[\]\s]+/,
    }
});
