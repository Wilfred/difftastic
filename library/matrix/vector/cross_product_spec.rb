require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Vector#cross_product" do
  it "returns the cross product of a vector" do
    Vector[1, 2, 3].cross_product(Vector[0, -4, 5]).should == Vector[22, -5, -4]
  end

  it "raises an error unless both vectors have dimension 3" do
    lambda {
      Vector[1, 2, 3].cross_product(Vector[0, -4])
    }.should raise_error(Vector::ErrDimensionMismatch)
  end
end
