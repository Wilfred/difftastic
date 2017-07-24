require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA256#digest_length" do

  it "returns the length of computed digests" do
    cur_digest = Digest::SHA256.new
    cur_digest.digest_length.should == SHA256Constants::DigestLength
  end

end

