# frozen_string_literal: true
a = 'string'
b = a
c = b
d = c
e = d
begin
  a << 'new part'
rescue Exception => e
  print e.message
end
