describe "Complex#rationalize" do
  it "raises RangeError if self has non-zero imaginary part" do
    lambda { Complex(1,5).rationalize }.should raise_error(RangeError)
  end

  it "raises RangeError if self has 0.0 imaginary part" do
    lambda { Complex(1,0.0).rationalize }.should raise_error(RangeError)
  end

  it "returns a Rational if self has zero imaginary part" do
    Complex(1,0).rationalize.should == Rational(1,1)
    Complex(2<<63+5).rationalize.should == Rational(2<<63+5,1)
  end

  it "sends #rationalize to the real part" do
    real = mock_numeric('real')
    real.should_receive(:rationalize).with(0.1).and_return(:result)
    Complex(real, 0).rationalize(0.1).should == :result
  end

  it "ignores a single argument" do
    Complex(1,0).rationalize(0.1).should == Rational(1,1)
  end

  it "raises ArgumentError when passed more than one argument" do
    lambda { Complex(1,0).rationalize(0.1, 0.1) }.should raise_error(ArgumentError)
    lambda { Complex(1,0).rationalize(0.1, 0.1, 2) }.should raise_error(ArgumentError)
  end
end
