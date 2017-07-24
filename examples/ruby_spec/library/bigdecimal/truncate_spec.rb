require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#truncate" do

  before :each do
      @arr = ['3.14159', '8.7', "0.314159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593014782083152134043E1"]
      @big = BigDecimal("123456.789")
      @nan = BigDecimal('NaN')
      @infinity = BigDecimal('Infinity')
      @infinity_negative = BigDecimal('-Infinity')
  end

  it "returns value of type Integer." do
    @arr.each do |x|
      BigDecimal(x).truncate.kind_of?(Integer).should == true
    end
  end

  it "returns the integer part as a BigDecimal if no precision given" do
    BigDecimal(@arr[0]).truncate.should == 3
    BigDecimal(@arr[1]).truncate.should == 8
    BigDecimal(@arr[2]).truncate.should == 3
    BigDecimal('0').truncate.should == 0
    BigDecimal('0.1').truncate.should == 0
    BigDecimal('-0.1').truncate.should == 0
    BigDecimal('1.5').truncate.should == 1
    BigDecimal('-1.5').truncate.should == -1
    BigDecimal('1E10').truncate.should == BigDecimal('1E10')
    BigDecimal('-1E10').truncate.should == BigDecimal('-1E10')
    BigDecimal('1.8888E10').truncate.should == BigDecimal('1.8888E10')
    BigDecimal('-1E-1').truncate.should == 0
  end

  it "returns value of given precision otherwise" do
    BigDecimal('-1.55').truncate(1).should == BigDecimal('-1.5')
    BigDecimal('1.55').truncate(1).should == BigDecimal('1.5')
    BigDecimal(@arr[0]).truncate(2).should == BigDecimal("3.14")
    BigDecimal('123.456').truncate(2).should == BigDecimal("123.45")
    BigDecimal('123.456789').truncate(4).should == BigDecimal("123.4567")
    BigDecimal('0.456789').truncate(10).should == BigDecimal("0.456789")
    BigDecimal('-1E-1').truncate(1).should == BigDecimal('-0.1')
    BigDecimal('-1E-1').truncate(2).should == BigDecimal('-0.1E0')
    BigDecimal('-1E-1').truncate.should == BigDecimal('0')
    BigDecimal('-1E-1').truncate(0).should == BigDecimal('0')
    BigDecimal('-1E-1').truncate(-1).should == BigDecimal('0')
    BigDecimal('-1E-1').truncate(-2).should == BigDecimal('0')

    BigDecimal(@arr[1]).truncate(1).should == BigDecimal("8.7")
    BigDecimal(@arr[2]).truncate(100).should == BigDecimal(\
      "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679")
  end

  it "sets n digits left of the decimal point to 0, if given n < 0" do
    @big.truncate(-1).should == BigDecimal("123450.0")
    @big.truncate(-2).should == BigDecimal("123400.0")
    BigDecimal(@arr[2]).truncate(-1).should == 0
  end

  it "returns NaN if self is NaN" do
    @nan.truncate(-1).nan?.should == true
    @nan.truncate(+1).nan?.should == true
    @nan.truncate(0).nan?.should == true
  end

  it "returns Infinity if self is infinite" do
    @infinity.truncate(-1).should == @infinity
    @infinity.truncate(+1).should == @infinity
    @infinity.truncate(0).should == @infinity

    @infinity_negative.truncate(-1).should == @infinity_negative
    @infinity_negative.truncate(+1).should == @infinity_negative
    @infinity_negative.truncate(0).should == @infinity_negative
  end

  it "returns the same value if self is special value" do
    lambda { @nan.truncate }.should raise_error(FloatDomainError)
    lambda { @infinity.truncate }.should raise_error(FloatDomainError)
    lambda { @infinity_negative.truncate }.should raise_error(FloatDomainError)
  end
end
