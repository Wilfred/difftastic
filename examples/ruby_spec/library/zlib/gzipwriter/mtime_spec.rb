require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "Zlib::GzipWriter#mtime=" do
  before :each do
    @io = StringIO.new
  end

  it "sets mtime using Integer" do
    Zlib::GzipWriter.wrap @io do |gzio|
      gzio.mtime = 1

      gzio.mtime.should == Time.at(1)
    end

    @io.string[4, 4].should == [1,0,0,0].pack('C*')
  end

  it "sets mtime using Time" do
    Zlib::GzipWriter.wrap @io do |gzio|
      gzio.mtime = Time.at 1

      gzio.mtime.should == Time.at(1)
    end

    @io.string[4, 4].should == [1,0,0,0].pack('C*')
  end

  it "raises if the header was written" do
    Zlib::GzipWriter.wrap @io do |gzio|
      gzio.write ''

      lambda { gzio.mtime = nil }.should \
        raise_error(Zlib::GzipFile::Error, 'header is already written')
    end
  end
end
