-- stylua: ignore start

local _

_ = "x"
--   ^ string

_ = 'x'
--   ^ string

_ = "x\ty"
--   ^ string
--    ^ string.escape
--     ^ string.escape
--      ^ string

_ = "x\"y"
--   ^ string
--    ^ string.escape
--     ^ string.escape
--      ^ string

_ = 'x\'y'
--   ^ string
--    ^ string.escape
--     ^ string.escape
--      ^ string

_ = "x\z
    y"
--  ^ string
--<- string.escape

_ = "x\x5Ay"
--     ^ string.escape
--      ^ string.escape

_ = "x\0900y"
--       ^ string.escape
--        ^ string

_ = "x\09y"
--      ^ string.escape
--       ^ string

_ = "x\0y"
--     ^ string.escape
--      ^ string

_ = "x\u{1f602}y"
--     ^ string.escape
--         ^ string.escape
--             ^ string

_ = [[x]]
--    ^ string

_ = [=[x]=]
--     ^ string
