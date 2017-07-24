require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::LUPDecomposition#l" do
  before :each do
    @a = Matrix[[7, 8, 9], [14, 46, 51], [28, 82, 163]]
    @lu = Matrix::LUPDecomposition.new(@a)
    @l = @lu.l
  end

  it "returns the first element of to_a" do
    @l.should == @lu.to_a[0]
  end

  it "returns a lower triangular matrix" do
    @l.lower_triangular?.should be_true
  end
end
