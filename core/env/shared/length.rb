describe :env_length, shared: true do
  it "returns the number of ENV entries" do
    orig = ENV.to_hash
    begin
      ENV.clear
      ENV["foo"] = "bar"
      ENV["baz"] = "boo"
      ENV.send(@method).should == 2
    ensure
      ENV.replace orig
    end
  end
end
