require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA256#to_s" do

  it "returns a hexdigest" do
    cur_digest = Digest::SHA256.new
    cur_digest.to_s.should == SHA256Constants::BlankHexdigest
  end

  it "does not change the internal state" do
    cur_digest = Digest::SHA256.new
    cur_digest.to_s.should == SHA256Constants::BlankHexdigest
    cur_digest.to_s.should == SHA256Constants::BlankHexdigest

    cur_digest << SHA256Constants::Contents
    cur_digest.to_s.should == SHA256Constants::Hexdigest
    cur_digest.to_s.should == SHA256Constants::Hexdigest
  end

end
