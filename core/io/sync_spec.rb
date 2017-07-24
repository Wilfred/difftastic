require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#sync=" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "sets the sync mode to true or false" do
    @io.sync = true
    @io.sync.should == true
    @io.sync = false
    @io.sync.should == false
  end

  it "accepts non-boolean arguments" do
    @io.sync = 10
    @io.sync.should == true
    @io.sync = nil
    @io.sync.should == false
    @io.sync = Object.new
    @io.sync.should == true
  end

  it "raises an IOError on closed stream" do
    lambda { IOSpecs.closed_io.sync = true }.should raise_error(IOError)
  end
end

describe "IO#sync" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "returns the current sync mode" do
    @io.sync.should == false
  end

  it "raises an IOError on closed stream" do
    lambda { IOSpecs.closed_io.sync }.should raise_error(IOError)
  end
end

describe "IO#sync" do
  it "is false by default for STDIN" do
    STDIN.sync.should == false
  end

  it "is false by default for STDOUT" do
    STDOUT.sync.should == false
  end

  it "is true by default for STDERR" do
    STDERR.sync.should == true
  end
end
