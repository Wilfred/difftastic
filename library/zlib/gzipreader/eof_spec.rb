require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "GzipReader#eof?" do

  before :each do
    @data = '{"a":1234}'
    @zip = [31, 139, 8, 0, 0, 0, 0, 0, 0, 3, 171, 86, 74, 84, 178, 50,
            52, 50, 54, 169, 5, 0, 196, 20, 118, 213, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end

  it "returns true when at EOF" do
    gz = Zlib::GzipReader.new @io
    gz.eof?.should be_false
    gz.read
    gz.eof?.should be_true
  end

  it "returns true when at EOF with the exact length of uncompressed data" do
    gz = Zlib::GzipReader.new @io
    gz.eof?.should be_false
    gz.read(10)
    gz.eof?.should be_true
  end

  it "returns true when at EOF with a length greater than the size of uncompressed data" do
    gz = Zlib::GzipReader.new @io
    gz.eof?.should be_false
    gz.read(11)
    gz.eof?.should be_true
  end

  it "returns false when at EOF when there's data left in the buffer to read" do
    gz = Zlib::GzipReader.new @io
    gz.read(9)
    gz.eof?.should be_false
    gz.read
    gz.eof?.should be_true
  end

  # This is especially important for JRuby, since eof? there
  # is more than just a simple accessor.
  it "does not affect the reading data" do
    gz = Zlib::GzipReader.new @io
    0.upto(9) do |i|
      gz.eof?.should be_false
      gz.read(1).should == @data[i, 1]
    end
    gz.eof?.should be_true
    gz.read().should == ""
    gz.eof?.should be_true
  end

end
