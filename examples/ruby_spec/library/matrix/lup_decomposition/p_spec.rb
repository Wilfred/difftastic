require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::LUPDecomposition#p" do
  before :each do
    @a = Matrix[[7, 8, 9], [14, 46, 51], [28, 82, 163]]
    @lu = Matrix::LUPDecomposition.new(@a)
    @p = @lu.p
  end

  it "returns the third element of to_a" do
    @p.should == @lu.to_a[2]
  end

  it "returns a permutation matrix" do
    @p.permutation?.should be_true
  end
end
