# Internals: Diffing

Difftastic treats diff calculations as a route finding problem on a
directed acyclic graph.

## Graph Representation

A vertex in the graph represents a position in two syntax trees.

The start vertex has both positions pointing to the first syntax node
in both trees. The end vertex has both positions just
after the last syntax node in both trees.

Consider comparing `A` with `X A`.

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

From the start vertex, we have two options:

* we can mark the first syntax node on the left as novel, and advance
  to the next syntax node on the left (vertex 1 above), or
* we can mark the first syntax node on the right as novel, and advance
  to the next syntax node on the right (vertex 2 above).

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
choice. From vertex 2, we can see three routes to the end vertex.

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

## Comparing Routes

We assign a cost to each edge. Marking a syntax node as novel is worse
than finding a matching syntax node, so the "novel atom" edge has a
higher cost than the "syntax nodes match" edge.

The best route is the lowest cost route from the start vertex to the
end vertex.

## Finding The Best Route

Difftastic uses Dijkstra's algorithm to find the best (i.e. lowest cost)
route.

One big advantage of this algorithm is that we don't need to construct
the graph in advance. Constructing the whole graph would require
exponential memory relative to the number of syntax nodes. Instead,
vertex neighbours are constructed as the graph is explored.

There are lots of resources explaining Dijkstra's algorithm online,
but I particularly recommend the [graph search section of Red Blob
Games](https://www.redblobgames.com/pathfinding/a-star/introduction.html#dijkstra).
