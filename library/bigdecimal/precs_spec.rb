require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#precs" do

  before :each do
    @infinity = BigDecimal("Infinity")
    @infinity_neg = BigDecimal("-Infinity")
    @nan = BigDecimal("NaN")
    @zero = BigDecimal("0")
    @zero_neg = BigDecimal("-0")

    @arr = [BigDecimal("2E40001"), BigDecimal("3E-20001"),\
            @infinity, @infinity_neg, @nan, @zero, @zero_neg]
    @precision = BigDecimal::BASE.to_s.length - 1
  end

  it "returns array of two values" do
    @arr.each do |x|
      x.precs.kind_of?(Array).should == true
      x.precs.size.should == 2
    end
  end

  it "returns Integers as array values" do
    @arr.each do |x|
      x.precs[0].kind_of?(Integer).should == true
      x.precs[1].kind_of?(Integer).should == true
    end
  end

  it "returns the current value of significant digits as the first value" do
    BigDecimal("3.14159").precs[0].should >= 6
    BigDecimal('1').precs[0].should == BigDecimal('1' + '0' * 100).precs[0]
    [@infinity, @infinity_neg, @nan, @zero, @zero_neg].each do |value|
      value.precs[0].should <= @precision
    end
  end

  it "returns the maximum number of significant digits as the second value" do
    BigDecimal("3.14159").precs[1].should >= 6
    BigDecimal('1').precs[1].should >= 1
    BigDecimal('1' + '0' * 100).precs[1] >= 101
    [@infinity, @infinity_neg, @nan, @zero, @zero_neg].each do |value|
      value.precs[1].should >= 1
    end
  end
end

