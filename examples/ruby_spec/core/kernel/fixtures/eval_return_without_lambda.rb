print "a,"
begin
  print "b,"
  x = Proc.new do
    print "c,"
    eval("return :eval")
    print "d,"
  end.call
  print x, ","
rescue LocalJumpError => e
  print "e,"
  print e.class, ","
end
print "f"
