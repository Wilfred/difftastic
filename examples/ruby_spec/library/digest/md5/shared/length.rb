describe :md5_length, shared: true do
  it "returns the length of the digest" do
    cur_digest = Digest::MD5.new
    cur_digest.send(@method).should == MD5Constants::BlankDigest.size
    cur_digest << MD5Constants::Contents
    cur_digest.send(@method).should == MD5Constants::Digest.size
  end
end
