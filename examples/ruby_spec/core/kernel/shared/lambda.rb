describe :kernel_lambda, shared: true do
  it "returns a Proc object" do
    send(@method) { true }.kind_of?(Proc).should == true
  end

  it "raises an ArgumentError when no block is given" do
    lambda { send(@method) }.should raise_error(ArgumentError)
  end
end
