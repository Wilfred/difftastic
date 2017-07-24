require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_inspect, shared: true do
  conflicts_with :Prime do
    it "returns a string representation of self" do
      Rational(3, 4).inspect.should == "(3/4)"
      Rational(-5, 8).inspect.should == "(-5/8)"
      Rational(-1, -2).inspect.should == "(1/2)"
      Rational(bignum_value, 1).inspect.should == "(#{bignum_value}/1)"
    end
  end
end
