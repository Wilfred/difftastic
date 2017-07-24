require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix.normal?" do
  # it "returns false for non normal matrices" do
  #   Matrix[[0, 1], [1, 2]].normal?.should == false
  # end

  it "returns true for normal matrices" do
    Matrix[[1, 1, 0], [0, 1, 1], [1, 0, 1]].normal?.should == true
    Matrix[[0, Complex(0, 2)], [Complex(0, -2), 0]].normal?.should == true
  end

  it "raises an error for rectangular matrices" do
    [
      Matrix[[0], [0]],
      Matrix[[0, 0]],
      Matrix.empty(0, 2),
      Matrix.empty(2, 0),
    ].each do |rectangual_matrix|
      lambda {
        rectangual_matrix.normal?
      }.should raise_error(Matrix::ErrDimensionMismatch)
    end
  end
end
