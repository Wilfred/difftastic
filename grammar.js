/*
 * grammar.js
 * Copyright (C) 2021 Stephan Seitz <stephan.seitz@fau.de>
 *
 * Distributed under terms of the GPLv3 license.
 */

const clojure = require("tree-sitter-clojure/grammar");

module.exports = grammar (clojure, {
  name: 'common-lisp',

  extras: ($, original) => [...original],
  conflicts: ($, original) => [...original],

  rules: {
    source: $ =>
      repeat(choice(clojure._form,
                    clojure._gap)),
  }
});
