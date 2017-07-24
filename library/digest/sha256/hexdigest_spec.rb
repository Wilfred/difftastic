require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA256#hexdigest" do

  it "returns a hexdigest" do
    cur_digest = Digest::SHA256.new
    cur_digest.hexdigest.should == SHA256Constants::BlankHexdigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.hexdigest(SHA256Constants::Contents).should == SHA256Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.hexdigest(SHA256Constants::Contents).should == SHA256Constants::Hexdigest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.hexdigest.should == SHA256Constants::BlankHexdigest
  end

end

describe "Digest::SHA256.hexdigest" do

  it "returns a hexdigest" do
    Digest::SHA256.hexdigest(SHA256Constants::Contents).should == SHA256Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::SHA256.hexdigest(SHA256Constants::Contents).should == SHA256Constants::Hexdigest
    Digest::SHA256.hexdigest("").should == SHA256Constants::BlankHexdigest
  end

end
