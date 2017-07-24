require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA1#digest" do

  it "returns a digest" do
    cur_digest = Digest::SHA1.new
    cur_digest.digest().should == SHA1Constants::BlankDigest
    cur_digest.digest(SHA1Constants::Contents).should == SHA1Constants::Digest
  end

end

describe "Digest::SHA1.digest" do

  it "returns a digest" do
    Digest::SHA1.digest(SHA1Constants::Contents).should == SHA1Constants::Digest
  end

end
