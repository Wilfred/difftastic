require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#binmode" do
  before :each do
    @name = tmp("io_binmode.txt")
  end

  after :each do
    @io.close if @io and !@io.closed?
    rm_r @name
  end

  it "returns self" do
    @io = new_io(@name)
    @io.binmode.should equal(@io)
  end

  it "raises an IOError on closed stream" do
    lambda { IOSpecs.closed_io.binmode }.should raise_error(IOError)
  end

  it "sets external encoding to binary" do
    @io = new_io(@name, "w:utf-8")
    @io.binmode
    @io.external_encoding.should == Encoding::BINARY
  end

  it "sets internal encoding to nil" do
    @io = new_io(@name, "w:utf-8:ISO-8859-1")
    @io.binmode
    @io.internal_encoding.should == nil
  end
end

describe "IO#binmode?" do
  before :each do
    @filename = tmp("IO_binmode_file")
    @file = File.open(@filename, "w")
    @duped = nil
  end

  after :each do
    @duped.close if @duped
    @file.close
    rm_r @filename
  end

  it "is true after a call to IO#binmode" do
    @file.binmode?.should be_false
    @file.binmode
    @file.binmode?.should be_true
  end

  it "propagates to dup'ed IO objects" do
    @file.binmode
    @duped = @file.dup
    @duped.binmode?.should == @file.binmode?
  end
end
