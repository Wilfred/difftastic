require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#rewind" do
  before :each do
    @io = StringIO.new("hello\nworld")
    @io.pos = 3
    @io.lineno = 1
  end

  it "returns 0" do
    @io.rewind.should eql(0)
  end

  it "resets the position" do
    @io.rewind
    @io.pos.should == 0
  end

  it "resets the line number" do
    @io.rewind
    @io.lineno.should == 0
  end
end
