describe :env_to_hash, shared: true do
  it "returns the ENV as a hash" do
    ENV["foo"] = "bar"
    h = ENV.send(@method)
    h.should be_an_instance_of(Hash)
    h["foo"].should == "bar"
    ENV.delete "foo"
  end

  it "uses the locale encoding for keys" do
    ENV.send(@method).keys.all? {|k| k.encoding == Encoding.find('locale') }.should be_true
  end

  it "uses the locale encoding for values" do
    ENV.send(@method).values.all? {|v| v.encoding == Encoding.find('locale') }.should be_true
  end

  it "duplicates the ENV when converting to a Hash" do
    h = ENV.send(@method)
    h.object_id.should_not == ENV.object_id
  end
end
