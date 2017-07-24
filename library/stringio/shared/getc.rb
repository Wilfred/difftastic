describe :stringio_getc, shared: true do
  before :each do
    @io = StringIO.new("example")
  end

  it "increases self's position by one" do
    @io.send(@method)
    @io.pos.should eql(1)

    @io.send(@method)
    @io.pos.should eql(2)

    @io.send(@method)
    @io.pos.should eql(3)
  end

  it "returns nil when called at the end of self" do
    @io.pos = 7
    @io.send(@method).should be_nil
    @io.send(@method).should be_nil
    @io.send(@method).should be_nil
  end

  it "does not increase self's position when called at the end of file" do
    @io.pos = 7
    @io.send(@method)
    @io.pos.should eql(7)

    @io.send(@method)
    @io.pos.should eql(7)
  end
end

describe :stringio_getc_not_readable, shared: true do
  it "raises an IOError" do
    io = StringIO.new("xyz", "w")
    lambda { io.send(@method) }.should raise_error(IOError)

    io = StringIO.new("xyz")
    io.close_read
    lambda { io.send(@method) }.should raise_error(IOError)
  end
end
