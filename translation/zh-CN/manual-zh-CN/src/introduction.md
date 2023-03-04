# 简介

Difftastic 是一个根据文件语法进行比较的结构化比较工具。它 [支持超过 30 种编程语言](./languages_supported.html)。当你使用时，便会知道它有多么 *棒*。

Difftastic 是一款开源软件（使用 MIT 许可证），你可以 [在 GitHub 上查看其源代码](https://github.com/wilfred/difftastic)。

本说明书描述当前版本 DFT_VERSION_HERE。[更新日志](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md) 会记录每个版本的新特性与 bug 的修复。

*如果你正寻找其他语言的说明书，我们同样提供了 [英文版](https://difftastic.wilfred.me.uk/)。*

## 语法差异分析

Difftastic [检测编程语言](./usage.html#language-detection)、解析代码，并比较语法树。以下是例子。

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

注意 Difftastic 是如何识别 `.map` 没有变化的，尽管它在带有空格的新行上。

面对行的差异分析表现则会很不理想。

<pre><code style="display:block">$ diff -u old.rs new.rs

@@ -1 +1,3 @@
<span style="background-color: #fbbd98; color: #000">-let ts_lang = guess(path, guess_src).map(tsp::from_language);</span>
<span style="background-color: PaleGreen; color: #000">+let ts_lang = language_override
+    .or_else(|| guess(path, guess_src))
+    .map(tsp::from_language);</span>
</code>
</pre>

一些文本差异分析工具也会突出单词的变化（如 GitHub 或 git 的 `--word-diff`），但它们仍无法理解代码本身。Difftastic 永远会找到匹配的定界符：你可以看到 `or_else` 结尾处的 `)` 已被突出显示。

## 备用的文本差异分析

如果 Difftastic 不能理解输入文件，它将用常规的面向行的文本差异分析与单词高亮显示。

同时，当输入的文件较大时，Difftastic 也会使用面向行的文本差异分析。
