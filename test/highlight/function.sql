CREATE FUNCTION add(integer, integer) RETURNS integer
-- <- keyword
--     ^ keyword
--                  ^ type
--                           ^ type
--                                    ^ keyword
--                                            ^ type
AS 'select $1 + $2;'
-- <- keyword
LANGUAGE SQL;
-- <- keyword

CREATE OR REPLACE FUNCTION add(integer, integer) RETURNS integer
-- <- keyword
--     ^ keyword
--           ^ keyword
--                              ^ type
--                                                 ^ keyword
--                                                        ^ type
AS 'select $1 + $2;'
-- <- keyword
LANGUAGE SQL;
-- <- keyword
