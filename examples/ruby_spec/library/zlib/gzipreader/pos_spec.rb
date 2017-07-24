require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "GzipReader#pos" do

  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end

  it "returns the position" do
    gz = Zlib::GzipReader.new @io

    gz.pos.should == 0

    gz.read 5
    gz.pos.should == 5

    gz.read
    gz.pos.should == @data.length
  end

end

