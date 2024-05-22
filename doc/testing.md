# Testing tree-sitter-clojure

## TLDR

[tree-sitter-clojure](https://github.com/sogaiu/tree-sitter-clojure)
has been tested using a variety of methods.

_Note_: Current serious testing is done via the code and instructions
in the [ts-clojure](https://github.com/sogaiu/ts-clojure) repository.
The description below is left for historical purposes.

## The Details

This document will touch on some of those methods and why they were
attempted:

1. Using corpus data from other tree-sitter-clojure attempts
2. Using Clojure source from [Clojars](https://clojars.org/)
3. Generative testing via
   [Hypothesis](https://github.com/HypothesisWorks/hypothesis)

Other employed methods that won't be covered (in much, if any, detail)
here:

1. Sporadic manual invocations
2. Using [tonsky's
   sublime-clojure](https://github.com/tonsky/sublime-clojure) test
   data
3. Generative testing via
   [test.check](https://github.com/clojure/test.check/)
4. [Manual inspection of the
   grammar](https://github.com/sogaiu/tree-sitter-clojure/issues/3)

## Using corpus data from other tree-sitter-clojure attempts

There were at least two previous attempts at implementing
tree-sitter-clojure, [one by
oakmac](https://github.com/oakmac/tree-sitter-clojure) and [another by
Tavistock](https://github.com/Tavistock/tree-sitter-clojure).
Important things were learned by trying to make these attempts work,
but for reasons not covered here, a separate attempt was started.

Both earlier attempts had
[corpus](https://github.com/oakmac/tree-sitter-clojure/tree/master/corpus)
[data](https://github.com/Tavistock/tree-sitter-clojure/tree/master/corpus)
that could be adapted for testing.  Consequently,
[tsclj-tests-parser](https://github.com/sogaiu/tsclj-tests-parser) was
created to extract [the relevant data as plain
files](https://github.com/sogaiu/tsclj-tests-parser/-/tree/master/test-files).
These were in turn fed to tree-sitter's `parse` command using the
tree-sitter-clojure grammar to check for parsing errors.

If changes are made to tree-sitter-clojure's grammar, this method can
be used to quickly check for some forms of undesirable breakage.
(This could be taken a bit further by adapting the content as corpus
data for tree-sitter-clojure.)

### But...

One issue with this approach is that it relies on manually identifying
and spelling out appropriate test cases, which in the case of Clojure,
is complicated by the lack of a language specification.

Apart from detailed research, this was partially addressed by testing
against a large sample of Clojure source code written by the
community.

## Using Clojure source from Clojars

The most fruitful method of testing was working with Clojure source
written by humans for purposes other than for testing
tree-sitter-clojure.

### Where to get samples of Clojure source

Initially, repositories were cloned from a variety of locations, but
before long a decision was made to switch to using "release" jars from
Clojars.

The latter decision was motivated by wanting source that was less
likely to be "broken" in various ways.  Compared to "release" jar
content from Clojars, the default branch of a repository seemed to
have a higher probability of "not quite working".  Although the
Clojars "release" idea was an improvement, weeding out inappropriate
Clojure source was still necessary.

A variety of approaches were used to come up with a specific list of
jars from Clojars, but the most recent attempt is
[gen-clru-list](https://github.com/sogaiu/gen-clru-list).  This is
basically a [babashka](https://github.com/babashka/babashka) script
that fetches [Clojars'
feed.clj](https://github.com/clojars/clojars-web/wiki/Data#useful-extracts-from-the-poms),
does some processing, and writes out a list of urls.  For reference,
this approach currently yields a number of urls in the neighborhood of
19,000.

### How to check retrieved Clojure samples

The retrieved content was initially checked using
[a-tsclj-checker](https://github.com/sogaiu/a-tsclj-checker) (an
adaptation of
[analyze-reify](https://github.com/borkdude/analyze-reify)) which uses
[Rust bindings for
tree-sitter](https://github.com/tree-sitter/tree-sitter/tree/master/lib/binding_rust)
and tree-sitter-clojure to parse Clojure source code.  Notably, it can
traverse directories and also operate on `.jar` files.

Once an error is detected, it is easier to investigate if one has
direct access to the Clojure source file in question (as compared with
rummaging around `.jar` files).  Thus, it was decided to create a
single directory tree containing extracted data from all retrieved
jars.  On a side note, the single directory tree took less than 2 GB
of disk space.

A less fancy, but easier to maintain (i.e. not written in Rust) tool --
[ts-grammar-checker](https://github.com/sogaiu/ts-grammar-checker) -- was
developed as an alternative to `a-tsclj-checker`.  Strictly speaking,
`ts-grammar-checker` may not be necessary as one can probably employ
tree-sitter's `parse` command in combination with `find`, `xargs` and the like
if on some kind of \*nix.  An example of a comparable invocation is:

```
find ~/src/clojars-cljish -type f -regex '.*\.clj[cs]?$' -print0 | xargs -0 tree-sitter parse --quiet > my-results.txt
```

`a-tsclj-checker` is the fastest tool but it has not been updated to
the most recent version of tree-sitter-clojure.  `ts-grammar-checker`
is not quite as fast, but it can be easily adapted to work with other
tree-sitter grammars (e.g.  it's
[used](https://github.com/sogaiu/ts-grammar-checker/-/blob/master/janet-checker.janet)
for
[tree-sitter-janet-simple](https://github.com/sogaiu/tree-sitter-janet-simple)
as well).  However, it does not support accessing content within
`.jar` files.

Across somewhat less than 150,000 files (.clj, .cljc, .cljs),
`a-tsclj-checker` typically takes a little less than 30 seconds, while
`ts-grammar-checker` typically takes a bit more than 100 seconds (at
least on the author's machine).  In subjective terms, it hasn't felt
terribly different because knowing there is at least a 30 second wait,
[one typically doesn't sit waiting at a prompt for execution
completion](https://xkcd.com/303/).

For any files that parse with errors, it can be handy to apply
[clj-kondo](https://github.com/clj-kondo/clj-kondo).  The specific
details that `clj-kondo` reported were often helpful when examining
individual files, but that diagnostic information also provided a way
to partition the files into groups.  Subjectively it can feel more
manageable to deal with 5 groups of files compared with 100 separate
files (though it's true that the grouping does not always turn out to
be that meaningful).

An individual "suspect" file is typically viewed manually in an editor
(usually one that has `clj-kondo` support enabled) and examined for
"issues".

In practice, testing the grammar against appropriate Clojure source
from Clojars has been the most useful in finding issues with the
grammar.  The lack of a specification for Clojure increased the
difficulty of creating an appropriate grammar, but having a large
sample of code to test against helped to mitigate this a bit.  On more
than one occasion some version of the grammar failed to parse some
legitimate Clojure source and subsequent investigation revealed that
the grammar had not accounted for an uncommom and/or unanticipated
usage.

### But...

This method has a significant weakness as there could be cases where
tree-sitter would parse successfully but the result could be
inappropriate.  For example, if the grammar definition was faulty,
something which should be parsed as a symbol might end up parsed as a
number with no error reported.

To partially address this issue, generative / property-based testing
was attempted.

## Generative testing via Hypothesis

Initially, [some effort was made to use
test.check](https://gist.github.com/sogaiu/c0d668d050b63e298ef63549e357f9d2).
However, [an outstanding issue with
test.check](https://github.com/clojure/test.check/blob/master/doc/growth-and-shrinking.md#unnecessary-bind)
(aka TCHECK-112) seemed very likely to be relevant for the types of
tests being considered.  Also, the approach used
[libpython-clj](https://github.com/clj-python/libpython-clj) to call
tree-sitter via [Python bindings for
tree-sitter](https://github.com/tree-sitter/py-tree-sitter).  Although
invoking tree-sitter via Python worked, it was awkward to connect this
with `test.check`.  For the above reasons, the `test.check` +
`libpython-clj` approach (neat as it was) was abandoned.

Interestingly, Python's Hypothesis doesn't suffer from test.check's
["long-standing Hard
Problem"](https://clojure.atlassian.net/browse/TCHECK-112) so that was
given a try.
[prop-test-ts-clj](https://github.com/sogaiu/prop-test-ts-clj) and
[hypothesis-grammar-clojure](https://github.com/sogaiu/hypothesis-grammar-clojure)
are the resulting bits.

At least [one
issue](https://github.com/sogaiu/tree-sitter-clojure/issues/7) was
discovered and it also turned out that
[parcera](https://github.com/carocad/parcera) was
[affected](https://github.com/carocad/parcera/issues/86).

The code was also adapted a bit to test
[Calva](https://github.com/BetterThanTomorrow/calva).  Some issues
were discovered and [reported
upstream](https://github.com/BetterThanTomorrow/calva/issues/802).

### But...

A drawback of this approach is that details of the tree-sitter-clojure
grammar became embedded in the tests.  One consequence is that if
tree-sitter-clojure's grammar changes, then the tests may need to be
updated to reflect changes in the grammar (if there is an intent to
continue to use them).

## Summary

tree-sitter-clojure has been tested in a variety ways attempting to
address various real-world constraints (e.g. lack of a language
specification, limitations of tree-sitter's approach for a language
with extensible syntax, etc.).  AFAICT, for what it sets out to do, it
seems to work pretty well so far.
