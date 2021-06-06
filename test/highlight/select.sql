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
from table1
-- <- keyword
where a = b
-- <- keyword
group by a, b
-- <- keyword
--    ^ keyword
order by lower(a), b
-- <- keyword
--    ^ keyword
