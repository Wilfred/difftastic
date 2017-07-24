require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib::ZStream#avail_out" do
  it "returns bytes in the output buffer" do
    z = Zlib::Deflate.new
    z.avail_out.should == 0
  end
end
