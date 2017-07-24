require File.expand_path('../../fixtures/classes', __FILE__)
require 'matrix'

describe :matrix_identity, shared: true do
  it "returns a Matrix" do
    Matrix.send(@method, 2).should be_kind_of(Matrix)
  end

  it "returns a n x n identity matrix" do
    Matrix.send(@method, 3).should == Matrix.scalar(3, 1)
    Matrix.send(@method, 100).should == Matrix.scalar(100, 1)
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.send(@method, 2).should be_an_instance_of(MatrixSub)
    end
  end
end
