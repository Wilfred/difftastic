require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA384#block_length" do

  it "returns the length of digest block" do
    cur_digest = Digest::SHA384.new
    cur_digest.block_length.should == SHA384Constants::BlockLength
  end

end

