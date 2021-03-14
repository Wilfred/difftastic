## Status

The grammar is still in progress, as of now, it can parse all the
files in the elixir source repo. I haven't verified if it builds ast
node with correct structure (precedence and associativity). On a
largish repo (around 3000 source files), it can parse 95% of the
files. The immediate priority is to improve that.

## Install

```bash
git clone git@github.com:ananthakumaran/tree-sitter-elixir.git
npm install # ignore node-gyp error, we will fix it in the next step
make generate # this should generate dynamic libraries under ~/.tree-sitter/bin/{elixir.so, elixir.so.dSYM}
```

## Emacs

Emacs users can refer
[init-tree-sitter.el](https://gist.github.com/ananthakumaran/ed91ef5a7bbf679cdf13e8a65ea54abe)
for a sample config.

