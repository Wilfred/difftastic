require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::EigenvalueDecomposition#eigenvalue_matrix" do
  it "returns a diagonal matrix with the eigenvalues on the diagonal" do
    Matrix[[14, 16], [-6, -6]].eigensystem.eigenvalue_matrix.should == Matrix[[6, 0],[0, 2]]
    Matrix[[1, 1], [-1, 1]].eigensystem.eigenvalue_matrix.should == Matrix[[Complex(1,1), 0],[0, Complex(1,-1)]]
  end
end
