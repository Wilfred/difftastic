require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA256#reset" do

  it "returns digest state to initial conditions" do
    cur_digest = Digest::SHA256.new
    cur_digest.update SHA256Constants::Contents
    cur_digest.digest().should_not == SHA256Constants::BlankDigest
    cur_digest.reset
    cur_digest.digest().should == SHA256Constants::BlankDigest
  end

end

