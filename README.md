# tree-sitter-d
D Grammar for Tree Sitter

[![Stand With Ukraine](https://raw.githubusercontent.com/vshymanskyy/StandWithUkraine/main/badges/StandWithUkraine.svg)](https://stand-with-ukraine.pp.ua)
[![Build/test](https://github.com/gdamore/tree-sitter-d/actions/workflows/ci.yml/badge.svg)](https://github.com/gdamore/tree-sitter-d/actions/workflows/ci.yml)
[![MIT License](https://img.shields.io/github/license/gdamore/tree-sitter-d.svg?logoColor=silver&logo=opensourceinitiative&color=blue&label=)](https://github.com/gdamore/tree-sitter-d/blob/master/LICENSE.txt)

This is a new stab at a D grammar for Tree Sitter.

D is an incredibly complex (some might say too much so) language, and it lacks an
accurate formal grammar, and the machine readable grammars that exist (DGrammar)
are buggy or out of date.

As a result this was generated mostly by hand, reading the grammar specification,
and experimenting heavily.

I have leveraged some work done by others in the community, especially the DGrammar
project and the D language web site.  While these both suffer from a number of
glaring bugs and inaccuracies, they still afforded a reasonable starting place,
and it has been instructive reviewing the ways in which the two disagree.

I hope that this work will be able to be useful not just in the context of Tree Sitter,
but as a starting port for a more formal and accurate grammar which reflects the
actual behavior of the DMD reference compiler.

We have a large body of code at Weka, and that corpus was used to test and verify
this parser.  As of this writing, it passes cleanly, and I am not aware of any
outstanding exceptions where this grammar fails.

Making this work, with a grammar that is loosely specified as a recursive descent
grammar with Tree Sitters GLR(1) style is no mean feat.  There are many conflicts,
and ambiguities abound.

Consequently this work has some ugly hacks that I wish it did not.  I welcome effort
by either D or Tree Sitter experts to improve this -- I am neither.

Note that in some areas this grammar is stricter than the "specified" behavior on
the D website, as it has some rules that make the grammar reject constructs that
would appear legal in the D grammar, but actually are rejected by the compiler
during semantic analyis.  I do not believe that this increase in tightness will
cause any correct programs to be rejected, and it reduces some of the ambiguities
in the language.

