describe :env_include, shared: true do
  it "returns true if ENV has the key" do
    ENV["foo"] = "bar"
    ENV.send(@method, "foo").should == true
    ENV.delete "foo"
  end

  it "returns false if ENV doesn't include the key" do
    ENV.send(@method, "should_never_be_set").should == false
  end
end
