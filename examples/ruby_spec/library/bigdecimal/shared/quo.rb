require 'bigdecimal'

describe :bigdecimal_quo, shared: true do
  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @zero_plus = BigDecimal("+0")
    @zero_minus = BigDecimal("-0")
    @two = BigDecimal("2")
    @three = BigDecimal("3")
    @eleven = BigDecimal("11")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-99999")
    @frac_2 = BigDecimal("0.9E-99999")
  end

  it "returns a / b" do
    @two.send(@method, @one, *@object).should == @two
    @one.send(@method, @two, *@object).should == BigDecimal("0.5")
    @eleven.send(@method, @three, *@object).should be_close(@three + (@two / @three), TOLERANCE)
    @one.send(@method, @one_minus, *@object).should == @one_minus
    @one_minus.send(@method, @one_minus, *@object).should == @one
    @frac_2.send(@method, @frac_1, *@object).should == BigDecimal("0.9")
    @frac_1.send(@method, @frac_1, *@object).should == @one
    @one.send(@method, BigDecimal('-2E5555'), *@object).should == BigDecimal('-0.5E-5555')
    @one.send(@method, BigDecimal('2E-5555'), *@object).should == BigDecimal('0.5E5555')
  end

  it "returns 0 if divided by Infinity" do
    @zero.send(@method, @infinity, *@object).should == 0
    @frac_2.send(@method, @infinity, *@object).should == 0
  end

  it "returns (+|-) Infinity if (+|-) Infinity divided by one" do
    @infinity_minus.send(@method, @one, *@object).should == @infinity_minus
    @infinity.send(@method, @one, *@object).should == @infinity
    @infinity_minus.send(@method, @one_minus, *@object).should == @infinity
  end

  it "returns NaN if Infinity / ((+|-) Infinity)" do
    @infinity.send(@method, @infinity_minus, *@object).nan?.should == true
    @infinity_minus.send(@method, @infinity, *@object).nan?.should == true
  end

  it "returns (+|-) Infinity if divided by zero" do
    @one.send(@method, @zero, *@object).should == @infinity
    @one.send(@method, @zero_plus, *@object).should == @infinity
    @one.send(@method, @zero_minus, *@object).should == @infinity_minus
  end

  it "returns NaN if zero is divided by zero" do
    @zero.send(@method, @zero, *@object).nan?.should == true
    @zero_minus.send(@method, @zero_plus, *@object).nan?.should == true
    @zero_plus.send(@method, @zero_minus, *@object).nan?.should == true
  end
end
