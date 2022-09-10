# Introduction简介

Difftastic is a structural diff tool that understands syntax. It
supports [over 20 programming languages](./languages_supported.html)
and when it works, it's *fantastic*. Difftastic是一个根据文件的语法的结构化比较工具。它支持[超过20款编程语言](./languages_supported.html)，当使用它的时候，就会知道它有多么的*棒*。

Difftastic is open source software (MIT license) and [available on
GitHub](https://github.com/wilfred/difftastic). Difftastic是一款开源软件（使用MIT许可证）并且可以[在Github上获得](https://github.com/wilfred/difftastic)。

This copy of the manual describes version DFT_VERSION_HERE. The
[changelog](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md)
records which features and bug fixes are in each version. 该说明书会表明当前版本DFT_VERSION_HERE。[变更记录](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md)会记录每个版本的特性增加和bug的修复。

## 语法差异分析

Difftastic [detects the language](./usage.html#language-detection), parses the code, and then
compares the syntax trees. Let's look at an example. Difftastic会[检测编程语言](./usage.html#language-detection)，爬取代码，随后比较句法树。见例子：

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

1 <span style="background-color: PaleGreen">1</span> let ts_lang = <span style="background-color: PaleGreen">language_override</span>
. <span style="background-color: PaleGreen">2</span>     <span style="background-color: PaleGreen">.or_else(||</span> guess(path, guess_src)<span style="background-color: PaleGreen">)</span>
. 3     .map(tsp::from_language);
</code>
</pre>

Notice how difftastic recognises that `.map` is unchanged, even though
it's now on a new line with whitespace. 注意Difftastic是如何识别`.map`那段没有发生变化的，尽管它是在新的一行上以空格开头的。

A line-oriented diff does a much worse job here.如果是以前那种面对行的差异分析表现会不理想。

<pre><code style="display:block">$ diff -u old.rs new.rs

@@ -1 +1,3 @@
<span style="background-color: #fbbd98">-let ts_lang = guess(path, guess_src).map(tsp::from_language);</span>
<span style="background-color: PaleGreen">+let ts_lang = language_override
+    .or_else(|| guess(path, guess_src))
+    .map(tsp::from_language);</span>
</code>
</pre>

Some textual diff tools also highlight word changes (e.g. GitHub or
git's `--word-diff`). They still don't understand the code
though. Difftastic will always find matched delimiters: you can see
the closing `)` from `or_else` has been highlighted. 一些文本差异分析工具也会突出单词的变化（例如GitHub或者是git的`--word-diff`），但是它们无法做到理解代码本身。Difftastic永远会找到匹配的定界符：你可以看到`or_else`结尾出的`)`已经被突出显示。

## 另一种文本差异分析

If input files are not in a format that difftastic understands, it
uses a conventional line-oriented text diff with word highlighting.如果输入的文件格式Difftastic无法理解，他就会使用传统的以行为单位的文本差异分析，并且会将单词高亮显示。

Difftastic will also use textual diffing when given extremely large
inputs.同时，当输入的文件较大时，Difftastic也会使用以行为单位的文本差异分析。
