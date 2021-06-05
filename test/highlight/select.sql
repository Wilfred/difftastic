SELECT a, b::INT;
-- <- keyword
--         ^ operator
--            ^ type

SELECT foo(a)
-- <- keyword
--      ^ function
FROM table1
-- <- keyword
WHERE a = b
--      ^ operator
GROUP BY a, b
-- <- keyword
--    ^ keyword
ORDER BY lower(a), b
-- <- keyword
--    ^ keyword
--        ^ function
