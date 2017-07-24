require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#zero?" do

  it "returns true if self does equal zero" do
    really_small_zero = BigDecimal("0E-200000000")
    really_big_zero = BigDecimal("0E200000000000")
    really_small_zero.zero?.should == true
    really_big_zero.zero?.should == true
    BigDecimal("0.000000000000000000000000").zero?.should == true
    BigDecimal("0").zero?.should == true
    BigDecimal("0E0").zero?.should == true
    BigDecimal("+0").zero?.should == true
    BigDecimal("-0").zero?.should == true
  end

  it "returns false otherwise" do
    BigDecimal("0000000001").zero?.should == false
    BigDecimal("2E40001").zero?.should == false
    BigDecimal("3E-20001").zero?.should == false
    BigDecimal("Infinity").zero?.should == false
    BigDecimal("-Infinity").zero?.should == false
    BigDecimal("NaN").zero?.should == false
  end

end

