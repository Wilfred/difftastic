# 棘手的例子

树状差异分析有时具有挑战性。本页展示了开发过程中观察到的困难情况和处理结果。

并非所有这些情况在 Difftastic 中都能很好地工作。

## 添加定界符

```
;; Before
x

;; After
(x)
```

可能输出：<code><span style="background-color: PaleGreen; color: #000">(x)</span></code>

理想输出：<code><span style="background-color: PaleGreen; color: #000">(</span>x<span style="background-color: PaleGreen; color: #000">)</span></code>

这十分棘手，因为 `x` 改变了在树中的深度，但其本身却未发生改变。

并不是所有的树状差异分析算法可以处理这个例子。同时仔细地展示出范例是具有挑战性的：我们希望高亮已改变的定界符，而非他们的内容。这同样在更大的表达式中具有挑战性。

**Difftastic**：Difftastic 即使认为节点在不同深度，在这种情况下也能实现预期结果。

## 改变定界符

```
;; Before
(x)

;; After
[x]
```

理想输出：<code><span style="background-color: #fbbd98; color: #000">(</span>x<span style="background-color: #fbbd98; color: #000">)</span></code>, <code><span style="background-color: PaleGreen; color: #000">[</span>x<span style="background-color: PaleGreen; color: #000">]</span></code>

正如这个例子，我们想要高亮定界符而非 `x` 这个内容。

**Difftastic**：通过树状差异分析，Difftastic 正确处理这个问题。

## 扩展定界符

```
;; Before
(x) y

;; After
(x y)
```

可能输出 1：<code><span style="background-color: #fbbd98; color: #000">(</span>x<span style="background-color: #fbbd98; color: #000">)</span> y</code>, <code><span style="background-color: PaleGreen; color: #000">(</span>x y<span style="background-color: PaleGreen; color: #000">)</span></code>

可能输出 2：<code>(x) <span style="background-color: #fbbd98; color: #000">y</span></code>, <code>(x <span style="background-color: PaleGreen; color: #000">y</span>)</code>

目前还不清楚在这种情况下，哪个结果更好。

**Difftastic**：Difftastic 目前显示结果 2，但这种情况下对成本模型很敏感。一些以前版本的 Difftastic 显示结果 1。

## 缩小定界符

```
;; Before
(x y)

;; After
(x) y
```

这与扩展定界符的情况类似。

## 使定界符不连贯

```
;; Before
(foo (bar))

;; After
(foo (novel) (bar))
```

