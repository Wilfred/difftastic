describe :sha256_length, shared: true do
  it "returns the length of the digest" do
    cur_digest = Digest::SHA256.new
    cur_digest.send(@method).should == SHA256Constants::BlankDigest.size
    cur_digest << SHA256Constants::Contents
    cur_digest.send(@method).should == SHA256Constants::Digest.size
  end
end
