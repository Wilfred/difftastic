CREATE SCHEMA information_schema;
-- <- keyword
--     ^ keyword
--            ^ variable
CREATE SCHEMA IF NOT EXISTS information_schema;
-- <- keyword
--     ^ keyword
--            ^ keyword
--               ^ keyword
--                   ^ keyword
GRANT USAGE ON SCHEMA information_schema TO PUBLIC;
-- <- keyword
--    ^ keyword
--          ^ keyword
--             ^ keyword
--                     ^ variable
--                                       ^ keyword
--                                          ^ keyword
SET LOCAL search_path TO 'test';
-- <- keyword
--  ^ keyword
--         ^ variable
--                     ^ keyword
--                        ^ string
SET SESSION search_path TO 'test';
-- <- keyword
--  ^ keyword
--          ^ variable
--                      ^ keyword
--                          ^ string
