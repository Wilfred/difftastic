describe :sha512_update, shared: true do
  it "can update" do
    cur_digest = Digest::SHA512.new
    cur_digest.send @method, SHA512Constants::Contents
    cur_digest.digest.should == SHA512Constants::Digest
  end
end
