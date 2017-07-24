require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib::ZStream#data_type" do
  it "returns the type of the data in the stream" do
    z = Zlib::Deflate.new
    [Zlib::ASCII, Zlib::BINARY, Zlib::UNKNOWN].include?(z.data_type).should == true
  end
end
