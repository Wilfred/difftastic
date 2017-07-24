require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#<=>" do
  it "returns -1, 0, 1 when self is less than, equal, or greater than other" do
    (1.5 <=> 5).should == -1
    (2.45 <=> 2.45).should == 0
    ((bignum_value*1.1) <=> bignum_value).should == 1
  end

  it "returns nil when either argument is NaN" do
    (nan_value <=> 71.2).should be_nil
    (1771.176 <=> nan_value).should be_nil
  end

  it "returns nil when the given argument is not a Float" do
    (1.0 <=> "1").should be_nil
  end

  # The 4 tests below are taken from matz's revision 23730 for Ruby trunk
  #
  it "returns 1 when self is Infinity and other is a Bignum" do
    (infinity_value <=> Float::MAX.to_i*2).should == 1
  end

  it "returns -1 when self is negative and other is Infinty" do
    (-Float::MAX.to_i*2 <=> infinity_value).should == -1
  end

  it "returns -1 when self is -Infinity and other is negative" do
    (-infinity_value <=> -Float::MAX.to_i*2).should == -1
  end

  it "returns 1 when self is negative and other is -Infinity" do
    (-Float::MAX.to_i*2 <=> -infinity_value).should == 1
  end
end
