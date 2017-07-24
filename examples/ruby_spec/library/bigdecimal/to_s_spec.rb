require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#to_s" do

  before :each do
    @bigdec_str = "3.14159265358979323846264338327950288419716939937"
    @bigneg_str = "-3.1415926535897932384626433832795028841971693993"
    @bigdec = BigDecimal(@bigdec_str)
    @bigneg = BigDecimal(@bigneg_str)
  end

  it "return type is of class String" do
    @bigdec.to_s.kind_of?(String).should == true
    @bigneg.to_s.kind_of?(String).should == true
  end

  it "the default format looks like 0.xxxxEnn" do
    @bigdec.to_s.should =~ /^0\.[0-9]*E[0-9]*$/i
  end

  it "takes an optional argument" do
    lambda {@bigdec.to_s("F")}.should_not raise_error()
  end

  it "starts with + if + is supplied and value is positive" do
    @bigdec.to_s("+").should =~ /^\+.*/
    @bigneg.to_s("+").should_not =~ /^\+.*/
  end

  it "inserts a space every n chars, if integer n is supplied" do
    re =\
      /\A0\.314 159 265 358 979 323 846 264 338 327 950 288 419 716 939 937E1\z/i
    @bigdec.to_s(3).should =~ re

    str1 = '-123.45678 90123 45678 9'
    BigDecimal.new("-123.45678901234567890").to_s('5F').should ==  str1
    # trailing zeroes removed
    BigDecimal.new("1.00000000000").to_s('1F').should == "1.0"
    # 0 is treated as no spaces
    BigDecimal.new("1.2345").to_s('0F').should == "1.2345"
  end

  it "can return a leading space for values > 0" do
    @bigdec.to_s(" F").should =~ /\ .*/
    @bigneg.to_s(" F").should_not =~ /\ .*/
  end

  it "removes trailing spaces in floating point notation" do
    BigDecimal.new('-123.45678901234567890').to_s('F').should == "-123.4567890123456789"
    BigDecimal.new('1.2500').to_s('F').should == "1.25"
    BigDecimal.new('0000.00000').to_s('F').should == "0.0"
    BigDecimal.new('-00.000010000').to_s('F').should == "-0.00001"
    BigDecimal.new("5.00000E-2").to_s("F").should == "0.05"

    BigDecimal.new("500000").to_s("F").should == "500000.0"
    BigDecimal.new("5E2").to_s("F").should == "500.0"
    BigDecimal.new("-5E100").to_s("F").should == "-5" + "0" * 100 + ".0"
  end

  it "can use engineering notation" do
    @bigdec.to_s("E").should =~ /^0\.[0-9]*E[0-9]*$/i
  end

  it "can use conventional floating point notation" do
    @bigdec.to_s("F").should == @bigdec_str
    @bigneg.to_s("F").should == @bigneg_str
    str2 = "+123.45678901 23456789"
    BigDecimal.new('123.45678901234567890').to_s('+8F').should == str2
  end

end

