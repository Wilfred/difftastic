# It's Difftastic!

Difftastic is an experimental structured diff tool that compares files
based on their syntax.

![screenshot](img/difftastic.png)

It is very much unfinished. It works reasonably on very parenthesised
data (lisps, JSON), it works sometimes on other languages with
sufficient parentheses (Rust, JS), and falls back to a line-oriented
diff otherwise.

See `config/syntax.toml` to see how languages are defined.

The [wiki](https://github.com/Wilfred/difftastic/wiki) includes a
thorough overview of alternative diffing techniques and tools.
