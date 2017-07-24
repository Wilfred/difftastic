require File.expand_path('../../../../spec_helper', __FILE__)

ruby_version_is ''...'2.5' do
  require 'mathn'

  describe "Rational#inspect" do
    it "returns a string representation of self" do
      Rational(3, 4).inspect.should == "(3/4)"
      Rational(-5, 8).inspect.should == "(-5/8)"
      Rational(-1, -2).inspect.should == "(1/2)"
      Rational(0, 2).inspect.should == "0"
      Rational(bignum_value, 1).inspect.should == "#{bignum_value}"
    end
  end
end
