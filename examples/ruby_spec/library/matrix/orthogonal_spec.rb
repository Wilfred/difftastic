require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix.orthogonal?" do
  it "returns false for non orthogonal matrices" do
    Matrix[[0, 1], [1, 2]].orthogonal?.should == false
    Matrix[[1, 1, 0], [0, 1, 1], [1, 0, 1]].orthogonal?.should == false
  end

  it "returns true for orthogonal matrices" do
    Matrix[[0, 1], [1, 0]].orthogonal?.should == true
  end

  it "raises an error for rectangular matrices" do
    [
      Matrix[[0], [0]],
      Matrix[[0, 0]],
      Matrix.empty(0, 2),
      Matrix.empty(2, 0),
    ].each do |rectangual_matrix|
      lambda {
        rectangual_matrix.orthogonal?
      }.should raise_error(Matrix::ErrDimensionMismatch)
    end
  end
end
