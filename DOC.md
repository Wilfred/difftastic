# Implementation documentation

## Tricky Typst

List of tests exposing particular behaviors from Typst

- Test `positive/320`: indent takes in account comments, but redent is done at item, term or heading token.
- Tests `positive/328` and `positive/329`: math function don't work with symbol.
- Test `positive/330`: Comment block don't need closing end.

## FIXME

- [ ] Test `fixme/011`: Embedded code causes a segfault
- [X] ~Test `fixme/014`: Right square bracket exits from all containers~
- [X] ~Test `fixme/012`: Matching square brackets in text are paired~
- [X] ~Test `fixme/013`: Point ending a ref is not part of the ref~
- [X] ~Test `fixme/010`: Math shorthand and letter can applied~
- [X] ~Test `fixme/009`: Indentation and comments~
- [X] ~Test `fixme/001`: Group termination in math~
- [X] ~Test `fixme/002`: Import precedence over list~
- [X] ~Test `fixme/008`: Condition if set statement~
- [X] ~Test `fixme/007`: Trailing comments before `else`~
- [X] ~Test `fixme/003`: Spaces in method notation~
- [X] ~Test `fixme/004`: Leading space not recognized~
- [X] ~Test `fixme/005`: Inlined code absorbs new line~

Failing tests are found in [`corpus/fixme.scm`](https://github.com/uben0/tree-sitter-typst/blob/master/corpus/fixme.scm).

## Optimization with extras

When searching ways to optimize the parser and simplify the grammar, I thought about using the *extras* feature for spaces and comments (and line breaks as well). At the end, it significantly reduced parser size. The only problem arises with function calls and, in inline code, field access. They must be directly joined (no space nor comment in between). The use of the *immediate* feature won't solve the problem as it only takes in acount inline regex (which would be ok with spaces but not comments, as they have to appear in output tree).

The solution is to rely on external scanner when parsing spaces or comments. Lets call a "pre-immediate" token, a token susceptible to be followed by immediate token. When a pre-immediate token is parsed, it sets a flag to `true`, and when a space or comment is parsed, it resets the flag to `false` (this flag is stored in scanner's state as a boolean).

This way when a token has to be immediate, an external token can be required and will only match if flag is `true`. It means, any pre-immediate token have to be preceded by a token that will set to `true` the flag.

# Scanner

## Containers

The scanner uses a stack of "containers" as internal states in order to simplify the parsing of some nodes like `emph`, `strong` and `content`. At any moment, the scanner knows what are the containing nodes. For instance:

```typst
* _ #[Hello *World*] _ *
```

Here, when the scanner will be called at the beginning of "World", the container stack will be `stron/emph/content/strong`. When a '*' is encountered while the top of the stack is `strong`, it will be interpreted as the end of this container. If the top of the stack was `emph`, it would be the start of a `strong` container, and it would be pushed on the stack.

It is mandatory to use the external scanner for the containers because of indentation.

## Indentation

Three distinct token are dedicated to indentation:

- `indent`: When the following line start further than the current one
- `dedent`: When the following line start at a column previously set as indentation column
- `redent`: When the following line start at the same column as current one, or before, but further than the previous indentation.

The concept of redent can be seen here:
```typst
- 1
  - 2
 - 3
  - 4
```
Which have the same hierarchy as:
```typst
- 1
  - 2
  - 3
    - 4
```

## Character class

Five character classes are defined in the external scanner:

- space (`is_sp`)
- line break (`is_lb`)
- xid start (`is_id_start`)
- xid continue (`is_id_continue`)
- word part (`is_word_part`)

The three functions `is_id_start`, `is_id_continue` and `is_word_part` are implemented as binary search.

The character list is based on the Unicode database which can be found here: https://www.unicode.org/Public/UCD/latest/ucd/

A utility is used to produce those tables: https://github.com/uben0/unicode-table

## Barrier

The `heading`, `item` and `term` nodes are technically delimited contexts, but because thay behave similarly, they have the same external token as container, which is `barrier`.
