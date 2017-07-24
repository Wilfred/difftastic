print "a,"

l = lambda {
  print "b,"
  break "break,"
  print "c,"
}

def a(l)
  print "d,"
  print l.call
  print "e,"
end

a(l)

puts "f"
