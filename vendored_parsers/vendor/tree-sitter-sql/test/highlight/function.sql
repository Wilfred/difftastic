CREATE FUNCTION add(integer, integer) RETURNS integer
-- <- keyword
--     ^ keyword
--                  ^ type.builtin
--                           ^ type.builtin
--                                    ^ keyword
--                                            ^ type.builtin
AS 'select $1 + $2;'
-- <- keyword
LANGUAGE SQL;
-- <- keyword

CREATE OR REPLACE FUNCTION add(integer, integer) RETURNS integer
-- <- keyword
--     ^ keyword
--           ^ keyword
--                              ^ type.builtin
--                                                 ^ keyword
--                                                        ^ type.builtin
AS 'select $1 + $2;'
-- <- keyword
LANGUAGE SQL;
-- <- keyword
