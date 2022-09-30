<p align="center">
  <a href="#readme"><img src="/img/logo.png" alt="it's difftastic!"/></a>
  <br>
  <a href="http://difftastic.wilfred.me.uk/"><img src="https://img.shields.io/badge/manual-mdBook-brightgreen?style=flat-square" alt="manual"></a>
  <a href="https://crates.io/crates/difftastic"><img src="https://img.shields.io/crates/v/difftastic.svg?style=flat-square" alt="crates.io"></a>
  <a href="https://codecov.io/gh/Wilfred/difftastic"><img src="https://img.shields.io/codecov/c/github/Wilfred/difftastic?style=flat-square&token=dZzAZtQT2S" alt="codecov.io"></a>
</p>

Difftastic是一个根据文件的语法进行比较的结构化比较工具。

**有关安装说明, 详见[说明书](http://difftastic.wilfred.me.uk/)中的
[安装部分](https://difftastic.wilfred.me.uk/installation.html)。**

## 基础实例

![Screenshot of difftastic and JS](/img/js.png)

在这个JavaScript的例子中，我们可以看到：

(1) Difftastic理解嵌套。它强调了匹配的`{` 和
`}`符号，同时尽管`foo()`之前有空格，Difftastic知道它并没有改变。

(2) Difftastic了解哪些行应该被对齐，尽管改变了，但是Difftastic依旧可以将左边的`bar()`和右边的`bar(1)`对齐。

(3) Difftastic理解换行并不会改变意义。例如`"eric"`现在是在新的一行上，但并没发生改变。

## 一分钟演示

[![asciicast](https://asciinema.org/a/480875.svg)](https://asciinema.org/a/480875)

这个一分钟的录屏演示了同时使用单独文件与git时Difftastic的使用。

## 语言

Difftastic支持超过20种编程语言，完整列表参照[说明书](https://difftastic.wilfred.me.uk/)。

如果一个文件的拓展名无法被识别，Difftastic就会使用带高亮显示的基于文本的差异分析。

## 已知问题

性能。Difftastic对有大量改动的文件的拓展性较差，并且会消耗大量的内存。

显示。通常来说Difftastic的并排显示功能效果很好，但是有的时候会让人困惑。

鲁棒性。Difftastic经常会有修复崩溃的版本发布。

## 非目标

修补。Difftastic的输出是供人使用的，它不会生成可以在以后应用的补丁。如果你需要补丁，请使用`diff`。

（补丁文件也是以行为单位的，这方面的能力对Difftastic来说十分有限。Difftastic可以发现在同一行中增加和删除的内容，并跟踪新旧文件的行号之间的关系。）

合并。AST合并是一个困难的问题。Difftastic并没有解决这个问题。

## 常见问题

### 这基本上不就是`--word-diff --ignore-all-space`吗？

字符差异分析 [并不能做到这个](https://twitter.com/_wilfredh/status/1510139929971421191/photo/1).

Difftastic会解析你的代码，会去理解什么是空格是具有意义的。例如在字符串里或是像Python这样的语言中，空格就是具有意义的。同时它会理解`x-1`在JS中代表着三个符号，而在Lisp中却是一个符号

### 我可以在git上使用difftastic吗？

你可以的！Difftastic手册[包含git的使用说明方法](https://difftastic.wilfred.me.uk/git.html)。同时你可以[使用mercurial](https://difftastic.wilfred.me.uk/mercurial.html)。

如果你是一个magit用户，请查看[这个博客](https://tsdh.org/posts/2022-08-01-difftastic-diffing-with-magit.html)，它展示了使用Difftastic和magit的一种用法。

### Difftastic能否与我最喜欢的工具整合？

可能不会，但Difftastic还很年轻。会考虑为你最喜欢的工具写一个插件，写好我会在README中链接它！

## 许可证

Difftastic是一个基于MIT许可证的开源软件，更多信息详见LICENSE。

这个资源库的`vendor/`目录下还包括在
其他作者的树状分析器。这些都是基于MIT许可证和Apache许可证。更多细节见`vendor/*/LICENSE`。

`sample_files/`中的文件也采用MIT许可，除非在文件头中另有说明。
