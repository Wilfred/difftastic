# 棘手的例子

在某些情况下，树状图的差异分析是具有挑战性的。本页展示了在开发过程中所观察到的困难情况。

并非所有这些情况在Difftastic中都能很好地工作。

## 添加定界符

```
;; Before
x

;; After
(x)
```

理想输出: <code><span style="background-color: PaleGreen; color: #000">(</span>x<span style="background-color: PaleGreen; color: #000">)</span></code>

这个是十分棘手，因为`x`已经改变了它在树中的深度，但`x`本身却未发生改变。

并不是所有的树形差异分析算法可以处理这个例子。同时仔细地展示出范例是具有挑战性的：我们希望去高亮出已改变的定界符，但不是他们的内容。这同样在更大的表达式是具有挑战性的。

## 改变定界符

```
;; Before
(x)

;; After
[x]
```

正如这个包裹的例子，我们想要去高亮出定界符而不是`x`这个内容。

## 拓展定界符

```
;; Before
(x) y

;; After
(x y)
```

理想输出：<code>(x <span style="background-color: PaleGreen; color: #000">y</span>)</code>

在这个例子下，我们想要去高亮`y`。高亮显示定界符的话可能会让`x`看起来有所变化。

## 缩小定界符

```
;; Before
(x y)

;; After
(x) y
```

这应该与扩展定界符的情况类似，去高亮定界符。

## 使定界符不连贯

```
;; Before
(foo (bar))

;; After
(foo (novel) (bar))
```

理想输出：<code>(foo <span style="background-color:PaleGreen; color: #000">(novel)</span> (bar)</code>

很容易会变成：<code>(foo (<span style="background-color:PaleGreen; color: #000">novel</span>) <span style="background-color:PaleGreen; color: #000">(</span>bar<span style="background-color:PaleGreen; color: #000">)</span>)</code>,
其中后一组的定界符会被选中。

## 重新组织大节点

```
;; Before
[[foo]]
(x y)

;; After
([[foo]] x y)
```

我们想高亮`[[foo]]`被移到括号内了。然而，一个简单的语法差异者更倾向于认为在前面删除`()`，在后面增加`()`，是最小的差异表现。
(见[issue 44](https://github.com/Wilfred/difftastic/issues/44)。)

## 在列表内重新排列

```
;; Before
(x y)

;; After
(y x)
```

理想输出：<code>(<span style="background-color: PaleGreen; color: #000">y</span> <span style="background-color: PaleGreen; color: #000">x</span>)</code>

我们想突出显示列表的内容，而不是定界符。

## 中间插入

```
// Before
foo(bar(123))

// After
foo(extra(bar(123)))
```

理想输出：<code>foo(<span style="background-color: PaleGreen; color: #000">extra(</span>bar(123)<span style="background-color: PaleGreen; color: #000">)</span>)</code>

我们想把`foo`和`bar`都看作是不变的。这种情况对于对树进行自下而上然后自上而下匹配的衍合算法来说是具有挑战性的。

## 滑块（平移）

在基于文本的差异分析中，滑块是一个常见的问题，即行与行之间以混乱的方式进行匹配。

它们通常看起来像这样。差异分析必须任意选择一个包含分隔符的行，但它选择了错误的行。

```
+ }
+
+ function foo () {
  }
```

git-diff有一些启发式方法来减少这种风险（比如说"patience diff"），但这个问题仍然可能发生。

接下来是一个在树状差异分析时常见的问题。

```
;; Before
A B
C D

;; After
A B
A B
C D
```

理想情况下，我们更愿意将连续的节点标记为新的，所以我们强调`A B`而不是`B/nA`。从最长公序算法的角度来看，这两种选择是等价的。

## 滑块（嵌套）

```
// Before
old1(old2)

// After
old1(new1(old2))
```

这个应该是 <code>old1(<span style="background-color: PaleGreen; color: #000">new1(</span>old2<span style="background-color: PaleGreen; color: #000">)</span>)</code> 还是
<code>old1<span style="background-color: PaleGreen; color: #000">(new1</span>(old2)<span style="background-color: PaleGreen; color: #000">)</span></code>?

正确的答案是取决于语言。大多数语言希望优先使用内部分隔符，而Lisps和JSON则喜欢使用外部分隔符。

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

我们认为`foo(123)`还是`foo(456)`与`foo(789)`匹配？
Difftastic优先考虑`foo(456)`，通过优先考虑相同嵌套深度的节点。

## 有少量相似处的替代做法

```
// Before
function foo(x) { return x + 1; }

// After
function bar(y) { baz(y); }
```

在这个例子中，我们删除了一个函数，写了一个完全不同的函数。基于树状结构的差异可能会匹配 "函数 "和外部定界符，从而导致显示出许多令人困惑的小的变化。

与滑块一样，替换问题也可能发生在基于文本的行差中。如果有少量的共同行，行差就会陷入困境。但树形差分的更精确、更细化的行为使这个问题更加普遍。

## 匹配注释中的子字符串

```
// Before
/* The quick brown fox. */
foobar();

// After
/* The slow brown fox. */
foobaz();
```

`foobar`和`foobaz`是完全不同的，它们的共同前缀`fooba`不应该被匹配起来。然而，为注释匹配共同的前缀或后缀是可取的。

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

这两个注释的内部内容在技术上是不同的。然而，我们想把它们当作是相同的。

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

里面的内容已经从 `jumps * over`变成了`immediately * jumps over`。然而，`*`是装饰性的，我们并不关心它的移动。

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

将整个字符串字头突出显示为被删除并被一个新的字符串字头取代是正确的。然而，这让人很难看出实际改变了什么。

很明显，变量名应该被原子化处理，并且 注释是安全的，可以显示子字的变化。但不清楚如何处理一个20行字符串字面的小变化。

在空格上分割字符串并加以区别是很具有挑战的，但用户仍然想知道字符串内部的空白何时改变。`" "`和`"  "`是不一样的。

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

自动格式化（例如[prettier](https://prettier.io/)）有时会在格式化时添加或删除标点符号。逗号和括号是最常见的。

语法差异可以忽略空白处的变化，但它必须假设标点符号是有意义的。这可能导致标点符号的变化被突出显示，而这可能与相关的内容变化相差甚远。

## 新空行

空行对于句法差异来说是一种挑战。我们要比较的是语法标记，所以我们不会看到空行。

```
// Before
A
B

// After
A

B
```

一般来说，我们希望语法差异能够忽略空行。在第一个例子中，这应该不会显示任何变化。

这有时是有问题的，因为它可以会意外地隐藏被重新格式化地代码。

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

在这第二个例子中，我们插入了X和Y以及一个空行。我们想把空行作为一个补充来高亮。

```
// Before
A


B

// After
A
X
B
```

在这第三个例子中，语法上的差异只看到了一个增加。从用户的角度来看，也有两个空行被删除。

## 无效语法

我们不能保证我们得到的输入是有效的语法。即使代码是有效的，它也可能使用解析器不支持的语法。

Tree-sitter可以显示出显式的错误节点，而Difftastic会将它们视为原子，因此它可以不顾一切地运行相同的树形差异算法。
