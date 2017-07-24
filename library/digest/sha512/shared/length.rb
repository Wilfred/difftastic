describe :sha512_length, shared: true do
  it "returns the length of the digest" do
    cur_digest = Digest::SHA512.new
    cur_digest.send(@method).should == SHA512Constants::BlankDigest.size
    cur_digest << SHA512Constants::Contents
    cur_digest.send(@method).should == SHA512Constants::Digest.size
  end
end
