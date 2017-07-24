print "a,"

l = lambda {
  print "b,"
  break "break,"
  print "c,"
}

def a(l)
  print "d,"
  b { l.call }
  print "e,"
end

def b
  print "f,"
  print yield
  print "g,"
end

a(l)

puts "h"
