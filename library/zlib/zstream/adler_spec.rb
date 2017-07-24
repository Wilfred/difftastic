require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib::ZStream#adler" do
  it "generates hash" do
    z = Zlib::Deflate.new
    z << "foo"
    z.finish
    z.adler.should == 0x02820145
  end
end
