require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA256#digest" do

  it "returns a digest" do
    cur_digest = Digest::SHA256.new
    cur_digest.digest().should == SHA256Constants::BlankDigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.digest(SHA256Constants::Contents).should == SHA256Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.digest(SHA256Constants::Contents).should == SHA256Constants::Digest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.digest.should == SHA256Constants::BlankDigest
  end

end

describe "Digest::SHA256.digest" do

  it "returns a digest" do
    Digest::SHA256.digest(SHA256Constants::Contents).should == SHA256Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::SHA256.digest(SHA256Constants::Contents).should == SHA256Constants::Digest
    Digest::SHA256.digest("").should == SHA256Constants::BlankDigest
  end

end
