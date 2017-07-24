require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "Zlib::GzipFile#close" do
  it "finishes the stream and closes the io" do
    io = StringIO.new "".b
    Zlib::GzipWriter.wrap io do |gzio|
      gzio.close

      gzio.closed?.should == true

      lambda { gzio.orig_name }.should \
        raise_error(Zlib::GzipFile::Error, 'closed gzip stream')
      lambda { gzio.comment }.should \
        raise_error(Zlib::GzipFile::Error, 'closed gzip stream')
    end

    io.string[10..-1].should == ([3] + Array.new(9,0)).pack('C*')
  end
end

