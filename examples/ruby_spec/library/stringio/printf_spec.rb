require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#printf" do
  before :each do
    @io = StringIO.new('example')
  end

  it "returns nil" do
    @io.printf("%d %04x", 123, 123).should be_nil
  end

  it "pads self with \\000 when the current position is after the end" do
    @io.pos = 10
    @io.printf("%d", 123)
    @io.string.should == "example\000\000\000123"
  end

  it "performs format conversion" do
    @io.printf("%d %04x", 123, 123)
    @io.string.should == "123 007b"
  end

  it "updates the current position" do
    @io.printf("%d %04x", 123, 123)
    @io.pos.should eql(8)

    @io.printf("%d %04x", 123, 123)
    @io.pos.should eql(16)
  end
end

describe "StringIO#printf when in append mode" do
  before :each do
    @io = StringIO.new("example", "a")
  end

  it "appends the passed argument to the end of self" do
    @io.printf("%d %04x", 123, 123)
    @io.string.should == "example123 007b"

    @io.printf("%d %04x", 123, 123)
    @io.string.should == "example123 007b123 007b"
  end

  it "correctly updates self's position" do
    @io.printf("%d %04x", 123, 123)
    @io.pos.should eql(15)
  end
end

describe "StringIO#printf when self is not writable" do
  it "raises an IOError" do
    io = StringIO.new("test", "r")
    lambda { io.printf("test") }.should raise_error(IOError)

    io = StringIO.new("test")
    io.close_write
    lambda { io.printf("test") }.should raise_error(IOError)
  end
end
