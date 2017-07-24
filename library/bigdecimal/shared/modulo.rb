require 'bigdecimal'

describe :bigdecimal_modulo, shared: true do
  before :each do
    @one = BigDecimal("1")
    @zero = BigDecimal("0")
    @zero_pos = BigDecimal("+0")
    @zero_neg = BigDecimal("-0")
    @two = BigDecimal("2")
    @three = BigDecimal("3")
    @mixed = BigDecimal("1.23456789")
    @nan = BigDecimal("NaN")
    @infinity = BigDecimal("Infinity")
    @infinity_minus = BigDecimal("-Infinity")
    @one_minus = BigDecimal("-1")
    @frac_1 = BigDecimal("1E-9999")
    @frac_2 = BigDecimal("0.9E-9999")
  end

  it "returns self modulo other" do
    bd6543 = BigDecimal.new("6543.21")
    bd5667 = BigDecimal.new("5667.19")
    a = BigDecimal("1.0000000000000000000000000000000000000000005")
    b = BigDecimal("1.00000000000000000000000000000000000000000005")

    bd6543.send(@method, 137).should == BigDecimal("104.21")
    bd5667.send(@method, bignum_value).should == 5667.19
    bd6543.send(@method, BigDecimal("137.24")).should == BigDecimal("92.93")
    bd6543.send(@method, 137).should be_close(6543.21.%(137), TOLERANCE)
    bd6543.send(@method, 137).should == bd6543 % 137
    bd5667.send(@method, bignum_value).should be_close(5667.19.%(0xffffffff), TOLERANCE)
    bd5667.send(@method, bignum_value).should == bd5667.%(0xffffffff)
    bd6543.send(@method, 137.24).should be_close(6543.21.%(137.24), TOLERANCE)
    a.send(@method, b).should == BigDecimal("0.45E-42")
    @zero.send(@method, @one).should == @zero
    @zero.send(@method, @one_minus).should == @zero
    @two.send(@method, @one).should == @zero
    @one.send(@method, @two).should == @one
    @frac_1.send(@method, @one).should == @frac_1
    @frac_2.send(@method, @one).should == @frac_2
    @one_minus.send(@method, @one_minus).should == @zero
    @one_minus.send(@method, @one).should == @zero
    @one_minus.send(@method, @two).should == @one
    @one.send(@method, -@two).should == -@one

    @one_minus.modulo(BigDecimal('0.9')).should == BigDecimal('0.8')
    @one.modulo(BigDecimal('-0.9')).should == BigDecimal('-0.8')

    @one_minus.modulo(BigDecimal('0.8')).should == BigDecimal('0.6')
    @one.modulo(BigDecimal('-0.8')).should == BigDecimal('-0.6')

    @one_minus.modulo(BigDecimal('0.6')).should == BigDecimal('0.2')
    @one.modulo(BigDecimal('-0.6')).should == BigDecimal('-0.2')

    @one_minus.modulo(BigDecimal('0.5')).should == @zero
    @one.modulo(BigDecimal('-0.5')).should == @zero
    @one_minus.modulo(BigDecimal('-0.5')).should == @zero

    @one_minus.modulo(BigDecimal('0.4')).should == BigDecimal('0.2')
    @one.modulo(BigDecimal('-0.4')).should == BigDecimal('-0.2')

    @one_minus.modulo(BigDecimal('0.3')).should == BigDecimal('0.2')
    @one_minus.modulo(BigDecimal('0.2')).should == @zero
  end

  it "returns a [Float value] when the argument is Float" do
    @two.send(@method, 2.0).should == 0.0
    @one.send(@method, 2.0).should == 1.0
    res = @two.send(@method, 5.0)
    res.kind_of?(BigDecimal).should == true
  end

  it "returns NaN if NaN is involved" do
    @nan.send(@method, @nan).nan?.should == true
    @nan.send(@method, @one).nan?.should == true
    @one.send(@method, @nan).nan?.should == true
    @infinity.send(@method, @nan).nan?.should == true
    @nan.send(@method, @infinity).nan?.should == true
  end

  it "returns NaN if the dividend is Infinity" do
    @infinity.send(@method, @infinity).nan?.should == true
    @infinity.send(@method, @one).nan?.should == true
    @infinity.send(@method, @mixed).nan?.should == true
    @infinity.send(@method, @one_minus).nan?.should == true
    @infinity.send(@method, @frac_1).nan?.should == true

    @infinity_minus.send(@method, @infinity_minus).nan?.should == true
    @infinity_minus.send(@method, @one).nan?.should == true

    @infinity.send(@method, @infinity_minus).nan?.should == true
    @infinity_minus.send(@method, @infinity).nan?.should == true
  end

  it "returns the dividend if the divisor is Infinity" do
    @one.send(@method, @infinity).should == @one
    @one.send(@method, @infinity_minus).should == @one
    @frac_2.send(@method, @infinity_minus).should == @frac_2
  end

  it "raises TypeError if the argument cannot be coerced to BigDecimal" do
    lambda {
      @one.send(@method, '2')
    }.should raise_error(TypeError)
  end
end

describe :bigdecimal_modulo_zerodivisionerror, shared: true do
  it "raises ZeroDivisionError if other is zero" do
    bd5667 = BigDecimal.new("5667.19")

    lambda { bd5667.send(@method, 0) }.should raise_error(ZeroDivisionError)
    lambda { bd5667.send(@method, BigDecimal("0")) }.should raise_error(ZeroDivisionError)
    lambda { @zero.send(@method, @zero) }.should raise_error(ZeroDivisionError)
  end
end
