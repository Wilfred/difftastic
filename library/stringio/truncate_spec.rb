require File.expand_path('../../../spec_helper', __FILE__)
require "stringio"

describe "StringIO#truncate when passed [length]" do
  before :each do
    @io = StringIO.new('123456789')
  end

  # TODO: Report to Ruby-Core: The RDoc says it always returns 0
  it "returns the passed length" do
    @io.truncate(4).should eql(4)
    @io.truncate(10).should eql(10)
  end

  it "truncated the underlying string down to the passed length" do
    @io.truncate(4)
    @io.string.should == "1234"
  end

  it "does not create a copy of the underlying string" do
    io = StringIO.new(str = "123456789")
    io.truncate(4)
    io.string.should equal(str)
  end

  it "does not change the position" do
    @io.pos = 7
    @io.truncate(4)
    @io.pos.should eql(7)
  end

  it "can grow a string to a larger size, padding it with \\000" do
    @io.truncate(12)
    @io.string.should == "123456789\000\000\000"
  end

  it "raises an Errno::EINVAL when the passed length is negative" do
    lambda { @io.truncate(-1) }.should raise_error(Errno::EINVAL)
    lambda { @io.truncate(-10) }.should raise_error(Errno::EINVAL)
  end

  it "tries to convert the passed length to an Integer using #to_int" do
    obj = mock("to_int")
    obj.should_receive(:to_int).and_return(4)

    @io.truncate(obj)
    @io.string.should == "1234"
  end

  it "returns the passed length Object, NOT the result of #to_int" do
    obj = mock("to_int")
    obj.should_receive(:to_int).and_return(4)
    @io.truncate(obj).should equal(obj)
  end

  it "raises a TypeError when the passed length can't be converted to an Integer" do
    lambda { @io.truncate(Object.new) }.should raise_error(TypeError)
  end
end

describe "StringIO#truncate when self is not writable" do
  it "raises an IOError" do
    io = StringIO.new("test", "r")
    lambda { io.truncate(2) }.should raise_error(IOError)

    io = StringIO.new("test")
    io.close_write
    lambda { io.truncate(2) }.should raise_error(IOError)
  end
end
