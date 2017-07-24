require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#&" do
  before :each do
    @bignum = bignum_value(5)
  end

  it "returns self bitwise AND other" do
    @bignum = bignum_value(5)
    (@bignum & 3).should == 1
    (@bignum & 52).should == 4
    (@bignum & bignum_value(9921)).should == 9223372036854775809

    ((2*bignum_value) & 1).should == 0
    ((2*bignum_value) & (2*bignum_value)).should == 18446744073709551616
  end

  it "returns self bitwise AND other when one operand is negative" do
    ((2*bignum_value) & -1).should == (2*bignum_value)
    ((4*bignum_value) & -1).should == (4*bignum_value)
    (@bignum & -0xffffffffffffff5).should == 9223372036854775809
    (@bignum & -@bignum).should == 1
    (@bignum & -0x8000000000000000).should == 9223372036854775808
  end

  it "returns self bitwise AND other when both operands are negative" do
    (-@bignum & -0x4000000000000005).should == -13835058055282163717
    (-@bignum & -@bignum).should == -9223372036854775813
    (-@bignum & -0x4000000000000000).should == -13835058055282163712
  end

  it "returns self bitwise AND other when both are negative and a multiple in bitsize of Fixnum::MIN" do
    val = - ((1 << 93) - 1)
    (val & val).should == val

    val = - ((1 << 126) - 1)
    (val & val).should == val
  end

  it "raises a TypeError when passed a Float" do
    lambda { (@bignum & 3.4) }.should raise_error(TypeError)
  end

  it "raises a TypeError and does not call #to_int when defined on an object" do
    obj = mock("bignum bit and")
    obj.should_not_receive(:to_int)

    lambda { @bignum & obj }.should raise_error(TypeError)
  end
end
