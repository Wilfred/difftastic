describe :strscan_concat, shared: true do
  it "concatenates the given argument to self and returns self" do
    s = StringScanner.new("hello ")
    s.send(@method, 'world').should == s
    s.string.should == "hello world"
    s.eos?.should be_false
  end

  it "raises a TypeError if the given argument can't be converted to a String" do
    lambda { StringScanner.new('hello').send(@method, :world)    }.should raise_error(TypeError)
    lambda { StringScanner.new('hello').send(@method, mock('x')) }.should raise_error(TypeError)
  end
end

describe :strscan_concat_fixnum, shared: true do
  it "raises a TypeError" do
    a = StringScanner.new("hello world")
    lambda { a.send(@method, 333) }.should raise_error(TypeError)
    b = StringScanner.new("")
    lambda { b.send(@method, (256 * 3 + 64)) }.should raise_error(TypeError)
    lambda { b.send(@method, -200)           }.should raise_error(TypeError)
  end

  it "doesn't call to_int on the argument" do
    x = mock('x')
    x.should_not_receive(:to_int)

    lambda { "".send(@method, x) }.should raise_error(TypeError)
  end
end
