require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#^" do
  it "returns self bitwise EXCLUSIVE OR other" do
    (3 ^ 5).should == 6
    (-2 ^ -255).should == 255
    (5 ^ bignum_value + 0xffff_ffff).should == 0x8000_0000_ffff_fffa
  end

  it "returns self bitwise EXCLUSIVE OR a Bignum" do
    (-1 ^ 2**64).should == -18446744073709551617
  end

  it "raises a TypeError when passed a Float" do
    lambda { (3 ^ 3.4) }.should raise_error(TypeError)
  end

  it "raises a TypeError and does not call #to_int when defined on an object" do
    obj = mock("fixnum bit xor")
    obj.should_not_receive(:to_int)

    lambda { 3 ^ obj }.should raise_error(TypeError)
  end
end
