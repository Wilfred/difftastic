# 树状差异分析

本页总结了一些其他可用的树形差异分析工具。

如果你很着急，可以先看看Autochrome。它的能力很强，并且对设计有着很好的描述。

如果你对学术文献的摘要感兴趣，[这个帖子](http://useless-factor.blogspot.com/2008/01/matching-diffing-and-merging-xml.html)（和它[附带的论文](http://useless-factor.blogspot.com/2008/01/matching-diffing-and-merging-xml.html)--在CC BY-NC的许可下可以被复制）将是一个很好的资源。

## json-diff (2012)

语言：JSON
算法：Pairwise comparison  
输出：CLI colours

[json-diff](https://github.com/andreyvit/json-diff)展示了JSON文件的结构层面的差异分析。如果两者是不完全匹配的，那么它们的子树将是完全不同。例如，`"foo"`和`["foo"]`是完全不同的。

可以注意的是，json-diff的结果显示十分方便查看。

## GumTree (2014)

语言：[约有10种编程语言](https://github.com/GumTreeDiff/gumtree/wiki/Languages)
分析器：多种，包括 [srcML](https://www.srcml.org/)  
算法：Top-down，随后bottom-up
输出：HTML，Swing GUI或者text

[GumTree](https://github.com/GumTreeDiff/gumtree)可以分析多种编程语言，并且进行基于树结构的差异分析，输出一个HTML的结果界面。

GumTree算法在Falleri等人的相关论文《细粒度源码差异分析》中有所描述（[DOI](http://doi.acm.org/10.1145/2642937.2642982),
[PDF](https://hal.archives-ouvertes.fr/hal-01054552/document)）。它对相同的子树进行贪婪的自下而上的搜索，随后进行自下而上的搜索来匹配其余的子树。

## Tree Diff (2017)

语言：S-表达式数据格式
算法：A*搜索
输出：合并后的S-表达式文件

Tristan Hume在他2017年实习期间和在Jane Street期间写了一个树状差分算法。源代码是不可以用的，但是[他写了一篇博客](https://thume.ca/2017/06/17/tree-diffing/)来对该设计进行了深入讨论。

该项目找到了Jane Street用作配置文件的s-表达式文件之间的最小差异。它使用了A*搜索来找到他们之间最小的差异，兵建立一个具有`:date-switch`进行标记差异的新的s-表达式文件。

（Jane Street一样有patdiff，但那似乎是一个面向行的差异分析，并不带着一些空格及整数差异显示。这个工具它并不理解在`"foo "`中的空格是具有意义的。）

## Autochrome (2017)

语言：Clojure
分析器：Custom，并保留注释  
算法：Dijkstra算法（A*搜索的先前版本）  
输出：HTML  

[Autochrome](https://fazzone.github.io/autochrome.html)使用了一个定制的、保留注释的解析器来分析Clojure。Autochrome使用Dijkstra算法来比较语法树之间的差异。

Auto chrome的网页包括该算法的工作实例以及对该设计权衡的讨论。这是一个用来了解树形差异分析的重要资源。

## graphtage (2020)

语言：JSON, XML, HTML, YAML, plist, and CSS  
解析器：json5, pyYAML, ignores comments  
算法：Levenshtein距离
输出：CLI colours

[graphtage](https://blog.trailofbits.com/2020/08/28/graphtage/)通过将结构化数据解析为通用文件格式，随后进行差异分析。它甚至允许比较JSON文件和YAML文件之间的区别。

与json-diff一样，它不认为 `["foo"]`和`"foo"`之间有任何相似之处。

## Diffsitter (2020)

解析器：[Tree-sitter](https://tree-sitter.github.io/tree-sitter/)
算法：LCS（Longest-common-subsequence）  
输出：CLI colours

[Diffsitter](https://github.com/afnanenayet/diffsitter)是另一个使用了tree-sitter解析器的差异分析工具。它使用了[LCS分析语法树中的子树](https://github.com/afnanenayet/diffsitter/blob/b0fd72612c6fcfdb8c061d3afa3bea2b0b754f33/src/ast.rs#L310-L313)。

## sdiff (2021)

语言：Scheme
解析器：Scheme内置的`read`，并忽略注释  
算法：Chawathe论文中的MH-Diff  
输出：CLI colours

[Semantically meaningful S-expression diff: Tree-diff for lisp source
code](https://archive.fosdem.org/2021/schedule/event/sexpressiondiff/)
在FOSDEM 2021中被发表。


