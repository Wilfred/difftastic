require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix.lower_triangular?" do
  it "returns true for a square lower triangular Matrix" do
    Matrix[[1, 0, 0], [1, 2, 0], [1, 2, 3]].lower_triangular?.should be_true
    Matrix.diagonal([1, 2, 3]).lower_triangular?.should be_true
    Matrix[[1, 0], [1, 2], [1, 2], [1, 2]].lower_triangular?.should be_true
    Matrix[[1, 0, 0, 0], [1, 2, 0, 0]].lower_triangular?.should be_true
  end

  it "returns true for an empty Matrix" do
    Matrix.empty(3, 0).lower_triangular?.should be_true
    Matrix.empty(0, 3).lower_triangular?.should be_true
    Matrix.empty(0, 0).lower_triangular?.should be_true
  end

  it "returns false for a non lower triangular square Matrix" do
    Matrix[[0, 1], [0, 0]].lower_triangular?.should be_false
    Matrix[[1, 2, 3], [1, 2, 3], [1, 2, 3]].lower_triangular?.should be_false
    Matrix[[0, 1], [0, 0], [0, 0], [0, 0]].lower_triangular?.should be_false
    Matrix[[0, 0, 0, 1], [0, 0, 0, 0]].lower_triangular?.should be_false
  end
end
