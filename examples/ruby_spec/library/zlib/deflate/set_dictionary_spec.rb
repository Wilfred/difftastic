require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib::Deflate#set_dictionary" do
  it "sets the dictionary" do
    d = Zlib::Deflate.new
    d.set_dictionary 'aaaaaaaaaa'
    d << 'abcdefghij'

    d.finish.should == [120, 187, 20, 225, 3, 203, 75, 76,
                        74, 78, 73, 77, 75, 207, 200, 204,
                        2, 0, 21, 134, 3, 248].pack('C*')
  end
end

