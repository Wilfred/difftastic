require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_divide, shared: true do
  describe "with Complex" do
    it "divides according to the usual rule for complex numbers" do
      a = Complex((1 * 10) - (2 * 20), (1 * 20) + (2 * 10))
      b = Complex(1, 2)
      a.send(@method, b).should == Complex(10, 20)

      c = Complex((1.5 * 100.2) - (2.1 * -30.3), (1.5 * -30.3) + (2.1 * 100.2))
      d = Complex(1.5, 2.1)
      # remember the floating-point arithmetic
      c.send(@method, d).should be_close(Complex(100.2, -30.3), TOLERANCE)
    end
  end

  describe "with Fixnum" do
    it "divides both parts of the Complex number" do
      Complex(20, 40).send(@method, 2).should == Complex(10, 20)
      Complex(30, 30).send(@method, 10).should == Complex(3, 3)
    end

    it "raises a ZeroDivisionError when given zero" do
      lambda { Complex(20, 40).send(@method, 0) }.should raise_error(ZeroDivisionError)
    end

    it "produces Rational parts" do
      Complex(5, 9).send(@method, 2).should eql(Complex(Rational(5,2), Rational(9,2)))
    end
  end

  describe "with Bignum" do
    it "divides both parts of the Complex number" do
      Complex(20, 40).send(@method, 2).should == Complex(10, 20)
      Complex(15, 16).send(@method, 2.0).should be_close(Complex(7.5, 8), TOLERANCE)
    end
  end

  describe "with Float" do
    it "divides both parts of the Complex number" do
      Complex(3, 9).send(@method, 1.5).should == Complex(2, 6)
      Complex(15, 16).send(@method, 2.0).should be_close(Complex(7.5, 8), TOLERANCE)
    end

    it "returns Complex(Infinity, Infinity) when given zero" do
      Complex(20, 40).send(@method, 0.0).real.infinite?.should == 1
      Complex(20, 40).send(@method, 0.0).imag.infinite?.should == 1
      Complex(-20, 40).send(@method, 0.0).real.infinite?.should == -1
      Complex(-20, 40).send(@method, 0.0).imag.infinite?.should == 1
    end
  end

  describe "with Object" do
    it "tries to coerce self into other" do
      value = Complex(3, 9)

      obj = mock("Object")
      obj.should_receive(:coerce).with(value).and_return([4, 2])
      value.send(@method, obj).should == 2
    end
  end

  describe "with a Numeric which responds to #real? with true" do
    it "returns Complex(real.quo(other), imag.quo(other))" do
      other = mock_numeric('other')
      real = mock_numeric('real')
      imag = mock_numeric('imag')
      other.should_receive(:real?).and_return(true)
      real.should_receive(:quo).with(other).and_return(1)
      imag.should_receive(:quo).with(other).and_return(2)
      Complex(real, imag).send(@method, other).should == Complex(1, 2)
    end
  end

  describe "with a Numeric which responds to #real? with false" do
    it "coerces the passed argument to Complex and divides the resulting elements" do
      complex = Complex(3, 0)
      other = mock_numeric('other')
      other.should_receive(:real?).any_number_of_times.and_return(false)
      other.should_receive(:coerce).with(complex).and_return([5, 2])
      complex.send(@method, other).should eql(Rational(5, 2))
    end
  end
end
