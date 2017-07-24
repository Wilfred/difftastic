require File.expand_path('../../../spec_helper', __FILE__)

describe "Numeric#to_c" do
  before :all do
    @numbers = [
      0,
      29871,
      99999999999999**99,
      -72628191273,
      Rational(2,3),
      Rational(1.898),
      Rational(-238),
      29282.2827,
      -2927.00091,
      0.0,
      12.0,
      Float::MAX,
      infinity_value,
      nan_value
    ]
  end

  it "returns a Complex object" do
    @numbers.each do |number|
      number.to_c.should be_an_instance_of(Complex)
    end
  end

  it "uses self as the real component" do
    @numbers.each do |number|
      real = number.to_c.real
      if Float === number and number.nan?
        real.nan?.should be_true
      else
        real.should == number
      end
    end
  end

  it "uses 0 as the imaginary component" do
    @numbers.each do |number|
      number.to_c.imag.should == 0
    end
  end
end
