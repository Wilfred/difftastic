describe :sha384_length, shared: true do
  it "returns the length of the digest" do
    cur_digest = Digest::SHA384.new
    cur_digest.send(@method).should == SHA384Constants::BlankDigest.size
    cur_digest << SHA384Constants::Contents
    cur_digest.send(@method).should == SHA384Constants::Digest.size
  end
end
