require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Vector#inner_product" do
  it "returns the inner product of a vector" do
    Vector[1, 2, 3].inner_product(Vector[0, -4, 5]).should == 7
  end

  it "returns 0 for empty vectors" do
    Vector[].inner_product(Vector[]).should == 0
  end

  it "raises an error for mismatched vectors" do
    lambda {
      Vector[1, 2, 3].inner_product(Vector[0, -4])
    }.should raise_error(Vector::ErrDimensionMismatch)
  end

  it "uses the conjugate of its argument" do
    Vector[Complex(1,2)].inner_product(Vector[Complex(3,4)]).should == Complex(11, 2)
  end
end
