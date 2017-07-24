require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix::EigenvalueDecomposition#eigenvectors" do
  it "returns an array of complex eigenvectors for a rotation matrix" do
    # Fix me: should test for linearity, not for equality
    Matrix[[ 1, 1],
           [-1, 1]].eigensystem.eigenvectors.should ==
    [ Vector[1, Complex(0, 1)],
      Vector[1, Complex(0, -1)]
    ]
  end

  it "returns an array of real eigenvectors for a symetric matrix" do
    # Fix me: should test for linearity, not for equality
    Matrix[[1, 2],
           [2, 1]].eigensystem.eigenvectors.should ==
    [ Vector[0.7071067811865475, -0.7071067811865475],
      Vector[0.7071067811865475, 0.7071067811865475]
    ]
  end
end
