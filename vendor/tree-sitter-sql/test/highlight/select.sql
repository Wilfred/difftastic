SELECT a, b::INT;
-- <- keyword
--         ^ operator
--            ^ type.builtin

SELECT a, b  ::  INT;
--           ^ operator
--               ^ type.builtin
--        ^ variable

SELECT foo(a)
-- <- keyword
--      ^ function
FROM table1
-- <- keyword
LEFT JOIN table2 ON table1.a = table2.a
-- <- keyword
--    ^ keyword
--               ^ keyword
WHERE a = b
-- <- keyword
--      ^ operator
GROUP BY a, b
-- <- keyword
--    ^ keyword
ORDER BY lower(a), b
-- <- keyword
--    ^ keyword
--        ^ function
select a, b::int;
-- <- keyword
--            ^ type.builtin
from table1
-- <- keyword
where a = b
-- <- keyword
group by a, b
-- <- keyword
--    ^ keyword
order by lower(a), b;
-- <- keyword
--    ^ keyword

SELECT (SELECT 1), a
-- <- keyword
--         ^ keyword
--             ^ number
FROM (SELECT a FROM table) AS b;
-- <- keyword
--     ^ keyword
--             ^ keyword  
--                         ^ keyword  

SELECT a, b
FROM a
ORDER    by a, b
-- <- keyword
--       ^ keyword
GrOUP
-- <- keyword
By a, b
-- <- keyword

SELECT $$a$$, $a$baz$a$, $a$$$$a$, $a$b$$a$;
-- <- keyword
--       ^ string
--              ^ string
--                          ^ string
--                                    ^ string
