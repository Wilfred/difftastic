require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::MD5#digest" do

  it "returns a digest" do
    cur_digest = Digest::MD5.new
    cur_digest.digest().should == MD5Constants::BlankDigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.digest(MD5Constants::Contents).should == MD5Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.digest(MD5Constants::Contents).should == MD5Constants::Digest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.digest.should == MD5Constants::BlankDigest
  end

end

describe "Digest::MD5.digest" do

  it "returns a digest" do
    Digest::MD5.digest(MD5Constants::Contents).should == MD5Constants::Digest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::MD5.digest(MD5Constants::Contents).should == MD5Constants::Digest
    Digest::MD5.digest("").should == MD5Constants::BlankDigest
  end

end
