require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA256#block_length" do

  it "returns the length of digest block" do
    cur_digest = Digest::SHA256.new
    cur_digest.block_length.should == SHA256Constants::BlockLength
  end

end

