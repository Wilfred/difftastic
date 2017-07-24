require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#succ" do
  it "returns the next larger positive Fixnum" do
    2.succ.should == 3
  end

  it "returns the next larger negative Fixnum" do
    (-2).succ.should == -1
  end

  it "overflows a Fixnum to a Bignum" do
    fixnum_max.succ.should == (fixnum_max + 1)
  end
end
