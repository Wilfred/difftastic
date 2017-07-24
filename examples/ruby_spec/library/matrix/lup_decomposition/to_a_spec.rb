require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::LUPDecomposition#to_a" do
  before :each do
    @a = Matrix[[7, 8, 9], [14, 46, 51], [28, 82, 163]]
    @lu = Matrix::LUPDecomposition.new(@a)
    @to_a = @lu.to_a
    @l, @u, @p = @to_a
  end

  it "returns an array of three matrices" do
    @to_a.should be_kind_of(Array)
    @to_a.length.should == 3
    @to_a.each{|m| m.should be_kind_of(Matrix)}
  end

  it "returns [l, u, p] such that l*u == a*p" do
    (@l * @u).should == (@p * @a)
  end

  it "returns the right values for rectangular matrices" do
    [
      Matrix[[7, 8, 9], [14, 46, 51]],
      Matrix[[4, 11], [5, 8], [3, 4]],
    ].each do |a|
      l, u, p = Matrix::LUPDecomposition.new(a).to_a
      (l * u).should == (p * a)
    end
  end

  it "has other properties implied by the specs of #l, #u and #p"
end
