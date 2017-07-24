# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#readpartial" do
  before :each do
    @rd, @wr = IO.pipe
    @rd.binmode
    @wr.binmode
  end

  after :each do
    @rd.close unless @rd.closed?
    @wr.close unless @wr.closed?
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.readpartial(10) }.should raise_error(IOError)

    @rd.close
    lambda { @rd.readpartial(10) }.should raise_error(IOError)
  end

  it "reads at most the specified number of bytes" do
    @wr.write("foobar")

    # buffered read
    @rd.read(1).should == 'f'
    # return only specified number, not the whole buffer
    @rd.readpartial(1).should == "o"
  end

  it "reads after ungetc with data in the buffer" do
    @wr.write("foobar")
    c = @rd.getc
    @rd.ungetc(c)
    @rd.readpartial(3).should == "foo"
    @rd.readpartial(3).should == "bar"
  end

  it "reads after ungetc with multibyte characters in the buffer" do
    @wr.write("∂φ/∂x = gaîté")
    c = @rd.getc
    @rd.ungetc(c)
    @rd.readpartial(3).should == "\xE2\x88\x82"
    @rd.readpartial(3).should == "\xCF\x86/"
  end

  it "reads after ungetc without data in the buffer" do
    @wr.write("f")
    c = @rd.getc
    @rd.ungetc(c)
    @rd.readpartial(2).should == "f"

    # now, also check that the ungot char is cleared and
    # not returned again
    @wr.write("b")
    @rd.readpartial(2).should == "b"
  end

  it "discards the existing buffer content upon successful read" do
    buffer = "existing"
    @wr.write("hello world")
    @wr.close
    @rd.readpartial(11, buffer)
    buffer.should == "hello world"
  end

  it "raises EOFError on EOF" do
    @wr.write("abc")
    @wr.close
    @rd.readpartial(10).should == 'abc'
    lambda { @rd.readpartial(10) }.should raise_error(EOFError)
  end

  it "discards the existing buffer content upon error" do
    buffer = 'hello'
    @wr.close
    lambda { @rd.readpartial(1, buffer) }.should raise_error(EOFError)
    buffer.should be_empty
  end

  it "raises IOError if the stream is closed" do
    @wr.close
    lambda { @rd.readpartial(1) }.should raise_error(IOError)
  end

  it "raises ArgumentError if the negative argument is provided" do
    lambda { @rd.readpartial(-1) }.should raise_error(ArgumentError)
  end

  it "immediately returns an empty string if the length argument is 0" do
    @rd.readpartial(0).should == ""
  end

end
