function test()
  print("testing")
  return 10
end

if test() == 20 then
  print("30")
end

local list = { "A", "B", "D" }
local table = { a = "A", b = "B", d = "D" }

for k, v in pairs(table) do
  print("k: "..k.." v: "..v)
end

