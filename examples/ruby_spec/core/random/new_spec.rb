describe "Random.new" do
  it "returns a new instance of Random" do
    Random.new.should be_an_instance_of(Random)
  end

  it "uses a random seed value if none is supplied" do
    Random.new.seed.should be_an_instance_of(Bignum)
  end

  it "returns Random instances initialized with different seeds" do
    first = Random.new
    second = Random.new
    (0..20).map { first.rand } .should_not == (0..20).map { second.rand }
  end

  it "accepts an Integer seed value as an argument" do
    Random.new(2).seed.should == 2
  end

  it "accepts (and truncates) a Float seed value as an argument" do
    Random.new(3.4).seed.should == 3
  end

  it "accepts (and converts to Integer) a Rational seed value as an argument" do
    Random.new(Rational(20,2)).seed.should == 10
  end

  it "accepts (and converts to Integer) a Complex (without imaginary part) seed value as an argument" do
    Random.new(Complex(20)).seed.should == 20
  end

  it "raises a RangeError if passed a Complex (with imaginary part) seed value as an argument" do
    lambda do
      Random.new(Complex(20,2))
    end.should raise_error(RangeError)
  end
end
