require File.expand_path('../../../spec_helper', __FILE__)

describe "Complex#fdiv" do
  it "accepts a numeric argument" do
    lambda { Complex(20).fdiv(2) }.should_not raise_error(TypeError)
    lambda { Complex(20).fdiv(2.0) }.should_not raise_error(TypeError)
    lambda { Complex(20).fdiv(bignum_value) }.should_not raise_error(TypeError)
  end

  it "accepts a negative numeric argument" do
    lambda { Complex(20).fdiv(-2) }.should_not raise_error(TypeError)
    lambda { Complex(20).fdiv(-2.0) }.should_not raise_error(TypeError)
    lambda { Complex(20).fdiv(-bignum_value) }.should_not raise_error(TypeError)
  end

  it "raises a TypeError if passed a non-numeric argument" do
    lambda { Complex(20).fdiv([]) }.should raise_error(TypeError)
    lambda { Complex(20).fdiv(:sym) }.should raise_error(TypeError)
    lambda { Complex(20).fdiv('s') }.should raise_error(TypeError)
  end

  it "sets the real part to NaN if self's real part is NaN" do
    Complex(nan_value).fdiv(2).real.nan?.should be_true
  end

  it "sets the imaginary part to NaN if self's imaginary part is NaN" do
    Complex(2, nan_value).fdiv(2).imag.nan?.should be_true
  end

  it "sets the real and imaginary part to NaN if self's real and imaginary parts are NaN" do
    Complex(nan_value, nan_value).fdiv(2).imag.nan?.should be_true
    Complex(nan_value, nan_value).fdiv(2).real.nan?.should be_true
  end

  it "sets the real and imaginary part to NaN if self's real part and the argument are both NaN" do
    Complex(nan_value, 2).fdiv(nan_value).imag.nan?.should be_true
    Complex(nan_value, 2).fdiv(nan_value).real.nan?.should be_true
  end

  it "sets the real and imaginary part to NaN if self's real part, self's imaginary part, and the argument are NaN" do
    Complex(nan_value, nan_value).fdiv(nan_value).imag.nan?.should be_true
    Complex(nan_value, nan_value).fdiv(nan_value).real.nan?.should be_true
  end

  it "sets the real part to Infinity if self's real part is Infinity" do
    Complex(infinity_value).fdiv(2).real.infinite?.should == 1
    Complex(infinity_value,2).fdiv(2).real.infinite?.should == 1
  end

  it "sets the imaginary part to Infinity if self's imaginary part is Infinity" do
    Complex(2, infinity_value).fdiv(2).imag.infinite?.should == 1
    Complex(2, infinity_value).fdiv(2).imag.infinite?.should == 1
  end

  it "sets the imaginary and real part to Infinity if self's imaginary and real parts are Infinity" do
    Complex(infinity_value, infinity_value).fdiv(2).real.infinite?.should == 1
    Complex(infinity_value, infinity_value).fdiv(2).imag.infinite?.should == 1
  end

  it "sets the real part to NaN and the imaginary part to NaN if self's imaginary part, self's real part, and the argument are Infinity" do
    Complex(infinity_value, infinity_value).fdiv(infinity_value).real.nan?.should be_true
    Complex(infinity_value, infinity_value).fdiv(infinity_value).imag.nan?.should be_true
  end
end

describe "Complex#fdiv with no imaginary part" do
  before :each do
    @numbers = [1, 5.43, 10, bignum_value, 99872.2918710].map{|n| [n,-n]}.flatten
  end

  it "returns a Complex number" do
    @numbers.each do |real|
      @numbers.each do |other|
        Complex(real).fdiv(other).should be_an_instance_of(Complex)
      end
    end
  end

  it "sets the real part to self's real part fdiv'd with the argument" do
    @numbers.each do |real|
      @numbers.each do |other|
        Complex(real).fdiv(other).real.should == real.fdiv(other)
      end
    end
  end

  it "sets the imaginary part to 0.0" do
    @numbers.each do |real|
      @numbers.each do |other|
        Complex(real).fdiv(other).imaginary.should == 0.0
      end
    end
  end
end

describe "Complex#fdiv with an imaginary part" do
  before :each do
    @numbers = [1, 5.43, 10, bignum_value, 99872.2918710].map{|n| [n,-n]}.flatten
  end

  it "returns a Complex number" do
    @numbers.each do |real|
      @numbers.each_with_index do |other,idx|
        Complex(
          real,@numbers[idx == 0 ? -1 : idx-1]
        ).fdiv(other).should be_an_instance_of(Complex)
      end
    end
  end

  it "sets the real part to self's real part fdiv'd with the argument" do
    @numbers.each do |real|
      @numbers.each_with_index do |other,idx|
        Complex(
          real,@numbers[idx == 0 ? -1 : idx-1]
        ).fdiv(other).real.should == real.fdiv(other)
      end
    end
  end

  it "sets the imaginary part to the imaginary part fdiv'd with the argument" do
    @numbers.each do |real|
      @numbers.each_with_index do |other,idx|
        im = @numbers[idx == 0 ? -1 : idx-1]
        Complex(real, im).fdiv(other).imag.should == im.fdiv(other)
      end
    end
  end
end
