require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#close_read" do
  before :each do
    @io = StringIO.new("example")
  end

  it "returns nil" do
    @io.close_read.should be_nil
  end

  it "prevents further reading" do
    @io.close_read
    lambda { @io.read(1) }.should raise_error(IOError)
  end

  it "allows further writing" do
    @io.close_read
    @io.write("x").should == 1
  end

  it "raises an IOError when in write-only mode" do
    io = StringIO.new("example", "w")
    lambda { io.close_read }.should raise_error(IOError)

    io = StringIO.new("example")
    io.close_read
    ruby_version_is ''...'2.3' do
      lambda { io.close_read }.should raise_error(IOError)
    end
    ruby_version_is '2.3' do
      io.close_read.should == nil
    end
  end
end
