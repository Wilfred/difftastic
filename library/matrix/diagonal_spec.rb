require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix.diagonal" do
  before :each do
    @m = Matrix.diagonal(10, 11, 12, 13, 14)
  end

  it "returns an object of type Matrix" do
    @m.should be_kind_of(Matrix)
  end

  it "returns a square Matrix of the right size" do
    @m.column_size.should == 5
    @m.row_size.should == 5
  end

  it "sets the diagonal to the arguments" do
    (0..4).each do |i|
      @m[i, i].should == i + 10
    end
  end

  it "fills all non-diagonal cells with 0" do
    (0..4).each do |i|
      (0..4).each do |j|
        if i != j
          @m[i, j].should == 0
        end
      end
    end
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.diagonal(1).should be_an_instance_of(MatrixSub)
    end
  end
end

describe "Matrix.diagonal?" do
  it "returns true for a diagonal Matrix" do
    Matrix.diagonal([1, 2, 3]).diagonal?.should be_true
  end

  it "returns true for a zero square Matrix" do
    Matrix.zero(3).diagonal?.should be_true
  end

  it "returns false for a non diagonal square Matrix" do
    Matrix[[0, 1], [0, 0]].diagonal?.should be_false
    Matrix[[1, 2, 3], [1, 2, 3], [1, 2, 3]].diagonal?.should be_false
  end

  it "returns true for an empty 0x0 matrix" do
    Matrix.empty(0,0).diagonal?.should be_true
  end

  it "raises an error for rectangular matrices" do
    [
      Matrix[[0], [0]],
      Matrix[[0, 0]],
      Matrix.empty(0, 2),
      Matrix.empty(2, 0),
    ].each do |rectangual_matrix|
      lambda {
        rectangual_matrix.diagonal?
      }.should raise_error(Matrix::ErrDimensionMismatch)
    end
  end
end
