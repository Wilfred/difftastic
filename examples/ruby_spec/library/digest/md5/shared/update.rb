describe :md5_update, shared: true do
  it "can update" do
    cur_digest = Digest::MD5.new
    cur_digest.send @method, MD5Constants::Contents
    cur_digest.digest.should == MD5Constants::Digest
  end
end
