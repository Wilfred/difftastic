# tree-sitter-d
D Grammar for Tree Sitter

[![Stand With Ukraine](https://raw.githubusercontent.com/vshymanskyy/StandWithUkraine/main/badges/StandWithUkraine.svg)](https://stand-with-ukraine.pp.ua)
[![Build/test](https://github.com/gdamore/tree-sitter-d/actions/workflows/ci.yml/badge.svg)](https://github.com/gdamore/tree-sitter-d/actions/workflows/ci.yml)
[![MIT License](https://img.shields.io/github/license/gdamore/tree-sitter-d.svg?logoColor=silver&logo=opensourceinitiative&color=blue&label=)](https://github.com/gdamore/tree-sitter-d/blob/master/LICENSE.txt)
[![D Language](https://img.shields.io/static/v1?message=Lang&label=&logo=d&logoColor=silver&&color=B03931)](https://dlang.org/)

## What is this?

This is a [D](https://dlang.org/) grammar for [Tree Sitter](https://tree-sitter.github.io/tree-sitter/).

As of this writing, I believe it fully supports D 2.100.

I believe this is the most accurate and complete machine readable grammar for D,
as of this writing. In fact it might be the only one that can claim full, or
nearly full, conformance to D 2.100.

We have a large body of code at Weka, and that corpus was used to test and verify
this parser.  As of this writing, it passes cleanly, and I am not aware of any
outstanding exceptions where this grammar fails.

Additionally this grammar has been tested with the DMD source code, as well as
the test cases for DMD.

I hope that this work will be able to be useful not just in the context of Tree Sitter,
but as a starting port for a more formal and accurate grammar which reflects the
actual behavior of the DMD reference compiler.

## Grammar Deviations

This has been used to parse the test corpus from DMD itself.
A few failures in that case come in a couple of forms:

* Grammar or errors that are in code not caught by DMD, because it is in
  code that is not compiled (such as templates that are not instantiated).
  This grammar doesn't know about instantiation or constructs that are
  tucked behind conditional compilation, and verifies the entire body
  of the source document.  I consider this a feature, not a bug.
  
* Experimental syntax for bit fields.  A PR to add that exists.
  (As a side note, use of C style bitfields is incredibly ill-advised, as
  it is impossible to guarantee the order or location of bitfields.
  It would be good if that preview was rejected, although it looks likely to
  make it into D 2.101.)
  
* Deprecated use of the former `body` keyword (it is no longer a keyword.)
  If your source file has this problem, change `body` to `do`.
  You could also just delete the word, as it is entirely optional in the
  syntax where it appears.
  
* A pathological case with `#line` directives with a multi-line comment
  on in the middle of the directive.  Nothing real emits such a busted syntax,
  and fixing it would require significant changes to the lexer, for absolutely
  zero real world benefit.  (If you do this in one of your source files, you
  absolutely deserve the resulting behavior regardless of what that behavior
  might be.)
  
* Inline assembler is essentially treated as a token stream with no
  real validation. As this is compiler and CPU specific, it doesn't make
  a lot of sense to try to add that here.

In some areas this grammar is stricter than what is formally specified on
the D website. It has some rules that make the grammar reject constructs that
would appear legal in the D grammar, but actually are rejected by the compiler
during semantic analyis.

I do not believe that this increase in tightness will
cause any correct programs to be rejected, and it reduces some of the ambiguities
in the language. This mainly consists of rejection of the use of expression lists
(i.e. "expression1, expression2, ...") in contexts where only a single value is legal.
(For example, you cannot use a comma expression in a `return` statement.)

## Acknowledgements

While the resources available online - both the grammar that is part of the DGrammar
project and what is specified on the webiste - have numerous problems, they still afforded
an excellent starting point for this work.  Without those resources, this would have
been impossible, or at least a very much more difficult project.

Additionally the D community on Discord has been helpful in understanding the grammar
and were patient with a number of my queries about potential language constructions,
many of which were utterly non-sensical.

## Challenges and Acknowledgements

D is an incredibly complex (some might say too much so) language, and it lacks an
accurate formal grammar, and the machine readable grammars that exist (DGrammar)
are buggy or out of date. Additionally, the specification is also not up to date,
and has conflicts and inaccuracies that do not not reflect the actual language.

Making this work, with a grammar that is loosely specified as a recursive descent
grammar with Tree Sitters GLR(1) style is no mean feat.  There are many conflicts,
and ambiguities abound in the actual grammar itself.

As a result this was generated mostly by hand, reading the grammar specification,
and experimenting heavily.

In doing this work, it was easy to identify a number of language constructs that
some might argue that the language could easily do without, without losing any
of it's real capability.

Additionally this work has some ugly hacks that I wish it did not -- much of which
is almost surely a result of my insufficient understanding of Tree Sitter or D 
or both.  I welcome contributions or suggestions by those more knowledgable to
improve this.

## Future Directions

* It would be nice to get this project moved either into either the D or the Tree-Sitter
  communities.  That would likely facilitate serendipitous discovery by the folks most
  likely to benefit from it.
  
* Additional bindings (Swift?). Some tree-sitter projects have additional bindings
  in their generated output.  I don't know how to generate all of those.
  
* Additional queries.  Local queries, etc.  Again, contributions are welcome!

* Improvements to the indentation or highlighting queries.

* DDOC support. Arguably DDOC is a language unto itself.

* Extended test coverage.  A lot of test cases are here, but we could reallyu do
  with a much richer corpus.  This is fairly tedious, but using the `-u` flag
  with `tree-sitter test` can be useful.
  
* Also highlight test coverage!

## Performance

Trial runs of Tree Sitter using this grammar
to parse the enter corpus of files in the DMD compiler (excluding the negative tests),
ran in just 1.94 seconds (1.86 user, 0.07 system).

This involved parsing 3094 files, containing 834,637 lines of source code.

This is an average of 627 us per file, or 2.3 us per line of code.

Put another way, this parses at a rate of about 430K lines of code per second. 

This test was performed on a 2020 MacBook Air with an M1 processor and 16GB RAM.
