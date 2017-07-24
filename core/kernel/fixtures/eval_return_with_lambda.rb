print "a,"
x = lambda do
  print "b,"
  Proc.new do
    print "c,"
    eval("return :eval")
    print "d,"
  end.call
  print "e,"
end.call
print x, ","
print "f"
