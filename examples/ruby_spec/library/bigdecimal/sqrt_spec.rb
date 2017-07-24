require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'bigdecimal'

describe "BigDecimal#sqrt" do
  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
    @two = BigDecimal("2.0")
    @three = BigDecimal("3.0")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
  end

  it "returns square root of 2 with desired precision" do
    string = "1.41421356237309504880168872420969807856967187537694807317667973799073247846210703885038753432764157"
    (1..99).each { |idx|
      @two.sqrt(idx).should be_close(BigDecimal(string), BigDecimal("1E-#{idx-1}"))
    }
  end

  it "returns square root of 3 with desired precision" do
    sqrt_3 = "1.732050807568877293527446341505872366942805253810380628055806979451933016908800037081146186757248575"
    (1..99).each { |idx|
      @three.sqrt(idx).should be_close(BigDecimal(sqrt_3), BigDecimal("1E-#{idx-1}"))
    }
  end

  it "returns square root of 121 with desired precision" do
    BigDecimal('121').sqrt(5).should be_close(11, 0.00001)
  end

  it "returns square root of 0.9E-99999 with desired precision" do
    @frac_2.sqrt(1).to_s.should =~ /\A0\.3E-49999\z/i
  end

  it "raises ArgumentError when no argument is given" do
    lambda {
      @one.sqrt
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if a negative number is given" do
    lambda {
      @one.sqrt(-1)
    }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if 2 arguments are given" do
    lambda {
      @one.sqrt(1, 1)
    }.should raise_error(ArgumentError)
  end

  it "raises TypeError if nil is given" do
    lambda {
      @one.sqrt(nil)
    }.should raise_error(TypeError)
  end

  it "raises TypeError if a string is given" do
    lambda {
      @one.sqrt("stuff")
    }.should raise_error(TypeError)
  end

  it "raises TypeError if a plain Object is given" do
    lambda {
      @one.sqrt(Object.new)
    }.should raise_error(TypeError)
  end

  it "returns 1 if precision is 0 or 1" do
    @one.sqrt(1).should == 1
    @one.sqrt(0).should == 1
  end

  it "raises FloatDomainError on negative values" do
    lambda {
      BigDecimal('-1').sqrt(10)
    }.should raise_error(FloatDomainError)
  end

  it "returns positive infitinity for infinity" do
    @infinity.sqrt(1).should == @infinity
  end

  it "raises FloatDomainError for negative infinity" do
    lambda {
      @infinity_minus.sqrt(1)
    }.should raise_error(FloatDomainError)
  end

  it "raises FloatDomainError for NaN" do
    lambda {
      @nan.sqrt(1)
    }.should raise_error(FloatDomainError)
  end

  it "returns 0 for 0, +0.0 and -0.0" do
    @zero.sqrt(1).should == 0
    @zero_pos.sqrt(1).should == 0
    @zero_neg.sqrt(1).should == 0
  end

end
