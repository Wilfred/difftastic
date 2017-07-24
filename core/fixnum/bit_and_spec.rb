require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#&" do
  it "returns self bitwise AND other" do
    (256 & 16).should == 0
    (2010 & 5).should == 0
    (65535 & 1).should == 1
    (0xffff & bignum_value + 0xffff_ffff).should == 65535
  end

  it "returns self bitwise AND other when one operand is negative" do
    ((1 << 33) & -1).should == (1 << 33)
    (-1 & (1 << 33)).should == (1 << 33)

    ((-(1<<33)-1) & 5).should == 5
    (5 & (-(1<<33)-1)).should == 5
  end

  it "returns self bitwise AND other when both operands are negative" do
    (-5 & -1).should == -5
    (-3 & -4).should == -4
    (-12 & -13).should == -16
    (-13 & -12).should == -16
  end

  it "returns self bitwise AND a Bignum" do
    (-1 & 2**64).should == 18446744073709551616
  end

  it "coerces the rhs and calls #coerce" do
    obj = mock("fixnum bit and")
    obj.should_receive(:coerce).with(6).and_return([3, 6])
    (6 & obj).should == 2
  end

  it "raises a TypeError when passed a Float" do
    lambda { (3 & 3.4) }.should raise_error(TypeError)
  end

  it "raises a TypeError and does not call #to_int when defined on an object" do
    obj = mock("fixnum bit and")
    obj.should_not_receive(:to_int)

    lambda { 3 & obj }.should raise_error(TypeError)
  end
end
