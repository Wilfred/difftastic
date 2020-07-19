# tree-sitter-hack

[Hack](https://hacklang.org/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Note

- `<?hh` is optional in this grammar unlike standard Hack. The Hack parser requires an `<?hh` tag at the top of `.php` files. Does it really matter?

- `src/` is not commited to the repository. Do we need to? Can't Tree-sitter generate the parser from `grammar.js`?

## Questions

### Inline vs hidden

`$._rule` vs `inline: [$._rule]` vs `inline: [$.rule]`

- What's the difference between hidden rules and inline rules?
- If a rule is inline, does it really have to be hidden?

### Inline vs helper function

- What's the difference between an inline rule and using a helper function?
- Is there performance benefits from naming rules even though they're removed from the grammar?
- What does it mean for the rule to be removed from the grammar?

For example, I see `$._variablish` is present in `src/grammar.json`. What does this mean?

### Alias vs inline vs hidden

- `alias($._rule, $.alias)` - Is `$.alias` hidden?
- `alias($.rule, $._alias)` - I'm assuming `$._alias` is hidden?
- `inline: [$._rule]` - Is alias inline?

## Scripts

**`bin/generate-parser`**

Wrapper around `tree-sitter generate` that skips parser generation if `grammar.js` hasn't changed since last run.

**`bin/generate-corpus`**

Unlike most other Tree-sitter projects, we breakout test cases into separate files (see [`test/cases`](https://github.com/antoniodejesusochoasolano/tree-sitter-hack/tree/main/test/cases)). This is done so editors have an easier time syntax highlighting test cases. But also I find individual files easier to navigate than the `corpus.txt` files used by Tree-sitter.

We use `bin/generate-corpus` to generate the `test/corpus/case1.txt` from individual `test/cases` files so we can still use `tree-sitter test`.

**`bin/test-corpus`**

Run `bin/generate-corpus` and `bin/generate-parser` before running `tree-sitter test`.

## References

There's no published official Hacklang language spec so we have to make do.

- [HHVM Blog](https://hhvm.com/blog/) - Good source of PHP language deprecations and language changes. For example, [goodbye `array()`](<https://hhvm.com/blog/2020/07/06/hhvm-4.65.html#breaking-changes:~:text=array()%20literals%20are%20no%20longer%20supported%20by%20the%20parser>).
- [Hack Documentation](https://docs.hhvm.com/hack/) - Source at [hhvm/user-documentation](https://github.com/hhvm/user-documentation).
- [Hack Parser Source](https://github.com/facebook/hhvm/tree/4da98da2f5ddc0989d3d150dddc1b06ee4087440/hphp/hack/src/parser)
- [Hack Language Specification](https://github.com/facebookarchive/hack-langspec) - Deprecated :(
