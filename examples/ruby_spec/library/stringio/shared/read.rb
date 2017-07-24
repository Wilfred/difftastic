describe :stringio_read, shared: true do
  before :each do
    @io = StringIO.new("example")
  end

  it "returns the passed buffer String" do
    # Note: Rubinius bug:
    # @io.send(@method, 7, buffer = "").should equal(buffer)
    ret = @io.send(@method, 7, buffer = "")
    ret.should equal(buffer)
  end

  it "reads length bytes and writes them to the buffer String" do
    @io.send(@method, 7, buffer = "")
    buffer.should == "example"
  end

  it "tries to convert the passed buffer Object to a String using #to_str" do
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return(buffer = "")

    @io.send(@method, 7, obj)
    buffer.should == "example"
  end

  it "raises a TypeError when the passed buffer Object can't be converted to a String" do
    lambda { @io.send(@method, 7, Object.new) }.should raise_error(TypeError)
  end

  it "raises an error when passed a frozen String as buffer" do
    lambda { @io.send(@method, 7, "".freeze) }.should raise_error(RuntimeError)
  end
end

describe :stringio_read_length, shared: true do
  before :each do
    @io = StringIO.new("example")
  end

  it "reads length bytes from the current position and returns them" do
    @io.pos = 3
    @io.send(@method, 4).should == "mple"
  end

  it "reads at most the whole content" do
    @io.send(@method, 999).should == "example"
  end

  it "correctly updates the position" do
    @io.send(@method, 3)
    @io.pos.should eql(3)

    @io.send(@method, 999)
    @io.pos.should eql(7)
  end

  it "tries to convert the passed length to an Integer using #to_int" do
    obj = mock("to_int")
    obj.should_receive(:to_int).and_return(7)
    @io.send(@method, obj).should == "example"
  end

  it "raises a TypeError when the passed length can't be converted to an Integer" do
    lambda { @io.send(@method, Object.new) }.should raise_error(TypeError)
  end

  it "raises a TypeError when the passed length is negative" do
    lambda { @io.send(@method, -2) }.should raise_error(ArgumentError)
  end

  it "returns a binary String" do
    @io.send(@method, 4).encoding.should == Encoding::ASCII_8BIT
  end
end

describe :stringio_read_no_arguments, shared: true do
  before :each do
    @io = StringIO.new("example")
  end

  it "reads the whole content starting from the current position" do
    @io.send(@method).should == "example"

    @io.pos = 3
    @io.send(@method).should == "mple"
  end

  it "correctly updates the current position" do
    @io.send(@method)
    @io.pos.should eql(7)
  end
end

describe :stringio_read_nil, shared: true do
  before :each do
    @io = StringIO.new("example")
  end

  it "returns the remaining content from the current position" do
    @io.send(@method, nil).should == "example"

    @io.pos = 4
    @io.send(@method, nil).should == "ple"
  end

  it "updates the current position" do
    @io.send(@method, nil)
    @io.pos.should eql(7)
  end
end

describe :stringio_read_not_readable, shared: true do
  it "raises an IOError" do
    io = StringIO.new("test", "w")
    lambda { io.send(@method) }.should raise_error(IOError)

    io = StringIO.new("test")
    io.close_read
    lambda { io.send(@method) }.should raise_error(IOError)
  end
end
