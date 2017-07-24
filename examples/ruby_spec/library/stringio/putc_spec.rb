require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#putc when passed [String]" do
  before :each do
    @io = StringIO.new('example')
  end

  it "overwrites the character at the current position" do
    @io.putc("t")
    @io.string.should == "txample"

    @io.pos = 3
    @io.putc("t")
    @io.string.should == "txatple"
  end

  it "only writes the first character from the passed String" do
    @io.putc("test")
    @io.string.should == "txample"
  end

  it "returns the passed String" do
    str = "test"
    @io.putc(str).should equal(str)
  end

  it "correctly updates the current position" do
    @io.putc("t")
    @io.pos.should == 1

    @io.putc("test")
    @io.pos.should == 2

    @io.putc("t")
    @io.pos.should == 3
  end
end

describe "StringIO#putc when passed [Object]" do
  before :each do
    @io = StringIO.new('example')
  end

  it "it writes the passed Integer % 256 to self" do
    @io.putc(333) # 333 % 256 == ?M
    @io.string.should == "Mxample"

    @io.putc(-450) # -450 % 256 == ?>
    @io.string.should == "M>ample"
  end

  it "pads self with \\000 when the current position is after the end" do
    @io.pos = 10
    @io.putc(?A)
    @io.string.should == "example\000\000\000A"
  end

  it "tries to convert the passed argument to an Integer using #to_int" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(116)
    @io.putc(obj)
    @io.string.should == "txample"
  end

  it "raises a TypeError when the passed argument can't be coerced to Integer" do
    lambda { @io.putc(Object.new) }.should raise_error(TypeError)
  end
end

describe "StringIO#putc when in append mode" do
  it "appends to the end of self" do
    io = StringIO.new("test", "a")
    io.putc(?t)
    io.string.should == "testt"
  end
end

describe "StringIO#putc when self is not writable" do
  it "raises an IOError" do
    io = StringIO.new("test", "r")
    lambda { io.putc(?a) }.should raise_error(IOError)

    io = StringIO.new("test")
    io.close_write
    lambda { io.putc("t") }.should raise_error(IOError)
  end
end
