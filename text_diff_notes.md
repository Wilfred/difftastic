Consider changing:

```
foo();
bar();
```

To:

```
if (true) {
  foo();
}
```

What we want:

```
+ if (true) {
   foo();
-  bar();
+ }
```

A longest-common-subsequence algorithm is wrong here. The longest
subsequence is five tokens:

```
( ) ( ) ;
```

which leads to:

```
+if+ (+true+) +{+
   +foo+();
    -bar-();
+}+
```

so we claim `foo` is added. We want the following *four* tokens to be
preserved:

```
foo ( ) ;
```

Proposed solution: advance on both sides, keep first match.
