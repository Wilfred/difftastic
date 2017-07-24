require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib::ZStream#flush_next_out" do

  it "flushes the stream and flushes the output buffer" do
    zs = Zlib::Inflate.new
    zs << [120, 156, 75, 203, 207, 7, 0, 2, 130, 1, 69].pack('C*')

    zs.flush_next_out.should == 'foo'
    zs.finished?.should == true
    zs.flush_next_out.should == ''
  end
end


