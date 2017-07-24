require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::MD5#block_length" do

  it "returns the length of digest block" do
    cur_digest = Digest::MD5.new
    cur_digest.block_length.should == MD5Constants::BlockLength
  end

end

