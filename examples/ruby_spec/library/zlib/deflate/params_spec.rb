require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib::Deflate#params" do
  it "changes the deflate parameters" do
    data = 'abcdefghijklm'

    d = Zlib::Deflate.new Zlib::NO_COMPRESSION, Zlib::MAX_WBITS,
    Zlib::DEF_MEM_LEVEL, Zlib::DEFAULT_STRATEGY

    d << data.slice!(0..10)
    d.params Zlib::BEST_COMPRESSION, Zlib::DEFAULT_STRATEGY
    d << data

    Zlib::Inflate.inflate(d.finish).should == 'abcdefghijklm'
  end
end
