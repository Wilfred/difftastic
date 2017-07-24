require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix.unitary?" do
  it "returns false for non unitary matrices" do
    Matrix[[0, 1], [1, 2]].unitary?.should == false
    Matrix[[0, Complex(0, 2)], [Complex(0, 2), 0]].unitary?.should == false
    Matrix[[0, Complex(0, 1)], [Complex(0, -1), 0]].unitary?.should == false
    Matrix[[1, 1, 0], [0, 1, 1], [1, 0, 1]].unitary?.should == false
  end

  it "returns true for unitary matrices" do
    Matrix[[0, Complex(0, 1)], [Complex(0, 1), 0]].unitary?.should == true
  end

  it "raises an error for rectangular matrices" do
    [
      Matrix[[0], [0]],
      Matrix[[0, 0]],
      Matrix.empty(0, 2),
      Matrix.empty(2, 0),
    ].each do |rectangual_matrix|
      lambda {
        rectangual_matrix.unitary?
      }.should raise_error(Matrix::ErrDimensionMismatch)
    end
  end
end
