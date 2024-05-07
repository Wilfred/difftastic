local function func_one() end
--             ^ definition.function

func_one()
--  ^ reference.call

local func_two = function() end
--    ^ definition.function

func_two()
--  ^ reference.call

local tbl = {
  func_one = function() end,
  --  ^ definition.function
}

tbl.func_one()
--  ^ reference.call

function tbl.func_two() end
--           ^ definition.function

tbl.func_two()
--  ^ reference.call

function tbl:func_three() end
--           ^ definition.method

tbl:func_three()
--  ^ reference.call

tbl.func_four = function() end
--  ^ definition.function

tbl.func_four()
--  ^ reference.call
