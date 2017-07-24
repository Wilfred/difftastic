require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Vector#normalize" do
  it "returns a normalized copy of the vector" do
    x = 0.2672612419124244
    Vector[1, 2, 3].normalize.should == Vector[x, x * 2, x * 3]
  end

  it "raises an error for zero vectors" do
    lambda {
      Vector[].normalize
    }.should raise_error(Vector::ZeroVectorError)
    lambda {
      Vector[0, 0, 0].normalize
    }.should raise_error(Vector::ZeroVectorError)
  end
end
