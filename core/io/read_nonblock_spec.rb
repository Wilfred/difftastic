require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#read_nonblock" do
  before :each do
    @read, @write = IO.pipe
  end

  after :each do
    @read.close if @read && !@read.closed?
    @write.close if @write && !@write.closed?
  end

  it "raises an exception extending IO::WaitReadable when there is no data" do
    lambda { @read.read_nonblock(5) }.should raise_error(IO::WaitReadable) { |e|
      platform_is_not :windows do
        e.should be_kind_of(Errno::EAGAIN)
      end
      platform_is :windows do
        e.should be_kind_of(Errno::EWOULDBLOCK)
      end
    }
  end

  ruby_version_is "2.3" do
    context "when exception option is set to false" do
      context "when there is no data" do
        it "returns :wait_readable" do
          @read.read_nonblock(5, exception: false).should == :wait_readable
        end
      end

      context "when the end is reached" do
        it "returns nil" do
          @write << "hello"
          @write.close

          @read.read_nonblock(5)

          @read.read_nonblock(5, exception: false).should be_nil
        end
      end
    end
  end

  it "returns at most the number of bytes requested" do
    @write << "hello"
    @read.read_nonblock(4).should == "hell"
  end

  it "returns less data if that is all that is available" do
    @write << "hello"
    @read.read_nonblock(10).should == "hello"
  end

  it "allows for reading 0 bytes before any write" do
    @read.read_nonblock(0).should == ""
  end

  it "allows for reading 0 bytes after a write" do
    @write.write "1"
    @read.read_nonblock(0).should == ""
    @read.read_nonblock(1).should == "1"
  end

  it "reads into the passed buffer" do
    buffer = ""
    @write.write("1")
    @read.read_nonblock(1, buffer)
    buffer.should == "1"
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.read_nonblock(5) }.should raise_error(IOError)
  end

  it "raises EOFError when the end is reached" do
    @write << "hello"
    @write.close

    @read.read_nonblock(5)

    lambda { @read.read_nonblock(5) }.should raise_error(EOFError)
  end
end
