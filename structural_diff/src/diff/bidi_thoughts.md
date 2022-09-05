## Construction

Building a backwards version of the syntax with the same IDs allows us
to feed it to the existing `neighbours` logic.

## Joining Routes

This part is relatively straightforward, although care is needed when
we've already found the end before calculating the backwards route.

## Comparing Forwards and Backwards Nodes

This is hard.

```
forward start
 A
 A
^
|


backward start
 D
 D
  ^
  |
```

As far as forwards is concerned, the backwards node is (None, None),
but we're treating it as (Some D, Some D).

There is no guarantee that (Some D, Some D) is a node on the forward
route either.

## Converting Backwards Nodes

Either need a conversion after finding the route, or need a way of
tracking the equivalent forward node during backward route
construction.

## Converting Backwards Lists

Entering a list to compare children, worked example:

```
backwards pre entering list at end
bck: (Some L, Some L) parent: None
frw: (None, None) parent: None
(C)
(C)
  ^
  |

backwards post entering both lists at end
bck: (Some C, Some C) parent: L
frw: (None, None) parent: L
(C)
(C)
 ^
 |
```

Exiting a list, worked example:

```
backwards pre exiting list
bck: (None, None) parent: L
frw: (Some C, some C) parent: L
 (C)
 (C)
 ^
 |

backwards post exiting list
bck: (None, None) parent: None
frw: (some L, Some L) parent: None
 (C)
 (C)
^
|
```

Stepping over a list, worked example:

```
backwards pre stepping over lists at end
bck: (Some List, Some List) parent: None
frw: (None, None) parent: None
(C)
(C)
  ^
  |

backwards post stepping over lists at end
bck: (None, None) parent: None
frw: (Some L, Some L) parent: None
(C)
(C)
^
|
```

Stepping over atoms, worked example

```
backwards pre stepping over atoms at end
bck: (Some B, Some B)
frw: (None, None)
A B
A B
   ^
   |

backwards after stepping over atoms at end
bck: (Some A, Some A)
frw: (Some B, Some B)
A B
A B
 ^
 |
```

## Conversion Summary

It's just moving forward to the next sibling. The parent/level never
changes.

If the nodes are None, take the first node which has the same
parent. Use the first toplevel node if parent is None.
