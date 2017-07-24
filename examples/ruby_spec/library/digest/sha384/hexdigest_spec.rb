require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA384#hexdigest" do

  it "returns a hexdigest" do
    cur_digest = Digest::SHA384.new
    cur_digest.hexdigest.should == SHA384Constants::BlankHexdigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.hexdigest(SHA384Constants::Contents).should == SHA384Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.hexdigest(SHA384Constants::Contents).should == SHA384Constants::Hexdigest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.hexdigest.should == SHA384Constants::BlankHexdigest
  end

end

describe "Digest::SHA384.hexdigest" do

  it "returns a hexdigest" do
    Digest::SHA384.hexdigest(SHA384Constants::Contents).should == SHA384Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::SHA384.hexdigest(SHA384Constants::Contents).should == SHA384Constants::Hexdigest
    Digest::SHA384.hexdigest("").should == SHA384Constants::BlankHexdigest
  end

end
