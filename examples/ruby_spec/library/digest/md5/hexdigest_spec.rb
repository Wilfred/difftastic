require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::MD5#hexdigest" do

  it "returns a hexdigest" do
    cur_digest = Digest::MD5.new
    cur_digest.hexdigest.should == MD5Constants::BlankHexdigest

    # add something to check that the state is reset later
    cur_digest << "test"

    cur_digest.hexdigest(MD5Constants::Contents).should == MD5Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    cur_digest.hexdigest(MD5Constants::Contents).should == MD5Constants::Hexdigest

    # after all is done, verify that the digest is in the original, blank state
    cur_digest.hexdigest.should == MD5Constants::BlankHexdigest
  end

end

describe "Digest::MD5.hexdigest" do

  it "returns a hexdigest" do
    Digest::MD5.hexdigest(MD5Constants::Contents).should == MD5Constants::Hexdigest
    # second invocation is intentional, to make sure there are no side-effects
    Digest::MD5.hexdigest(MD5Constants::Contents).should == MD5Constants::Hexdigest
    Digest::MD5.hexdigest("").should == MD5Constants::BlankHexdigest
  end

end
