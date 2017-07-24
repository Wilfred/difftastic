describe :env_key, shared: true do
  it "needs to be reviewed for completeness"

  it "returns the index associated with the passed value" do
    ENV["foo"] = "bar"
    ENV.send(@method, "bar").should == "foo"
    ENV.delete "foo"
  end

  it "returns nil if the passed value is not found" do
    ENV.send(@method, "should_never_be_set").should be_nil
  end
end


