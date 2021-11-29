// See: https://github.com/tree-sitter/tree-sitter/blob/master/cli/src/generate/dsl.js
declare module "tree-sitter-dsl" {
  // Most of this documentation is copied from https://tree-sitter.github.io/tree-sitter/creating-parsers
  global {
    /**
     * The collection of named grammar rules that together produce the language grammar.
     *
     * Every grammar rule is written as a JavaScript function that takes one of these Symbols parameters, which are
     * conventionally given the parameter name {@code $}. For instance, a rule may define itself in terms of a selection
     * of another rule named `identifier` by referring to {@code $.identifier}.
     */
    type Symbols = { [keys: string]: ($: Symbols) => Rule };

    /**
     * Possible types of rule functions that can be passed to the grammar DSL.
     *
     * This may be a terminal symbol, such as a string or a regular expression. It may also be a function that, given
     * other symbols, produces some nested rule definition.
     */
    type Rule = string | RegExp | (($: Symbols) => Rule);

    /**
     * Public fields that influence the behavior of the parser. These are passed to the {@link grammar} function to
     * produce the module's exports.
     */
    type Grammar = {
      // NOTE: `Symbols` could probably be defined more precisely here by giving `Grammar` a generic type argument. This
      // would allow the typescript compiler to prove that only the symbols declared in this grammar are being used from
      // other rules. However, this requires fancy union types and a lot of inference in order to include `externals` in
      // the appropriate `Symbols` subtype. Since the `tree-sitter` compiler will already definitely throw an error on
      // encountering unexpected symbols, that type inference would be of little use.

      /**
       * The name of the language that this grammar is responsible for parsing.
       */
      name: string;
      /**
       * An array of tokens that may appear anywhere in the language.
       *
       * This is often used for whitespace and comments. The default value of {@code extras} is to accept whitespace. To
       * control whitespace explicitly, specify {@code extras: ($) => []} in your grammar.
       */
      extras?: ($: Symbols) => Rule[];
      /**
       * An array of rule names that should be automatically removed from the grammar by replacing all of their usages
       * with a copy of their definition.
       *
       * This is useful for rules that are used in multiple places but for which you don't want to create syntax tree
       * nodes at runtime.
       */
      inline?: ($: Symbols) => Rule[];
      /**
       * An array of arrays of rule names. Each inner array represents a set of rules that's involved in an LR(1)
       * conflict that is intended to exist in the grammar. When these conflicts occur at runtime, Tree-sitter will use
       * the GLR algorithm to explore all of the possible interpretations. If multiple parses end up succeeding,
       * Tree-sitter will pick the subtree whose corresponding rule has the highest dynamic precedence.
       */
      conflicts?: ($: Symbols) => Rule[][];
      /**
       * An array of token names which can be returned by an external scanner. External scanners allow you to write
       * custom C code which runs during the lexing process in order to handle lexical rules (e.g. Python's indentation
       * tokens) that cannot be described by regular expressions.
       */
      externals?: ($: Symbols) => Rule[];
      /**
       * The definition of all rules that will be used to parse symbols in this language, except any rules that are
       * defined in an external scanner.
       */
      rules: Symbols;
    };

    /**
     * Defines the language grammar based on the passed-in fields.
     */
    function grammar(grammar: Grammar, options?: Partial<Grammar>): any;

    /**
     * Causes the given rule to appear with an alternative name in the syntax tree.
     *
     * If {@code name} is a symbol itself, as in {@code alias($.foo, $.bar)}, then the aliased rule will appear as a
     * named node called {@code bar}. If {@code name} is a string literal, at in {@code alias($.foo, 'bar')}, then the
     * aliased rule will appear as an anonymous node, as if the rule had been written as the simple string.
     */
    function alias(rule: Rule, name: Exclude<Rule, RegExp>): Rule;
    /**
     * Assigns a field name to the child nodes matched by a given rule. In the resulting syntax tree, you can then use
     * that field name to access specific children.
     */
    function field(name: string, rule: Rule): Rule;
    /**
     * Creates a rule that matches one of a set of possible rules. The order of the arguments does not matter. This is
     * analogous to the | (pipe) operator in EBNF notation.
     */
    function choice(...rules: Rule[]): Rule;
    /**
     * Creates a rule that matches zero or one occurrence of a given rule. It is analogous to the [x] (square bracket)
     * syntax in EBNF notation.
     */
    function optional(rule: Rule): Rule;
    /**
     * This function marks the given rule with a numerical precedence which will be used to resolve LR(1) Conflicts at
     * parser-generation time. When two rules overlap in a way that represents either a true ambiguity or a local
     * ambiguity given one token of lookahead, Tree-sitter will try to resolve the conflict by matching the rule with
     * the higher precedence. The default precedence of all rules is zero.
     */
    function prec(precedence: number, rule: Rule): Rule;

    module prec {
      /**
       * Marks the given rule as left-associative. When an LR(1) conflict arises in which all of the rules have the same
       * numerical precedence, Tree-sitter will consult the rules’ associativity. If there is a left-associative rule,
       * Tree-sitter will prefer matching a rule that ends earlier.
       */
      function left(precedence: number, rule: Rule): Rule;
      /**
       * Marks the given rule as left-associative and applies a numerical precedence. When an LR(1) conflict arises in
       * which all of the rules have the same numerical precedence, Tree-sitter will consult the rules’ associativity.
       * If there is a left-associative rule, Tree-sitter will prefer matching a rule that ends earlier.
       */
      function left(rule: Rule): Rule;
      /**
       * This function is like prec.left, but it instructs Tree-sitter to prefer matching a rule that ends later.
       */
      function right(precedence: number, rule: Rule): Rule;
      /**
       * This function is like prec.left, but it instructs Tree-sitter to prefer matching a rule that ends later.
       */
      function right(rule: Rule): Rule;
      /**
       * This function is similar to prec, but the given numerical precedence is applied at runtime instead of at parser
       * generation time. This is only necessary when handling a conflict dynamically using the conflicts field in the
       * grammar, and when there is a genuine ambiguity: multiple rules correctly match a given piece of code. In that
       * event, Tree-sitter compares the total dynamic precedence associated with each rule, and selects the one with
       * the highest total.
       */
      function dynamic(precedence: number, rule: Rule): Rule;
    }
    /**
     * Creates a rule that matches zero-or-more occurrences of a given rule. It is analogous to the {x} (curly brace)
     * syntax in EBNF notation.
     */
    function repeat(rule: Rule): Rule;
    /**
     * Creates a rule that matches one-or-more occurrences of a given rule. The previous repeat rule is implemented in
     * terms of repeat1 but is included because it is very commonly used.
     */
    function repeat1(rule: Rule): Rule;
    /**
     * Creates a rule that matches any number of other rules, one after another. It is analogous to simply writing
     * multiple symbols next to each other in EBNF notation.
     */
    function seq(...rules: Rule[]): Rule;
    /**
     * Marks the given rule as producing only a single token. Tree-sitter’s default is to treat each String or RegExp
     * literal in the grammar as a separate token. Each token is matched separately by the lexer and returned as its own
     * leaf node in the tree. The token function allows you to express a complex rule using the functions described
     * above (rather than as a single regular expression) but still have Tree-sitter treat it as a single token.
     */
    function token(rule: Rule): Rule;

    module token {
      /**
       * Usually, whitespace (and any other extras, such as comments) is optional before each token. This function means
       * that the token will only match if there is no whitespace.
       */
      function immediate(rule: Rule): Rule;
    }
  }
}
