require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix.build" do

  it "returns a Matrix object of the given size" do
    m = Matrix.build(3, 4){1}
    m.should be_an_instance_of(Matrix)
    m.row_size.should == 3
    m.column_size.should == 4
  end

  it "builds the Matrix using the given block" do
    Matrix.build(2, 3){|col, row| 10*col - row}.should ==
      Matrix[[0, -1, -2], [10, 9, 8]]
  end

  it "iterates through the first row, then the second, ..." do
    acc = []
    Matrix.build(2, 3){|*args| acc << args}
    acc.should == [[0, 0], [0, 1], [0, 2], [1, 0], [1, 1], [1, 2]]
  end

  it "returns an Enumerator is no block is given" do
    enum = Matrix.build(2, 1)
    enum.should  be_an_instance_of(Enumerator)
    enum.each{1}.should == Matrix[[1], [1]]
  end

  it "requires integers as parameters" do
    lambda { Matrix.build("1", "2"){1} }.should raise_error(TypeError)
    lambda { Matrix.build(nil, nil){1} }.should raise_error(TypeError)
    lambda { Matrix.build(1..2){1} }.should raise_error(TypeError)
  end

  it "requires non-negative integers" do
    lambda { Matrix.build(-1, 1){1} }.should raise_error(ArgumentError)
    lambda { Matrix.build(+1,-1){1} }.should raise_error(ArgumentError)
  end

  it "returns empty Matrix if one argument is zero" do
    m = Matrix.build(0, 3){
      raise "Should not yield"
    }
    m.should be_empty
    m.column_size.should == 3

    m = Matrix.build(3, 0){
      raise "Should not yield"
    }
    m.should be_empty
    m.row_size.should == 3
  end

  it "tries to calls :to_int on arguments" do
    int = mock('int')
    int.should_receive(:to_int).twice.and_return(2)
    Matrix.build(int, int){ 1 }.should == Matrix[ [1,1], [1,1] ]
  end

  it "builds an nxn Matrix when given only one argument" do
    m = Matrix.build(3){1}
    m.row_size.should == 3
    m.column_size.should == 3
  end
end

describe "for a subclass of Matrix" do
  it "returns an instance of that subclass" do
    MatrixSub.build(3){1}.should be_an_instance_of(MatrixSub)
  end
end
