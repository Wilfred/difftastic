require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#~" do
  it "returns self with each bit flipped" do
    (~bignum_value(48)).should == -9223372036854775857
    (~(-bignum_value(21))).should == 9223372036854775828
    (~bignum_value(1)).should == -9223372036854775810
  end
end
