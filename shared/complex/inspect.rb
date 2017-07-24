describe :complex_inspect, shared: true do
  it "returns (${real}+${image}i) for positive imaginary parts" do
    Complex(1).inspect.should == "(1+0i)"
    Complex(7).inspect.should == "(7+0i)"
    Complex(-1, 4).inspect.should == "(-1+4i)"
    Complex(-7, 6.7).inspect.should == "(-7+6.7i)"
  end

  it "returns (${real}-${image}i) for negative imaginary parts" do
    Complex(0, -1).inspect.should == "(0-1i)"
    Complex(-1, -4).inspect.should == "(-1-4i)"
    Complex(-7, -6.7).inspect.should == "(-7-6.7i)"
  end
end
