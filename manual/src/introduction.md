# Introduction

Difftastic is a structural diff tool that understands syntax. It
supports [over 30 programming languages](./languages_supported.html)
and when it works, it's *fantastic*.

Difftastic is open source software (MIT license) and [available on
GitHub](https://github.com/wilfred/difftastic).

This copy of the manual describes version DFT_VERSION_HERE. The
[changelog](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md)
records which features and bug fixes are in each version.

*This manual is also available in [Chinese](https://difftastic.wilfred.me.uk/zh-CN/).*

## Syntactic Diffing

Difftastic [detects the language](./usage.html#language-detection), parses the code, and then
compares the syntax trees. Let's look at an example.

```
// old.rs
let ts_lang = guess(path, guess_src).map(tsp::from_language);
```
```
// new.rs
let ts_lang = language_override
    .or_else(|| guess(path, guess_src))
    .map(tsp::from_language);
```

<pre><code style="display:block">$ difft old.rs new.rs

1 <span style="background-color: PaleGreen; color: #000">1</span> let ts_lang = <span style="background-color: PaleGreen; color: #000">language_override</span>
. <span style="background-color: PaleGreen; color: #000">2</span>     <span style="background-color: PaleGreen; color: #000">.or_else(||</span> guess(path, guess_src)<span style="background-color: PaleGreen; color: #000">)</span>
. 3     .map(tsp::from_language);
</code>
</pre>

Notice how difftastic recognises that `.map` is unchanged, even though
it's now on a new line with whitespace.

A line-oriented diff does a much worse job here.

<pre><code style="display:block">$ diff -u old.rs new.rs

@@ -1 +1,3 @@
<span style="background-color: #fbbd98; color: #000">-let ts_lang = guess(path, guess_src).map(tsp::from_language);</span>
<span style="background-color: PaleGreen; color: #000">+let ts_lang = language_override
+    .or_else(|| guess(path, guess_src))
+    .map(tsp::from_language);</span>
</code>
</pre>

Some line-oriented diff tools also highlight word changes (e.g. GitHub
or git's `--word-diff`). They still don't understand the code
though. Difftastic will always find matched delimiters: you can see
the closing `)` from `or_else` has been highlighted.

## Fallback Line-Oriented Diffing

If input files are not in a format that difftastic understands, it
uses a conventional line-oriented diff with word highlighting.

Difftastic will also use line-oriented diffing when given extremely
large inputs.
