require 'bigdecimal'

describe :bigdecimal_eql, shared: true do
  before :each do
    @bg6543_21 = BigDecimal.new("6543.21")
    @bg5667_19 = BigDecimal.new("5667.19")
    @a = BigDecimal("1.0000000000000000000000000000000000000000005")
    @b = BigDecimal("1.00000000000000000000000000000000000000000005")
    @bigint = BigDecimal("1000.0")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
  end

  it "tests for equality" do
    @bg6543_21.send(@method, @bg6543_21).should == true
    @a.send(@method, @a).should == true
    @a.send(@method, @b).should == false
    @bg6543_21.send(@method, @a).should == false
    @bigint.send(@method, 1000).should == true
  end

  it "returns false for NaN as it is never equal to any number" do
    @nan.send(@method, @nan).should == false
    @a.send(@method, @nan).should == false
    @nan.send(@method, @a).should == false
    @nan.send(@method, @infinity).should == false
    @nan.send(@method, @infinity_minus).should == false
    @infinity.send(@method, @nan).should == false
    @infinity_minus.send(@method, @nan).should == false
  end

  it "returns true for infinity values with the same sign" do
    @infinity.send(@method, @infinity).should == true
    @infinity.send(@method, BigDecimal("Infinity")).should == true
    BigDecimal("Infinity").send(@method, @infinity).should == true

    @infinity_minus.send(@method, @infinity_minus).should == true
    @infinity_minus.send(@method, BigDecimal("-Infinity")).should == true
    BigDecimal("-Infinity").send(@method, @infinity_minus).should == true
  end

  it "returns false for infinity values with different signs" do
    @infinity.send(@method, @infinity_minus).should == false
    @infinity_minus.send(@method, @infinity).should == false
  end

  it "returns false when infinite value compared to finite one" do
    @infinity.send(@method, @a).should == false
    @infinity_minus.send(@method, @a).should == false

    @a.send(@method, @infinity).should == false
    @a.send(@method, @infinity_minus).should == false
  end

  it "returns false when compared objects that can not be coerced into BigDecimal" do
    @infinity.send(@method, nil).should == false
    @bigint.send(@method, nil).should == false
    @nan.send(@method, nil).should == false
  end
end
