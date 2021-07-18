# It's Difftastic!

Difftastic is an experimental structured diff tool that compares files
based on their syntax.

![screenshot](img/difftastic.png)

It is very much unfinished. It works reasonably on very parenthesised
data (lisps, JSON), it works sometimes on other languages with
sufficient parentheses (Rust, JS), and falls back to a line-oriented
diff otherwise.

## How It Works

(1) Parsing.

Difftastic treats source code as a sequence of atoms or (possibly
nested) lists.

Language syntax is defined in `config/syntax.toml`: you provide
regular expressions for atoms (including comments), open delimiters,
and close delimiters.

This is heavily inspired by
[Comby](https://github.com/comby-tools/comby), which handles a large
number of languages by using a similar approach.

(2) Diffing.

Difftastic treats diff calculations as a graph search problem. It
finds the minimal diff using Dijkstra's algorithm.

This is based on the excellent
[Autochrome](https://fazzone.github.io/autochrome.html) project.

(3) Printing.

Difftastic prints a side-by-side diff that fits the current
terminal. It will try to align unchanged nodes (see screenshot above).

## Known Problems

Crashes. The code is underdocumented, undertested, and unfinished.

Performance. Difftastic scales relatively poorly on files with a large
number of changes, and can use a lot of memory. This might be solved
by A* search.

Replacing top-level expressions. If you delete a function and write a
completely different new one, difftastic will show the small number of
common tokens between them.

Comments. Small changes can show big diffs.

## Non-goals

Patch files. If you want to create a patch that you can later apply,
use `diff`. Difftastic ignores whitespace, so its output is
lossy. (AST patching is also a hard problem.)

## Testing with Git

```
[diff]
        tool = difftastic

[difftool "difftastic"]
        cmd = ~/projects/difftastic/target/debug/difftastic "$LOCAL" "$REMOTE"
```

You can then run `git difftool -y` to see the current repo changes in
difftastic.

## Further Reading

The [wiki](https://github.com/Wilfred/difftastic/wiki) includes a
thorough overview of alternative diffing techniques and tools.
