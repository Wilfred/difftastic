require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::EigenvalueDecomposition#eigenvalues" do
  it "returns an array of complex eigenvalues for a rotation matrix" do
    Matrix[[ 1, 1],
           [-1, 1]].eigensystem.eigenvalues.sort_by{|v| v.imag}.should ==
    [ Complex(1, -1), Complex(1, 1)]
  end

  it "returns an array of real eigenvalues for a symetric matrix" do
    Matrix[[1, 2],
           [2, 1]].eigensystem.eigenvalues.sort.map!{|x| x.round(10)}.should ==
    [ -1, 3 ]
  end

  it "returns an array of real eigenvalues for a matrix" do
    Matrix[[14, 16],
           [-6, -6]].eigensystem.eigenvalues.sort.map!{|x| x.round(10)}.should ==
    [ 2, 6 ]
  end
end
