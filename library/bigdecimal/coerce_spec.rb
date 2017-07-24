require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#coerce" do

  it "returns [other, self] both as BigDecimal" do
    one = BigDecimal("1.0")
    five_point_28 = BigDecimal("5.28")
    zero_minus = BigDecimal("-0.0")
    some_value = 32434234234234234234

    BigDecimal("1.2").coerce(1).should == [one, BigDecimal("1.2")]
    five_point_28.coerce(1.0).should == [one, BigDecimal("5.28")]
    one.coerce(one).should == [one, one]
    one.coerce(2.5).should == [2.5, one]
    BigDecimal("1").coerce(3.14).should == [3.14, one]
    a, b = zero_minus.coerce(some_value)
    a.should == BigDecimal(some_value.to_s)
    b.should == zero_minus
    a, b = one.coerce(some_value)
    a.should == BigDecimal(some_value.to_s)
    b.to_f.should be_close(1.0, TOLERANCE) # can we take out the to_f once BigDecimal#- is implemented?
    b.should == one
  end

end
