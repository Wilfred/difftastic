require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)

describe "Digest::SHA512#digest!" do

  it "returns a digest and can digest!" do
    cur_digest = Digest::SHA512.new
    cur_digest << SHA512Constants::Contents
    cur_digest.digest!().should == SHA512Constants::Digest
    cur_digest.digest().should == SHA512Constants::BlankDigest
  end

end
