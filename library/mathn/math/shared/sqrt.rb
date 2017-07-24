require 'mathn'
require File.expand_path('../../fixtures/classes', __FILE__)

describe :mathn_math_sqrt, shared: true do
  it "returns the square root for Rational numbers" do
    @object.send(:sqrt, Rational(9, 25)).should == Rational(3, 5)
    @object.send(:sqrt, 16/64).should == Rational(1, 2)
  end

  it "returns the square root for Complex numbers" do
    @object.send(:sqrt, Complex(1, 0)).should == 1
  end

  it "returns the square root for positive numbers" do
    @object.send(:sqrt, 1).should == 1
    @object.send(:sqrt, 4.0).should == 2.0
    @object.send(:sqrt, 12.34).should == Math.sqrt!(12.34)
  end

  it "returns the square root for negative numbers" do
    @object.send(:sqrt, -9).should == Complex(0, 3)
    @object.send(:sqrt, -5.29).should == Complex(0, 2.3)
    @object.send(:sqrt, -16/64).should == Complex(0, 1/2)
  end
end
