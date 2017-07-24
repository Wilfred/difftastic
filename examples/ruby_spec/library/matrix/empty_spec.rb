require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix#empty?" do
  it "returns true when the Matrix is empty" do
    Matrix[ ].empty?.should be_true
    Matrix[ [], [], [] ].empty?.should be_true
    Matrix[ [], [], [] ].transpose.empty?.should be_true
  end

  it "returns false when the Matrix has elements" do
    Matrix[ [1, 2] ].empty?.should be_false
    Matrix[ [1], [2] ].empty?.should be_false
  end

  it "doesn't accept any parameter" do
    lambda{
      Matrix[ [1, 2] ].empty?(42)
    }.should raise_error(ArgumentError)
  end
end

describe "Matrix.empty" do
  it "returns an empty matrix of the requested size" do
    m = Matrix.empty(3, 0)
    m.row_size.should == 3
    m.column_size.should == 0

    m = Matrix.empty(0, 3)
    m.row_size.should == 0
    m.column_size.should == 3
  end

  it "has arguments defaulting to 0" do
    Matrix.empty.should == Matrix.empty(0, 0)
    Matrix.empty(42).should == Matrix.empty(42, 0)
  end

  it "does not accept more than two parameters" do
    lambda{
      Matrix.empty(1, 2, 3)
    }.should raise_error(ArgumentError)
  end

  it "raises an error if both dimensions are > 0" do
    lambda{
      Matrix.empty(1, 2)
    }.should raise_error(ArgumentError)
  end

  it "raises an error if any dimension is < 0" do
    lambda{
      Matrix.empty(-2, 0)
    }.should raise_error(ArgumentError)

    lambda{
      Matrix.empty(0, -2)
    }.should raise_error(ArgumentError)
  end

end

describe "for a subclass of Matrix" do
  it "returns an instance of that subclass" do
    MatrixSub.empty(0, 1).should be_an_instance_of(MatrixSub)
  end
end
