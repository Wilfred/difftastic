# 简介

Difftastic是一个根据文件的语法的结构化比较工具。它支持[超过20款编程语言](./languages_supported.html)，当使用它的时候，就会知道它有多么的*棒*。

Difftastic是一款开源软件（使用MIT许可证）并且可以[在Github上获得](https://github.com/wilfred/difftastic)。

该说明书会表明当前版本DFT_VERSION_HERE。[变更记录](https://github.com/Wilfred/difftastic/blob/master/CHANGELOG.md)会记录每个版本的特性增加和bug的修复。

如果你正在寻找其他语言版本的说明书，我们同样提供了[英语版本](https://difftastic.wilfred.me.uk/)。

## 语法差异分析

Difftastic会[检测编程语言](./usage.html#language-detection)，爬取代码，随后比较句法树。见例子：

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

注意Difftastic是如何识别`.map`那段没有发生变化的，尽管它是在新的一行上以空格开头的。

如果是以前那种面对行的差异分析表现会不理想。

<pre><code style="display:block">$ diff -u old.rs new.rs

@@ -1 +1,3 @@
<span style="background-color: #fbbd98; color: #000">-let ts_lang = guess(path, guess_src).map(tsp::from_language);</span>
<span style="background-color: PaleGreen; color: #000">+let ts_lang = language_override
+    .or_else(|| guess(path, guess_src))
+    .map(tsp::from_language);</span>
</code>
</pre>

一些文本差异分析工具也会突出单词的变化（例如GitHub或者是git的`--word-diff`），但是它们无法做到理解代码本身。Difftastic永远会找到匹配的定界符：你可以看到`or_else`结尾出的`)`已经被突出显示。

## 另一种文本差异分析

如果输入的文件格式Difftastic无法理解，他就会使用传统的以行为单位的文本差异分析，并且会将单词高亮显示。

同时，当输入的文件较大时，Difftastic也会使用以行为单位的文本差异分析。
