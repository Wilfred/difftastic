require 'bigdecimal'

describe :bigdecimal_power, shared: true do
  it "powers of self" do
    e3_minus = BigDecimal("3E-20001")
    e3_minus_power_2 = BigDecimal("9E-40002")
    e3_plus = BigDecimal("3E20001")
    e2_plus = BigDecimal("2E40001")
    e5_minus = BigDecimal("5E-40002")
    e = BigDecimal("1.00000000000000000000123456789")
    one = BigDecimal("1")
    ten = BigDecimal("10")
    # The tolerance is dependent upon the size of BASE_FIG
    tolerance = BigDecimal("1E-70")
    ten_powers = BigDecimal("1E10000")
    pi = BigDecimal("3.14159265358979")
    e3_minus.send(@method, 2).should == e3_minus_power_2
    e3_plus.send(@method, 0).should == 1
    e3_minus.send(@method, 1).should == e3_minus
    e2_plus.send(@method, -1).should == e5_minus
    e2_plus.send(@method, -1).should == e5_minus.power(1)
    (e2_plus.send(@method, -1) * e5_minus.send(@method, -1)).should == 1
    e.send(@method, 2).should == e * e
    e.send(@method, -1).should be_close(one.div(e, 120), tolerance)
    ten.send(@method, 10000).should == ten_powers
    pi.send(@method, 10).should be_close(Math::PI ** 10, TOLERANCE)
  end

  it "powers of 1 equal 1" do
    one = BigDecimal("1")
    one.send(@method, 0).should == 1
    one.send(@method, 1).should == 1
    one.send(@method, 10).should == 1
    one.send(@method, -10).should == 1
  end

  it "0 to power of 0 is 1" do
    zero = BigDecimal("0")
    zero.send(@method, 0).should == 1
  end

  it "0 to powers < 0 is Infinity" do
    zero = BigDecimal("0")
    infinity = BigDecimal("Infinity")
    zero.send(@method, -10).should == infinity
    zero.send(@method, -1).should == infinity
  end

  it "other powers of 0 are 0" do
    zero = BigDecimal("0")
    zero.send(@method, 1).should == 0
    zero.send(@method, 10).should == 0
  end

  it "returns NaN if self is NaN" do
    BigDecimal("NaN").send(@method, -5).nan?.should == true
    BigDecimal("NaN").send(@method, 5).nan?.should == true
  end

  it "returns 0.0 if self is infinite and argument is negative" do
    BigDecimal("Infinity").send(@method, -5).should == 0
    BigDecimal("-Infinity").send(@method, -5).should == 0
  end

  it "returns infinite if self is infinite and argument is positive" do
    infinity = BigDecimal("Infinity")
    BigDecimal("Infinity").send(@method, 4).should == infinity
    BigDecimal("-Infinity").send(@method, 4).should == infinity
    BigDecimal("Infinity").send(@method, 5).should == infinity
    BigDecimal("-Infinity").send(@method, 5).should == -infinity
  end
end
