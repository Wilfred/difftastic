# Tree Diffing

The following diff tools build a tree and compare it, rather than a
simple textual comparison.

## json-diff (Pairwise Comparison)

[json-diff](https://github.com/andreyvit/json-diff) performs a
structural diff of JSON files. It considers subtrees to be different
if they don't match exactly, so e.g. `"foo"` and `["foo"]` are
entirely different.

json-diff is also noteworthy for its extremely readable display of
results.

## Autochrome (Dijkstra's Algorithm)

[Autochrome](https://fazzone.github.io/autochrome.html) parses Clojure
with a custom parser that preserves comments. Autochrome uses
Dijkstra's algorithm to compare syntax trees.

Autochrome's webpage includes worked examples of the algorithm and a
discussion of design tradeoffs. It's a really great resource for
understanding tree diffing techniques in general.

## Tree Diff (A* Search)

Tristan Hume wrote a tree diffing algorithm during his 2017 internship
and Jane Street. The source code is not available, but [he has a blog
post](https://thume.ca/2017/06/17/tree-diffing/) discussing the design
in depth.

This project finds minimal diffs between s-expression files used as
configuration by Jane Street. It uses A* search to find the minimal
diff between them, and builds a new s-expression with a section marked
with `:date-switch` for the differing parts.

## GumTree (Top-down, then Bottom-up)

[GumTree](https://github.com/GumTreeDiff/gumtree) can parse several
programming languages and then performs a tree-based diff, outputting
an HTML display.

The GumTree algorithm is described in the associated paper
'Fine-grained and accurate source code differencing' by Falleri et al
([DOI](http://doi.acm.org/10.1145/2642937.2642982),
[PDF](https://hal.archives-ouvertes.fr/hal-01054552/document)). It
performs a greedy top-down search for identical subtrees, then
performs a bottom-up search to match up the rest.

(The academic literature has a lot of discussion of tree differencing,
[this blog
post](http://useless-factor.blogspot.com/2008/01/matching-diffing-and-merging-xml.html)
has a good overview of tree differencing focusing on XML.)


## Diffsitter (LCS on Leaves)

[Diffsitter](https://github.com/afnanenayet/diffsitter) is another
tree-sitter based diff tool. It uses [LCS diffing on the leaves of the
syntax
tree](https://github.com/afnanenayet/diffsitter/blob/b0fd72612c6fcfdb8c061d3afa3bea2b0b754f33/src/ast.rs#L310-L313).

