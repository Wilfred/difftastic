require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "Zlib::GzipFile#orig_name" do
  before :each do
    @io = StringIO.new
  end

  it "returns the name" do
    Zlib::GzipWriter.wrap @io do |gzio|
      gzio.orig_name = 'name'

      gzio.orig_name.should == 'name'
    end
  end

  it "raises an error on a closed stream" do
    Zlib::GzipWriter.wrap @io do |gzio|
      gzio.close

      lambda { gzio.orig_name }.should \
        raise_error(Zlib::GzipFile::Error, 'closed gzip stream')
    end
  end
end

