describe :sha256_update, shared: true do
  it "can update" do
    cur_digest = Digest::SHA256.new
    cur_digest.send @method, SHA256Constants::Contents
    cur_digest.digest.should == SHA256Constants::Digest
  end
end
