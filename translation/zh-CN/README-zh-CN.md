<p align="center">
  <a href="#readme"><img src="/img/logo.png" alt="it's difftastic!"/></a>
  <br>
  <a href="http://difftastic.wilfred.me.uk/"><img src="https://img.shields.io/badge/manual-mdBook-brightgreen?style=flat-square" alt="manual"></a>
  <a href="https://crates.io/crates/difftastic"><img src="https://img.shields.io/crates/v/difftastic.svg?style=flat-square" alt="crates.io"></a>
  <a href="https://codecov.io/gh/Wilfred/difftastic"><img src="https://img.shields.io/codecov/c/github/Wilfred/difftastic?style=flat-square&token=dZzAZtQT2S" alt="codecov.io"></a>
</p>

Difftastic 是一个根据文件语法进行比较的结构化比较工具。

**有关安装说明，详见 [说明书](http://difftastic.wilfred.me.uk/) 中的
[安装部分](https://difftastic.wilfred.me.uk/installation.html)。**

## 基础实例

![使用 Difftastic 比较 Javascript 文件的截图](/img/js.png)

在这个 JavaScript 的例子中，我们可以看到：

(1) Difftastic 理解嵌套。它强调了匹配的 `{`  和
`}` 符号；同时尽管 `foo()` 之前增加了空格，Difftastic 知道它并没有改变。

(2) Difftastic 理解哪些行应该被对齐。尽管内容改变了，但是 Difftastic 依旧将左边的 `bar(1)` 与右边的 `bar(2)` 对齐。

(3) Difftastic 理解换行并不改变文件意义。例如 `"eric"` 现在在新的一行中，但 Difftastic 知道它并没改变。

## 一分钟演示

[![asciicast](https://asciinema.org/a/480875.svg)](https://asciinema.org/a/480875)

这个一分钟录屏演示了对单个文件与 git 使用 Difftastic 的操作与效果。

## 语言

Difftastic 支持超过 30 种编程语言，完整列表请查看 [说明书](https://difftastic.wilfred.me.uk/)。

如果一个文件的拓展名无法被识别，Difftastic 将会使用基于文本但带高亮显示的差异分析模式。

## 已知问题

性能：Difftastic 对有大量改动的文件的拓展性较差，并且会消耗大量的内存。

显示：Difftastic 的并排显示功能效果通常情况下很好，但有时也会令人困惑。

鲁棒性：Difftastic 经常发布修复崩溃的版本。

## 非目标

修补：Difftastic 的输出是供人使用的，它不会生成可以在以后应用的补丁。如果你需要一个补丁，请使用 `diff`。

（补丁文件也将行作为单位的，这方面的能力对 Difftastic 十分有限。Difftastic 可以发现同一行中同时存在添加与删除，并且它会跟踪新旧文件间行号的关系。）

合并：抽象语法树（AST）合并是一个困难的问题。Difftastic 并没有解决这个问题。

## 常见问题

### 这基本上不就是 `--word-diff --ignore-all-space` 吗？

字符差异分析 [并不能做到这个](https://twitter.com/_wilfredh/status/1510139929971421191/photo/1)。

Difftastic 会解析你的代码，会去理解什么是空格、什么具有意义。例如在字符串里或是在像 Python 这样的语言中，空格就是具有意义的。同时它会理解 `x-1` 在 Javascript 中代表三个符号，而在 Lisp 中却是一个符号。

### 我能在 git 上使用 Difftastic 吗？

可以！Difftastic 说明书 [包含 git 的使用说明方法](https://difftastic.wilfred.me.uk/git.html)。你也可以 [使用 mercurial](https://difftastic.wilfred.me.uk/mercurial.html)。

如果你使用 magit，请查看 [这篇博客](https://tsdh.org/posts/2022-08-01-difftastic-diffing-with-magit.html)，它展示了使用 Difftastic 和 magit 的一种方法。

### Difftastic 能否与我最喜欢的工具整合？

可能不会，但 Difftastic 还很年轻，会去考虑为你最喜欢的工具写一个插件，写好我会在 README 中链接它！

## 许可证

Difftastic 是一个基于 MIT 许可证的开源软件，更多信息详见 LICENSE。

这个存储库的 `vendored_parsers/` 目录下还包括在
其他作者的树状分析器。这些都基于 MIT 许可证和 Apache 许可证开源。更多细节见 `vendored_parsers/*/LICENSE`。

除在文件头特殊说明外，`sample_files/` 中的文件也采用 MIT 许可证。
