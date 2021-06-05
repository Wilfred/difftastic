SELECT foo, bar, t.col1 AS baz
FROM table1, table2 AS t
WHERE foo != t.col1
