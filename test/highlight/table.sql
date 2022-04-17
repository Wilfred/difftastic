CREATE TABLE accounts (
-- <- keyword
---    ^ keyword
---          ^ variable
user_id serial PRIMARY KEY,
-- <- variable
--        ^ type.builtin
--               ^ keyword
--                    ^ keyword
username VARCHAR UNIQUE NOT NULL,
-- <- variable
--       ^ type.builtin
--               ^ keyword
--                      ^ keyword
--                           ^ constant.builtin
password VARCHAR NOT NULL,
-- <- variable
--       ^ type.builtin
--               ^ keyword
--                   ^ constant.builtin
email VARCHAR UNIQUE NOT NULL,
-- <- variable
--    ^ type.builtin
--            ^ keyword
--                   ^ keyword
--                       ^ constant.builtin
created_on TIMESTAMP NOT NULL,
-- <- variable
--         ^ type.builtin
--                   ^ keyword
--                       ^ constant.builtin
last_login TIMESTAMP,
-- <- variable
--         ^ type.builtin
created_at TIMESTAMP WITH TIME ZONE,
--                   ^ keyword
--                        ^ keyword
--                             ^ keyword
updated_at TIMESTAMP WITHOUT TIME ZONE
--                   ^ keyword
--                           ^ keyword
--                                ^ keyword
);
