require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#nan?" do

  it "returns true if self is not a number" do
    BigDecimal("NaN").nan?.should == true
  end

  it "returns false if self is not a NaN" do
    BigDecimal("Infinity").nan?.should == false
    BigDecimal("-Infinity").nan?.should == false
    BigDecimal("0").nan?.should == false
    BigDecimal("+0").nan?.should == false
    BigDecimal("-0").nan?.should == false
    BigDecimal("2E40001").nan?.should == false
    BigDecimal("3E-20001").nan?.should == false
    BigDecimal("0E-200000000").nan?.should == false
    BigDecimal("0E200000000000").nan?.should == false
    BigDecimal("0.000000000000000000000000").nan?.should == false
  end

end