理想输出：<code>(foo <span style="background-color:PaleGreen; color: #000">(novel)</span> (bar)</code>

很容易会变成 <code>(foo (<span style="background-color:PaleGreen; color: #000">novel</span>) <span style="background-color:PaleGreen; color: #000">(</span>bar<span style="background-color:PaleGreen; color: #000">)</span>)</code>，
其中后一组的定界符会被选中。

## 重新组织大节点

```
;; Before
[[foo]]
(x y)

;; After
([[foo]] x y)
```

我们想高亮 `[[foo]]` 被移到了括号内。然而，一个简单的语法差异者更倾向于认为在前面删除 `()` 并在后面增加 `()`，因为这是最小的差异表现（见[议题 #44](https://github.com/Wilfred/difftastic/issues/44)）。

## 在列表内重新排列

```
;; Before
(x y)

;; After
(y x)
```

理想输出：<code>(<span style="background-color: PaleGreen; color: #000">y</span> <span style="background-color: PaleGreen; color: #000">x</span>)</code>

我们想高亮列表内容，而非定界符。

## 中间插入

```
// Before
foo(bar(123))

// After
foo(extra(bar(123)))
```

理想输出：<code>foo(<span style="background-color: PaleGreen; color: #000">extra(</span>bar(123)<span style="background-color: PaleGreen; color: #000">)</span>)</code>

我们想把 `foo` 和 `bar` 看作是未改变的。这种情况对树进行自下而上然后自上而下匹配的衍合算法具有挑战性。

## 标点符号元素

```
// Before
foo(1, bar)

// After
foo(bar, 2)
```

可能输出：<code>foo(<span style="background-color: PaleGreen; color: #000">bar</span>, <span style="background-color: PaleGreen; color: #000">2</span>)</code>

理想输出：<code>foo(bar<span style="background-color: PaleGreen; color: #000">,</span> <span style="background-color: PaleGreen; color: #000">2</span>)</code>

`()` 内有两个元素，我们可以认为 `bar` 和 `,` 中有一个未改变（但不能认为两者都不改变，因为它们已经重新排序）。

我们想把 `bar` 看作是未改变的，因为它相比于 `,` 元素更加重要。在语言不可知的方式下完成这一点存在困难，所以 Difftastic 有一个小的低优先级标点符号元素列表。

## 滑块（平移）

在基于文本的差异分析中，滑块是一个常见的问题，即行与行之间以混乱的方式进行匹配。

它们通常看起来像这样。差异分析必须任意选择一个包含分隔符的行，但它选择了错误的行。

```
+ }
+
+ function foo () {
  }
```

git-diff 有一些启发式方法（比如 Patience Diff）降低这种风险，但这个问题仍可能发生。

在树状差异分析时也有类似的问题。

```
;; Before
A B
C D

;; After
A B
A B
C D
```

可能输出：

<pre><code>A <span style="background-color: PaleGreen; color: #000">B</span>
<span style="background-color: PaleGreen; color: #000">A</span> B
C D
</code></pre>

理想输出：

<pre><code>A B
<span style="background-color: PaleGreen; color: #000">A</span> <span style="background-color: PaleGreen; color: #000">B</span>
C D
</code></pre>

理想情况下，我们更期望将连续节点标记为新的。从最长共子序列算法（LCS）看，这两个选择等价。

## 滑块（嵌套）

```
// Before
old1(old2)

// After
old1(new1(old2))
```

可能输出：<code>old1<span style="background-color: PaleGreen; color: #000">(new1</span>(old2)<span style="background-color: PaleGreen; color: #000">)</span></code>

理想输出：<code>old1(<span style="background-color: PaleGreen; color: #000">new1(</span>old2<span style="background-color: PaleGreen; color: #000">)</span>)</code>

正确的答案是取决于语言。大多数语言希望优先使用内部定界符，而 Lisps 与 JSON 则期望使用外部定界符。

## 最小化深度改变

```
// Before
if true {
  foo(123);
}
foo(456);

// After
foo(789);
```

我们认为 `foo(123)` 与 `foo(456)` 中，哪个与 `foo(789)` 匹配？Difftastic 优先考虑 `foo(456)`，因为其优先考虑相同嵌套深度的节点。

## 有少量相似处的替代做法

```
// Before
function foo(x) { return x + 1; }

// After
function bar(y) { baz(y); }
```

可能结果：<code>function <span style="background-color: PaleGreen; color: #000">bar</span>(<span style="background-color: PaleGreen; color: #000">y</span>) { <span style="background-color: PaleGreen; color: #000">baz(y)</span>; }</code>

在这个例子中，我们删除了一个函数并写了一个完全不同的函数。树状结构差异分析可能会匹配 `function` 和外部定界符，从而导致高亮许多令人困惑的小变化。

与滑块一样，替代问题也可能发生在基于文本的行差中。如果有少量的共同行，行差就会陷入困境。但树状结构差异分析的精确、细化行为会使这个问题更加普遍。

## 匹配注释中的子字符串

```
// Before
/* The quick brown fox. */
foobar();

// After
/* The slow brown fox. */
foobaz();
```

`foobar` 和 `foobaz` 完全不同，它们的共同前缀 `fooba` 不应该被匹配。然而，为注释匹配共同的前缀或后缀是可取的。

## 多行注释

```
// Before
/* Hello
 * World. */

// After
if (x) {
  /* Hello
   * World. */
}
```

这两个注释的内部内容在技术上是不同的。然而，我们期望把它们当作是相同的。

## 文档注释的换行

块状评论的前缀并没有什么意义。

```
// Before
/* The quick brown fox jumps 
 * over the lazy dog. */

// After
/* The quick brown fox immediately
 * jumps over the lazy dog. */
```

里面的内容已经从 `jumps * over` 变成了 `immediately * jumps over`。然而，`*` 是装饰性的，我们并不关心它的移动。

## 长字符串的小变化

```
// Before
"""A very long string
with lots of words about
lots of stuff."""

// After
"""A very long string
with lots of NOVEL words about
lots of stuff."""
```

将整个字符串字头高亮为被删除并被一个新的字符串字头取代是正确的。然而，这让人很难看出实际改变了什么。

很明显，变量名应该被元素化处理，并且注释是安全的，可以显示子字符串的变化。但不清楚如何处理一个 20 行字符串字面值的小变化。

在空格上分割字符串并加以区别很具有挑战性，但用户仍期望知道字符串内部的空白何时改变。`" "` 与 `"  "` 是不同的。

## 自动格式化工具的拼写

```
// Before
foo("looooong", "also looooong");

// Before
foo(
  "looooong",
  "novel",
  "also looooong",
);
```

自动格式化（例如 [Prettier](https://prettier.io/)）有时会在格式化时添加或删除标点符号，其中逗号和括号最常见。

语法差异可以忽略空白处的变化，但它必须假定标点符号有意义。这可能导致标点符号的变化被突出显示，而这可能与相关的内容变化相差甚远。

## 新空行

空行对于语法差异分析来说是一种挑战。我们要比较的是语法标记，所以我们不会看到空行。

```
// Before
A
B

// After
A

B
```

一般来说，我们期望语法差异能够忽略空行。在第一个例子中，这应该不会显示任何变化。

这有时是有问题的，因为它可以会意外地隐藏被重新格式化的代码。

```
// Before
A
B

// After
A
X

Y
B
```

在第二个例子中，我们插入了 X 和 Y 以及一个空行。我们想把空行作为一个补充来高亮。

```
// Before
A


B

// After
A
X
B
```

在第三个例子中，语法差异分析只看到了一个增加。从用户角度来看，也有两个空行被删除。

## 无效语法

我们不能保证我们得到的输入是有效的语法。即使代码是有效的，它也可能使用解析器不支持的语法。

**Difftastic**：如果发生任何解析错误，Difftastic 将退回到基于文本的差异，以避免差异不完整的语法树。发生这种情况时，文件头会报告错误计数。

```
$ difft sample_files/syntax_error_1.js sample_files/syntax_error_2.js
sample_files/syntax_error_after.js --- Text (2 errors, exceeded DFT_PARSE_ERROR_LIMIT)
...
```

用户可以选择通过将 `DFT_PARSE_ERROR_LIMIT` 设置为一个更大的值，加入语法差异分析。在这种模式下，Difftastic 会将树状差异分析的错误节点看作元素，并像通常一样进行树状差异分析。
