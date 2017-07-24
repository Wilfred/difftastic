require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "GzipReader#rewind" do

  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
    ScratchPad.clear
  end

  it "resets the position of the stream pointer" do
    gz = Zlib::GzipReader.new @io
    gz.read
    gz.pos.should == @data.length

    gz.rewind
    gz.pos.should == 0
    gz.lineno.should == 0
  end

  it "resets the position of the stream pointer to data previously read" do
    gz = Zlib::GzipReader.new @io
    first_read = gz.read
    gz.rewind
    first_read.should == gz.read
  end

  it "invokes seek method on the associated IO object" do
    # first, prepare the mock object:
    (obj = mock("io")).should_receive(:get_io).any_number_of_times.and_return(@io)
    def obj.read(args); get_io.read(args); end
    def obj.seek(pos, whence = 0)
      ScratchPad.record :seek
      get_io.seek(pos, whence)
    end

    gz = Zlib::GzipReader.new(obj)
    gz.rewind()

    ScratchPad.recorded.should == :seek
    gz.pos.should == 0
    gz.read.should == "12345abcde"
  end
end
