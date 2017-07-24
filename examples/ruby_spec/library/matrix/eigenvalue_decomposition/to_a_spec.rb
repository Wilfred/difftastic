require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::EigenvalueDecomposition#to_a" do
  before :each do
    @a = Matrix[[14, 16], [-6, -6]]
    @e = Matrix::EigenvalueDecomposition.new(@a)
  end

  it "returns an array of with [V, D, V.inv]" do
    @e.to_a.should == [@e.v, @e.d, @e.v_inv]
  end

  it "returns a factorization" do
    v, d, v_inv = @e.to_a
    (v * d * v_inv).map{|e| e.round(10)}.should == @a
  end
end
