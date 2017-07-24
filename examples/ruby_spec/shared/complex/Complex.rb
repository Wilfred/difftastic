require File.expand_path('../../../spec_helper', __FILE__)

describe :kernel_Complex, shared: true do
  describe "when passed [Complex, Complex]" do
    it "returns a new Complex number based on the two given numbers" do
      Complex(Complex(3, 4), Complex(5, 6)).should == Complex(3 - 6, 4 + 5)
      Complex(Complex(1.5, 2), Complex(-5, 6.3)).should == Complex(1.5 - 6.3, 2 - 5)
    end
  end

  describe "when passed [Complex]" do
    it "returns the passed Complex number" do
      Complex(Complex(1, 2)).should == Complex(1, 2)
      Complex(Complex(-3.4, bignum_value)).should == Complex(-3.4, bignum_value)
    end
  end

  describe "when passed [Integer, Integer]" do
    it "returns a new Complex number" do
      Complex(1, 2).should be_an_instance_of(Complex)
      Complex(1, 2).real.should == 1
      Complex(1, 2).imag.should == 2

      Complex(-3, -5).should be_an_instance_of(Complex)
      Complex(-3, -5).real.should == -3
      Complex(-3, -5).imag.should == -5

      Complex(3.5, -4.5).should be_an_instance_of(Complex)
      Complex(3.5, -4.5).real.should == 3.5
      Complex(3.5, -4.5).imag.should == -4.5

      Complex(bignum_value, 30).should be_an_instance_of(Complex)
      Complex(bignum_value, 30).real.should == bignum_value
      Complex(bignum_value, 30).imag.should == 30
    end
  end

  describe "when passed [Integer]" do
    it "returns a new Complex number with 0 as the imaginary component" do
      # Guard against the Mathn library
      conflicts_with :Prime do
        Complex(1).should be_an_instance_of(Complex)
        Complex(1).imag.should == 0
        Complex(1).real.should == 1

        Complex(-3).should be_an_instance_of(Complex)
        Complex(-3).imag.should == 0
        Complex(-3).real.should == -3

        Complex(-4.5).should be_an_instance_of(Complex)
        Complex(-4.5).imag.should == 0
        Complex(-4.5).real.should == -4.5

        Complex(bignum_value).should be_an_instance_of(Complex)
        Complex(bignum_value).imag.should == 0
        Complex(bignum_value).real.should == bignum_value
      end
    end
  end

  describe "when passed a String" do
    it "needs to be reviewed for spec completeness"
  end

  describe "when passed an Objectc which responds to #to_c" do
    it "returns the passed argument" do
      obj = Object.new; def obj.to_c; 1i end
      Complex(obj).should == Complex(0, 1)
    end
  end

  describe "when passed a Numeric which responds to #real? with false" do
    it "returns the passed argument" do
      n = mock_numeric("unreal")
      n.should_receive(:real?).and_return(false)
      Complex(n).should equal(n)
    end
  end

  describe "when passed a Numeric which responds to #real? with true" do
    it "returns a Complex with the passed argument as the real component and 0 as the imaginary component" do
      n = mock_numeric("real")
      n.should_receive(:real?).any_number_of_times.and_return(true)
      result = Complex(n)
      result.real.should equal(n)
      result.imag.should equal(0)
    end
  end

  describe "when passed Numerics n1 and n2 and at least one responds to #real? with false" do
    [[false, false], [false, true], [true, false]].each do |r1, r2|
      it "returns n1 + n2 * Complex(0, 1)" do
        n1 = mock_numeric("n1")
        n2 = mock_numeric("n2")
        n3 = mock_numeric("n3")
        n4 = mock_numeric("n4")
        n1.should_receive(:real?).any_number_of_times.and_return(r1)
        n2.should_receive(:real?).any_number_of_times.and_return(r2)
        n2.should_receive(:*).with(Complex(0, 1)).and_return(n3)
        n1.should_receive(:+).with(n3).and_return(n4)
        Complex(n1, n2).should equal(n4)
      end
    end
  end

  describe "when passed two Numerics and both respond to #real? with true" do
    it "returns a Complex with the passed arguments as real and imaginary components respectively" do
      n1 = mock_numeric("n1")
      n2 = mock_numeric("n2")
      n1.should_receive(:real?).any_number_of_times.and_return(true)
      n2.should_receive(:real?).any_number_of_times.and_return(true)
      result = Complex(n1, n2)
      result.real.should equal(n1)
      result.imag.should equal(n2)
    end
  end

  describe "when passed a single non-Numeric" do
    it "coerces the passed argument using #to_c" do
      n = mock("n")
      c = Complex(0, 0)
      n.should_receive(:to_c).and_return(c)
      Complex(n).should equal(c)
    end
  end

  describe "when passed a non-Numeric second argument" do
    it "raises TypeError" do
      lambda { Complex.send(@method, :sym, :sym) }.should raise_error(TypeError)
      lambda { Complex.send(@method, 0,    :sym) }.should raise_error(TypeError)
    end
  end
end
