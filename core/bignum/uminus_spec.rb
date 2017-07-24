require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#-@" do
  it "returns self as a negative value" do
    bignum_value.send(:-@).should == -9223372036854775808
    (-bignum_value).send(:-@).should == 9223372036854775808

    bignum_value(921).send(:-@).should == -9223372036854776729
    (-bignum_value(921).send(:-@)).should == 9223372036854776729
  end
end
