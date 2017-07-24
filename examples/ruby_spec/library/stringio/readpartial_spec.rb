require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#readpartial" do
  before :each do
    @string = StringIO.new('Stop, look, listen')
  end

  after :each do
    @string.close unless @string.closed?
  end

  it "raises IOError on closed stream" do
    @string.close
    lambda { @string.readpartial(10) }.should raise_error(IOError)
  end

  it "reads at most the specified number of bytes" do

    # buffered read
    @string.read(1).should == 'S'
    # return only specified number, not the whole buffer
    @string.readpartial(1).should == "t"
  end

  it "reads after ungetc with data in the buffer" do
    c = @string.getc
    @string.ungetc(c)
    @string.readpartial(4).should == "Stop"
    @string.readpartial(3).should == ", l"
  end

  it "reads after ungetc without data in the buffer" do
    @string = StringIO.new
    @string.write("f").should == 1
    @string.rewind
    c = @string.getc
    c.should == 'f'
    @string.ungetc(c).should == nil

    @string.readpartial(2).should == "f"
    @string.rewind
    # now, also check that the ungot char is cleared and
    # not returned again
    @string.write("b").should == 1
    @string.rewind
    @string.readpartial(2).should == "b"
  end

  it "discards the existing buffer content upon successful read" do
    buffer = "existing"
    @string.readpartial(11, buffer)
    buffer.should == "Stop, look,"
  end

  it "raises EOFError on EOF" do
    @string.readpartial(18).should == 'Stop, look, listen'
    lambda { @string.readpartial(10) }.should raise_error(EOFError)
  end

  it "discards the existing buffer content upon error" do
    buffer = 'hello'
    @string.readpartial(100)
    lambda { @string.readpartial(1, buffer) }.should raise_error(EOFError)
    buffer.should be_empty
  end

  it "raises IOError if the stream is closed" do
    @string.close
    lambda { @string.readpartial(1) }.should raise_error(IOError)
  end

  it "raises ArgumentError if the negative argument is provided" do
    lambda { @string.readpartial(-1) }.should raise_error(ArgumentError)
  end

  it "immediately returns an empty string if the length argument is 0" do
    @string.readpartial(0).should == ""
  end
end
