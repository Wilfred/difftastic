UPDATE table1 SET foo = 1
-- <- keyword
--      ^ variable
--             ^ keyword
--                 ^ variable
--                    ^ operator
--                      ^ number
WHERE foo > t.col1;
-- <- keyword
--     ^ variable
--        ^ operator
--             ^ variable
