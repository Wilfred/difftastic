require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#string" do
  it "returns the underlying string" do
    io = StringIO.new(str = "hello")
    io.string.should equal(str)
  end
end

describe "StringIO#string=" do
  before :each do
    @io = StringIO.new("example\nstring")
  end

  it "returns the passed String" do
    str = "test"
    (@io.string = str).should equal(str)
  end

  it "changes the underlying string" do
    str = "hello"
    @io.string = str
    @io.string.should equal(str)
  end

  it "resets the position" do
    @io.pos = 1
    @io.string = "other"
    @io.pos.should eql(0)
  end

  it "resets the line number" do
    @io.lineno = 1
    @io.string = "other"
    @io.lineno.should eql(0)
  end

  it "tries to convert the passed Object to a String using #to_str" do
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return("to_str")

    @io.string = obj
    @io.string.should == "to_str"
  end

  it "raises a TypeError when the passed Object can't be converted to an Integer" do
    lambda { @io.seek(Object.new) }.should raise_error(TypeError)
  end
end
