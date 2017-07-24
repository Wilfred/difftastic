require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "Zlib::GzipFile#closed?" do
  it "returns the closed status" do
    io = StringIO.new
    Zlib::GzipWriter.wrap io do |gzio|
      gzio.closed?.should == false

      gzio.close

      gzio.closed?.should == true
    end
  end
end

