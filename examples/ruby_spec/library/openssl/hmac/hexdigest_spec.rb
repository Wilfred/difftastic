require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../shared/constants', __FILE__)
require 'openssl'

describe "OpenSSL::HMAC.hexdigest" do
  it "returns an SHA1 hex digest" do
    cur_digest = OpenSSL::Digest::SHA1.new
    cur_digest.hexdigest.should == HMACConstants::BlankSHA1HexDigest
    hexdigest = OpenSSL::HMAC.hexdigest(cur_digest,
                                        HMACConstants::Key,
                                        HMACConstants::Contents)
    hexdigest.should == HMACConstants::SHA1Hexdigest
  end
end

# Should add in similar specs for MD5, RIPEMD160, and SHA256
