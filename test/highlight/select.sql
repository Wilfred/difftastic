SELECT a, b::INT;
-- <- keyword
--         ^ operator
--            ^ type

SELECT foo(a)
--      ^ function

SELECT foo(a)
FROM table1
-- <- keyword

SELECT foo(a)
FROM table1
WHERE a = b
-- <- keyword
--      ^ operator

SELECT foo(a)
FROM table1
GROUP BY a, b
-- <- keyword
--    ^ keyword
