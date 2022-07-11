-- Example select query
SELECT foo, bar, t.col1 AS baz
FROM table1, table2 AS t
WHERE foo > t.col1
GROUP BY lower(foo);

-- Example nested select query
SELECT t.a, (SELECT 1) AS baz, (SELECT 2)
FROM table1, (SELECT a FROM foo WHERE b > 100) AS t;
