require File.expand_path('../../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe :gzipreader_each, shared: true do

  before :each do
    @data = "firstline\nsecondline\n\nforthline"
    @zip = [31, 139, 8, 0, 244, 125, 128, 88, 2, 255, 75, 203, 44, 42, 46, 201,
            201, 204, 75, 229, 42, 78, 77, 206, 207, 75, 1, 51, 185, 210,242,
            139, 74, 50, 64, 76, 0, 180, 54, 61, 111, 31, 0, 0, 0].pack('C*')

    @io = StringIO.new @zip
    @gzreader = Zlib::GzipReader.new @io
  end

  after :each do
    ScratchPad.clear
  end

  it "calls the given block for each line in the stream, passing the line as an argument" do
    ScratchPad.record []
    @gzreader.send(@method) { |b| ScratchPad << b }

    ScratchPad.recorded.should == ["firstline\n", "secondline\n", "\n", "forthline"]
  end

  it "returns an enumerator, which yields each byte in the stream, when no block is passed" do
    enum = @gzreader.send(@method)

    ScratchPad.record []
    while true
      begin
        ScratchPad << enum.next
      rescue StopIteration
        break
      end
    end

    ScratchPad.recorded.should == ["firstline\n", "secondline\n", "\n", "forthline"]
  end

  it "increments position before calling the block" do
    i = 0
    @gzreader.send(@method) do |line|
      i += line.length
      @gzreader.pos.should == i
    end
  end

end
