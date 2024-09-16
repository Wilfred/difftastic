# Tree Diffing

This page summarises some of the other tree diffing tools available.

If you're in a hurry, start by looking at Autochrome. It's extremely
capable, and has an excellent description of the design.

If you're interested in a summary of the academic literature, [this
blog
post](http://useless-factor.blogspot.com/2008/01/matching-diffing-and-merging-xml.html)
(and its [accompanying
paper](http://useless-factor.blogspot.com/2008/01/matching-diffing-and-merging-xml.html)
-- mirrored under a CC BY-NC license) are great resources.

## json-diff (2012)

Languages: JSON  
Algorithm: Pairwise comparison  
Output: CLI colours  

[json-diff](https://github.com/andreyvit/json-diff) performs a
structural diff of JSON files. It considers subtrees to be different
if they don't match exactly, so e.g. `"foo"` and `["foo"]` are
entirely different.

json-diff is also noteworthy for its extremely readable display of
results.

## GumTree (2014)

Languages: [~10 programming
languages](https://github.com/GumTreeDiff/gumtree/wiki/Languages)  
Parser: Several, including [srcML](https://www.srcml.org/)  
Algorithm: Top-down, then bottom-up  
Output: HTML, Swing GUI, or text

[GumTree](https://github.com/GumTreeDiff/gumtree) can parse several
programming languages and then performs a tree-based diff, outputting
an HTML display.

The GumTree algorithm is described in the associated paper
'Fine-grained and accurate source code differencing' by Falleri et al
([DOI](http://doi.acm.org/10.1145/2642937.2642982),
[PDF](https://hal.archives-ouvertes.fr/hal-01054552/document)). It
performs a greedy top-down search for identical subtrees, then
performs a bottom-up search to match up the rest.

## Tree Diff (2017)

Languages: S-expression data format  
Algorithm: A* search  
Output: Merged s-expression file

Tristan Hume wrote a tree diffing algorithm during his 2017 internship
at Jane Street. The source code is not available, but [he has a blog
post](https://thume.ca/2017/06/17/tree-diffing/) discussing the design
in depth.

This project finds minimal diffs between s-expression files used as
configuration by Jane Street. It uses A* search to find the minimal
diff between them, and builds a new s-expression with a section marked
with `:date-switch` for the differing parts.

(Jane Street also has patdiff, but that seems to be a line-oriented
diff with some whitespace/integer display polish. It doesn't
understand that e.g. whitespace in `"foo "` is meaningful).

## Autochrome (2017)

Languages: Clojure  
Parser: Custom, preserves comments  
Algorithm: Dijkstra (previously A* search)  
Output: HTML  

[Autochrome](https://fazzone.github.io/autochrome.html) parses Clojure
with a custom parser that preserves comments. Autochrome uses
Dijkstra's algorithm to compare syntax trees.

Autochrome's webpage includes worked examples of the algorithm and a
discussion of design tradeoffs. It's a really great resource for
understanding tree diffing techniques in general.

## graphtage (2020)

Languages: JSON, XML, HTML, YAML, plist, and CSS  
Parser: json5, pyYAML, ignores comments  
Algorithm: Levenshtein distance  
Output: CLI colours  

[graphtage](https://blog.trailofbits.com/2020/08/28/graphtage/)
compares structured data by parsing into a generic file format, then
displaying a diff. It even allows things like diffing JSON against
YAML.

As with json-diff, it does not consider `["foo"]` and `"foo"` to have
any similarities.

## Diffsitter (2020)

Parser: [Tree-sitter](https://tree-sitter.github.io/tree-sitter/)  
Algorithm: Longest-common-subsequence  
Output: CLI colours

[Diffsitter](https://github.com/afnanenayet/diffsitter) is another
tree-sitter based diff tool. It uses [LCS diffing on the leaves of the
syntax
tree](https://github.com/afnanenayet/diffsitter/blob/b0fd72612c6fcfdb8c061d3afa3bea2b0b754f33/src/ast.rs#L310-L313).

## sdiff (2021)

Languages: Scheme  
Parser: Scheme's built-in `read`, ignores comments  
Algorithm: MH-Diff from the Chawathe paper  
Output: CLI colours

[Semantically meaningful S-expression diff: Tree-diff for lisp source
code](https://archive.fosdem.org/2021/schedule/event/sexpressiondiff/)
was presented at FOSDEM 2021.
