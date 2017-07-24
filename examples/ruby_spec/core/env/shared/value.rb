describe :env_value, shared: true do
  it "returns true if ENV has the value" do
    ENV["foo"] = "bar"
    ENV.send(@method, "bar").should == true
    ENV["foo"] = nil
  end

  it "returns false if ENV doesn't have the value" do
    ENV.send(@method, "this_value_should_never_exist").should == false
  end
end
