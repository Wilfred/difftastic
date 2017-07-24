require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::MD5#reset" do

  it "returns digest state to initial conditions" do
    cur_digest = Digest::MD5.new
    cur_digest.update MD5Constants::Contents
    cur_digest.digest().should_not == MD5Constants::BlankDigest
    cur_digest.reset
    cur_digest.digest().should == MD5Constants::BlankDigest
  end

end

