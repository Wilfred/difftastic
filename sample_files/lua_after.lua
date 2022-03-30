function test(name)
  print("testing"..name)
  return 10
end

if test("myname") == 20 then
  print("20")
end

local list = { "A", "B", "C", "D" }
local table = { a = "A", b = "B", c = "C", d = "D" }

for k, v in pairs(table) do
  print("k: "..k.." v: "..v)
end

