require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA512#digest" do

  it "returns a digest" do
    cur_digest = Digest::SHA512.new
    cur_digest.digest().should == SHA512Constants::BlankDigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.digest(SHA512Constants::Contents).should == SHA512Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.digest(SHA512Constants::Contents).should == SHA512Constants::Digest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.digest.should == SHA512Constants::BlankDigest
  end

end

describe "Digest::SHA512.digest" do

  it "returns a digest" do
    Digest::SHA512.digest(SHA512Constants::Contents).should == SHA512Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::SHA512.digest(SHA512Constants::Contents).should == SHA512Constants::Digest
    Digest::SHA512.digest("").should == SHA512Constants::BlankDigest
  end

end
