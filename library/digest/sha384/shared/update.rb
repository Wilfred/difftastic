describe :sha384_update, shared: true do
  it "can update" do
    cur_digest = Digest::SHA384.new
    cur_digest.send @method, SHA384Constants::Contents
    cur_digest.digest.should == SHA384Constants::Digest
  end
end
