describe "partially closable sockets", shared: true do
  it "if the write end is closed then the other side can read past EOF without blocking" do
    @s1.write("foo")
    @s1.close_write
    @s2.read("foo".size + 1).should == "foo"
  end

  it "closing the write end ensures that the other side can read until EOF" do
    @s1.write("hello world")
    @s1.close_write
    @s2.read.should == "hello world"
  end
end
