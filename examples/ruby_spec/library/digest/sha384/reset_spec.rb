require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA384#reset" do

  it "returns digest state to initial conditions" do
    cur_digest = Digest::SHA384.new
    cur_digest.update SHA384Constants::Contents
    cur_digest.digest().should_not == SHA384Constants::BlankDigest
    cur_digest.reset
    cur_digest.digest().should == SHA384Constants::BlankDigest
  end

end

