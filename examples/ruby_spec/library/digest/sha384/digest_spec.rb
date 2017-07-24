require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA384#digest" do

  it "returns a digest" do
    cur_digest = Digest::SHA384.new
    cur_digest.digest().should == SHA384Constants::BlankDigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.digest(SHA384Constants::Contents).should == SHA384Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.digest(SHA384Constants::Contents).should == SHA384Constants::Digest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.digest.should == SHA384Constants::BlankDigest
  end

end

describe "Digest::SHA384.digest" do

  it "returns a digest" do
    Digest::SHA384.digest(SHA384Constants::Contents).should == SHA384Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::SHA384.digest(SHA384Constants::Contents).should == SHA384Constants::Digest
    Digest::SHA384.digest("").should == SHA384Constants::BlankDigest
  end

end
