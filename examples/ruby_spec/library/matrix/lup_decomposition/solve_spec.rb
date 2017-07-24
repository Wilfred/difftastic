require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::LUPDecomposition#solve" do
  describe "for rectangular matrices" do
    it "raises an error for singular matrices" do
      a = Matrix[[1, 2, 3], [1, 3, 5], [2, 5, 8]]
      lu = Matrix::LUPDecomposition.new(a)
      lambda {
        lu.solve(a)
      }.should raise_error(Matrix::ErrNotRegular)
    end

    describe "for non singular matrices" do
      before :each do
        @a = Matrix[[7, 8, 9], [14, 46, 51], [28, 82, 163]]
        @lu = Matrix::LUPDecomposition.new(@a)
      end

      it "returns the appropriate empty matrix when given an empty matrix" do
        @lu.solve(Matrix.empty(3,0)).should == Matrix.empty(3,0)
        empty = Matrix::LUPDecomposition.new(Matrix.empty(0, 0))
        empty.solve(Matrix.empty(0,3)).should == Matrix.empty(0,3)
      end

      it "returns the right matrix when given a matrix of the appropriate size" do
        solution = Matrix[[1, 2, 3, 4], [0, 1, 2, 3], [-1, -2, -3, -4]]
        values = Matrix[[-2, 4, 10, 16], [-37, -28, -19, -10], [-135, -188, -241, -294]] # == @a * solution
        @lu.solve(values).should == solution
      end

      it "raises an error when given a matrix of the wrong size" do
        values = Matrix[[1, 2, 3, 4], [0, 1, 2, 3]]
        lambda {
          @lu.solve(values)
        }.should raise_error(Matrix::ErrDimensionMismatch)
      end

      it "returns the right vector when given a vector of the appropriate size" do
        solution = Vector[1, 2, -1]
        values = Vector[14, 55, 29] # == @a * solution
        @lu.solve(values).should == solution
      end

      it "raises an error when given a vector of the wrong size" do
        values = Vector[14, 55]
        lambda {
          @lu.solve(values)
        }.should raise_error(Matrix::ErrDimensionMismatch)
      end
    end
  end
end
