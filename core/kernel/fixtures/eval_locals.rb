begin
  eval("a = 2")
  eval("p a")
rescue Object => e
  puts e.class
end
