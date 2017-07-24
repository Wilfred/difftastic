require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#eof?" do
  before :each do
    @name = tmp("empty.txt")
    touch @name
  end

  after :each do
    rm_r @name
  end

  it "returns true on an empty stream that has just been opened" do
    File.open(@name) { |empty| empty.eof?.should == true }
  end

  it "raises IOError on stream not opened for reading" do
    lambda do
      File.open(@name, "w") { |f| f.eof? }
    end.should raise_error(IOError)
  end
end

describe "IO#eof?" do
  before :each do
    @name = fixture __FILE__, "lines.txt"
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io && !@io.closed?
  end

  it "returns false when not at end of file" do
    @io.read 1
    @io.eof?.should == false
  end

  it "returns true after reading with read with no parameters" do
    @io.read()
    @io.eof?.should == true
  end

  it "returns true after reading with read" do
    @io.read(File.size(@name))
    @io.eof?.should == true
  end

  it "returns true after reading with sysread" do
    @io.sysread(File.size(@name))
    @io.eof?.should == true
  end

  it "returns true after reading with readlines" do
    @io.readlines
    @io.eof?.should == true
  end

  it "returns false on just opened non-empty stream" do
    @io.eof?.should == false
  end

  it "does not consume the data from the stream" do
    @io.eof?.should == false
    @io.getc.should == 'V'
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.eof? }.should raise_error(IOError)
  end

  it "raises IOError on stream closed for reading by close_read" do
    @io.close_read
    lambda { @io.eof? }.should raise_error(IOError)
  end

  it "returns true on one-byte stream after single-byte read" do
    File.open(File.dirname(__FILE__) + '/fixtures/one_byte.txt') { |one_byte|
      one_byte.read(1)
      one_byte.eof?.should == true
    }
  end
end

describe "IO#eof?" do
  after :each do
    @r.close if @r && !@r.closed?
    @w.close if @w && !@w.closed?
  end

  it "returns true on receiving side of Pipe when writing side is closed" do
    @r, @w = IO.pipe
    @w.close
    @r.eof?.should == true
  end

  it "returns false on receiving side of Pipe when writing side wrote some data" do
    @r, @w = IO.pipe
    @w.puts "hello"
    @r.eof?.should == false
    @w.close
    @r.eof?.should == false
    @r.read
    @r.eof?.should == true
  end
end
