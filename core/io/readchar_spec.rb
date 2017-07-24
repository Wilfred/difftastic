require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#readchar" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "returns the next string from the stream" do
    @io.readchar.should == 'V'
    @io.readchar.should == 'o'
    @io.readchar.should == 'i'
    # read the rest of line
    @io.readline.should == "ci la ligne une.\n"
    @io.readchar.should == 'Q'
  end

  it "raises an EOFError when invoked at the end of the stream" do
    @io.read
    lambda { @io.readchar }.should raise_error(EOFError)
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.readchar }.should raise_error(IOError)
  end
end

describe "IO#readchar" do
  before :each do
    @io = IOSpecs.io_fixture "empty.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "raises EOFError on empty stream" do
    lambda { @io.readchar }.should raise_error(EOFError)
  end
end
