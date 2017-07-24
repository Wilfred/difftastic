require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA512#block_length" do

  it "returns the length of digest block" do
    cur_digest = Digest::SHA512.new
    cur_digest.block_length.should == SHA512Constants::BlockLength
  end

end

