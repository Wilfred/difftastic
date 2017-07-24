require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::MD5#digest_length" do

  it "returns the length of computed digests" do
    cur_digest = Digest::MD5.new
    cur_digest.digest_length.should == MD5Constants::DigestLength
  end

end

