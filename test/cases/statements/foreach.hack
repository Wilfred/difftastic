foreach ($c as $v) {}

foreach (varray[] as $k => $v[0]) {}

foreach (darray<int, int>[] as list($a[vec[] as int[0]], $b)) {}

// HHVM can't parse an as-expression in the collection position, but
// tree-sitter-hack can 💪. Commenting out because bin/test-corpus runs tests for both.
// foreach (darray<int, int>[] as dict<int, int> as $v) {}
