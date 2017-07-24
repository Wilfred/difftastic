require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA512#hexdigest" do

  it "returns a hexdigest" do
    cur_digest = Digest::SHA512.new
    cur_digest.hexdigest.should == SHA512Constants::BlankHexdigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.hexdigest(SHA512Constants::Contents).should == SHA512Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.hexdigest(SHA512Constants::Contents).should == SHA512Constants::Hexdigest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.hexdigest.should == SHA512Constants::BlankHexdigest
  end

end

describe "Digest::SHA512.hexdigest" do

  it "returns a hexdigest" do
    Digest::SHA512.hexdigest(SHA512Constants::Contents).should == SHA512Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::SHA512.hexdigest(SHA512Constants::Contents).should == SHA512Constants::Hexdigest
    Digest::SHA512.hexdigest("").should == SHA512Constants::BlankHexdigest
  end

end
