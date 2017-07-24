require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix.upper_triangular?" do
  it "returns true for an upper triangular Matrix" do
    Matrix[[1, 2, 3], [0, 2, 3], [0, 0, 3]].upper_triangular?.should be_true
    Matrix.diagonal([1, 2, 3]).upper_triangular?.should be_true
    Matrix[[1, 2], [0, 2], [0, 0], [0, 0]].upper_triangular?.should be_true
    Matrix[[1, 2, 3, 4], [0, 2, 3, 4]].upper_triangular?.should be_true
  end

  it "returns false for a non upper triangular square Matrix" do
    Matrix[[0, 0], [1, 0]].upper_triangular?.should be_false
    Matrix[[1, 2, 3], [1, 2, 3], [1, 2, 3]].upper_triangular?.should be_false
    Matrix[[0, 0], [0, 0], [0, 0], [0, 1]].upper_triangular?.should be_false
    Matrix[[0, 0, 0, 0], [1, 0, 0, 0]].upper_triangular?.should be_false
  end

  it "returns true for an empty matrix" do
    Matrix.empty(3,0).upper_triangular?.should be_true
    Matrix.empty(0,3).upper_triangular?.should be_true
    Matrix.empty(0,0).upper_triangular?.should be_true
  end
end
