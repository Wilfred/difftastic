print "a,"

print lambda {
  print "b,"
  break "break,"
  print "c,"
}.call

puts "d"
