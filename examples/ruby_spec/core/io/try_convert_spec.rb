require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO.try_convert" do
  before :each do
    @name = tmp("io_try_convert.txt")
    @io = new_io @name
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @name
  end

  it "returns the passed IO object" do
    IO.try_convert(@io).should equal(@io)
  end

  it "does not call #to_io on an IO instance" do
    @io.should_not_receive(:to_io)
    IO.try_convert(@io)
  end

  it "calls #to_io to coerce an object" do
    obj = mock("io")
    obj.should_receive(:to_io).and_return(@io)
    IO.try_convert(obj).should equal(@io)
  end

  it "returns nil when the passed object does not respond to #to_io" do
    IO.try_convert(mock("io")).should be_nil
  end

  it "return nil when BasicObject is passed" do
    IO.try_convert(BasicObject.new).should be_nil
  end

  it "raises a TypeError if the object does not return an IO from #to_io" do
    obj = mock("io")
    obj.should_receive(:to_io).and_return("io")
    lambda { IO.try_convert(obj) }.should raise_error(TypeError)
  end

  it "propagates an exception raised by #to_io" do
    obj = mock("io")
    obj.should_receive(:to_io).and_raise(TypeError.new)
    lambda{ IO.try_convert(obj) }.should raise_error(TypeError)
  end
end
