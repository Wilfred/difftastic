require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix.scalar" do

  before :each do
    @side = 3
    @value = 8
    @a = Matrix.scalar(@side, @value)
  end

  it "returns a Matrix" do
    @a.should be_kind_of(Matrix)
  end

  it "returns a n x n matrix" do
    @a.row_size.should == @side
    @a.column_size.should == @side
  end

  it "initializes diagonal to value" do
    (0...@a.row_size).each do |i|
      @a[i, i].should == @value
    end
  end

  it "initializes all non-diagonal values to 0" do
    (0...@a.row_size).each do |i|
      (0...@a.column_size).each do |j|
        if i != j
          @a[i, j].should == 0
        end
      end
    end
  end

  before :each do
    @side = 3
    @value = 8
    @a = Matrix.scalar(@side, @value)
  end

  it "returns a Matrix" do
    @a.should be_kind_of(Matrix)
  end

  it "returns a square matrix, where the first argument specifies the side of the square" do
    @a.row_size.should == @side
    @a.column_size.should == @side
  end

  it "puts the second argument in all diagonal values" do
    (0...@a.row_size).each do |i|
      @a[i, i].should == @value
    end
  end

  it "fills all values not on the main diagonal with 0" do
    (0...@a.row_size).each do |i|
      (0...@a.column_size).each do |j|
        if i != j
          @a[i, j].should == 0
        end
      end
    end
  end
end
