describe :random_urandom, shared: true do
  it "returns a String" do
    Random.send(@method, 1).should be_an_instance_of(String)
  end

  it "returns a String of the length given as argument" do
    Random.send(@method, 15).length.should == 15
  end

  it "raises an ArgumentError on a negative size" do
    lambda {
      Random.send(@method, -1)
    }.should raise_error(ArgumentError)
  end

  it "returns an ASCII-8BIT String" do
    Random.send(@method, 15).encoding.should == Encoding::ASCII_8BIT
  end

  it "returns a random binary String" do
    Random.send(@method, 12).should_not == Random.send(@method, 12)
  end
end
