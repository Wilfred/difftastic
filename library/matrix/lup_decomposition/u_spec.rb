require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::LUPDecomposition#u" do
  before :each do
    @a = Matrix[[7, 8, 9], [14, 46, 51], [28, 82, 163]]
    @lu = Matrix::LUPDecomposition.new(@a)
    @u = @lu.u
  end

  it "returns the second element of to_a" do
    @u.should == @lu.to_a[1]
  end

  it "returns an upper triangular matrix" do
    @u.upper_triangular?.should be_true
  end
end
