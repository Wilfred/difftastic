# Diffing差异分析

Difftastic treats diff calculations as a route finding problem on a
directed acyclic graph.Difftastic将diff计算视作为有向无环图上的寻路问题。

## Graph Representation图表示

A vertex in the graph represents a position in two syntax trees.图中的一个顶点代表两个语法树中的一个位置。

The start vertex has both positions pointing to the first syntax node
in both trees. The end vertex has both positions just
after the last syntax node in both trees.开始顶点的两个位置都指向两个树的第一个语法节点。结束顶点的两个位置都正好在两棵语法树的最后一个节点之后。

Consider comparing `A` with `X A`.以`A`和`X A`比较为例：

```
START
+---------------------+
| Left: A  Right: X A |
|       ^         ^   |
+---------------------+

END
+---------------------+
| Left: A  Right: X A |
|        ^           ^|
+---------------------+
```

From the start vertex, we have two options:从起始顶点开始，我们有两个选择：

* we can mark the first syntax node on the left as novel, and advance
  to the next syntax node on the left (vertex 1 above), or我们可以将左边的第一个语法节点标记为注意项，并推进到左边的下一个语法节点（即上面的顶点1）。
* we can mark the first syntax  node on the right as novel, and advance
  to the next syntax node on the right (vertex 2 above).我们可以将右边的第一个语法节点标记为注意项，并推进到右边的下一个语法节点上（即上面的顶点2）。

```
            START
            +---------------------+
            | Left: A  Right: X A |
            |       ^         ^   |
            +---------------------+
                   /       \
     Novel atom L /         \ Novel atom R
1                v       2   v
+---------------------+  +---------------------+
| Left: A  Right: X A |  | Left: A  Right: X A |
|        ^        ^   |  |       ^           ^ |
+---------------------+  +---------------------+
```


Choosing "novel atom R" to vertex 2 will turn out to be the best
choice. From vertex 2, we can see three routes to the end vertex.选择"新原子R"到顶点2将是最佳选择。从顶点2，我们可以看到有三条路线通往终点。

```
            2
            +---------------------+
            | Left: A  Right: X A |
            |       ^           ^ |
            +---------------------+
                   /    |   \
     Novel atom L /     |    \ Novel atom R
                 v      |     v
+---------------------+ | +---------------------+
| Left: A  Right: X A | | | Left: A  Right: X A |
|        ^          ^ | | |       ^            ^|
+---------------------+ | +---------------------+
  |                     |                    |
  | Novel atom R        | Nodes match        | Novel atom L
  |                     |                    |
  |         END         v                    |
  |         +---------------------+          |
  +-------->| Left: A  Right: X A |<---------+
            |        ^           ^|
            +---------------------+
```

## Comparing Routes比较路线

We assign a cost to each edge. Marking a syntax node as novel is worse
than finding a matching syntax node, so the "novel atom" edge has a
higher cost than the "syntax nodes match" edge.我们给每条边分配一个成本。将一个语法节点标记为新奇，比找到一个匹配的语法节点更糟糕，因此"新奇原子"边的成本比"语法节点匹配"边更高。

The best route is the lowest cost route from the start vertex to the
end vertex.最佳路线是指从起始顶点到终端顶点成本最低的路线。

## Finding The Best Route寻找最佳路线

Difftastic uses Dijkstra's algorithm to find the best (i.e. lowest cost)
route.Difftastic使用Dijkstra算法来寻找最佳（或称最低成本）的路线。

One big advantage of this algorithm is that we don't need to construct
the graph in advance. Constructing the whole graph would require
exponential memory relative to the number of syntax nodes. Instead,
vertex neighbours are constructed as the graph is explored.这种算法的一大优势是，我们不需要事先构建图。相对于语法节点的数量，构建整个图需要指数级的内存。相反顶点的邻居是在探索图的过程中构建的。

There are lots of resources explaining Dijkstra's algorithm online,
but I particularly recommend the [graph search section of Red Blob
Games](https://www.redblobgames.com/pathfinding/a-star/introduction.html#dijkstra).网上有很多解释Dijkstra的算法，但我特别推荐[Red
 Blod Games的图搜索部分](https://www.redblobgames.com/pathfinding/a-star/introduction.html#dijkstra)。
