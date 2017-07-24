require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix.row_vector" do

  it "returns a Matrix" do
    Matrix.row_vector([]).should be_an_instance_of(Matrix)
  end

  it "returns a single-row Matrix with the specified values" do
    Matrix.row_vector([1,2]).should == Matrix[ [1,2] ]
  end

  it "returns a 1x0 matrix when called with an empty Array" do
    Matrix.row_vector([]).should == Matrix[ [] ]
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.row_vector([1]).should be_an_instance_of(MatrixSub)
    end
  end
end
