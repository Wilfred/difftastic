require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#^" do
  before :each do
    @bignum = bignum_value(18)
  end

  it "returns self bitwise EXCLUSIVE OR other" do
    (@bignum ^ 2).should == 9223372036854775824
    (@bignum ^ @bignum).should == 0
    (@bignum ^ 14).should == 9223372036854775836
  end

  it "returns self bitwise EXCLUSIVE OR other when one operand is negative" do
    (@bignum ^ -0x40000000000000000).should == -64563604257983430638
    (@bignum ^ -@bignum).should == -4
    (@bignum ^ -0x8000000000000000).should == -18446744073709551598
  end

  it "returns self bitwise EXCLUSIVE OR other when both operands are negative" do
    (-@bignum ^ -0x40000000000000000).should == 64563604257983430638
    (-@bignum ^ -@bignum).should == 0
    (-@bignum ^ -0x4000000000000000).should == 13835058055282163694
  end

  it "returns self bitwise EXCLUSIVE OR other when all bits are 1 and other value is negative" do
    (9903520314283042199192993791 ^ -1).should == -9903520314283042199192993792
    (784637716923335095479473677900958302012794430558004314111 ^ -1).should ==
      -784637716923335095479473677900958302012794430558004314112
  end

  it "raises a TypeError when passed a Float" do
    not_supported_on :opal do
      lambda {
        bignum_value ^ bignum_value(0xffff).to_f
      }.should raise_error(TypeError)
    end
    lambda { @bignum ^ 14.5 }.should raise_error(TypeError)
  end

  it "raises a TypeError and does not call #to_int when defined on an object" do
    obj = mock("bignum bit xor")
    obj.should_not_receive(:to_int)

    lambda { @bignum ^ obj }.should raise_error(TypeError)
  end
end
