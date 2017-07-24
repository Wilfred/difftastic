require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix#minor" do
  before :each do
    @matrix = Matrix[ [1,2], [3,4], [5,6] ]
  end

  describe "with start_row, nrows, start_col, ncols" do
    it "returns the given portion of the Matrix" do
      @matrix.minor(0,1,0,2).should == Matrix[ [1, 2] ]
      @matrix.minor(1,2,1,1).should == Matrix[ [4], [6] ]
    end

    it "returns an empty Matrix if nrows or ncols is 0" do
      @matrix.minor(0,0,0,0).should == Matrix[]
      @matrix.minor(1,0,1,0).should == Matrix[]
      @matrix.minor(1,0,1,1).should == Matrix.columns([[]])
      @matrix.minor(1,1,1,0).should == Matrix[[]]
    end

    it "returns nil for out-of-bounds start_row/col" do
      r = @matrix.row_size + 1
      c = @matrix.column_size + 1
      @matrix.minor(r,0,0,10).should == nil
      @matrix.minor(0,10,c,9).should == nil
      @matrix.minor(-r,0,0,10).should == nil
      @matrix.minor(0,10,-c,9).should == nil
    end

    it "returns nil for negative nrows or ncols" do
      @matrix.minor(0,1,0,-1).should == nil
      @matrix.minor(0,-1,0,1).should == nil
    end

    it "start counting backwards for start_row or start_col below zero" do
      @matrix.minor(0, 1, -1, 1).should == @matrix.minor(0, 1, 1, 1)
      @matrix.minor(-1, 1, 0, 1).should == @matrix.minor(2, 1, 0, 1)
    end

    it "returns empty matrices for extreme start_row/col" do
      @matrix.minor(3,10,1,10).should == Matrix.columns([[]])
      @matrix.minor(1,10,2,10).should == Matrix[[], []]
      @matrix.minor(3,0,0,10).should == Matrix.columns([[], []])
    end

    it "ignores big nrows or ncols" do
      @matrix.minor(0,1,0,20).should == Matrix[ [1, 2] ]
      @matrix.minor(1,20,1,1).should == Matrix[ [4], [6] ]
    end
  end

  describe "with col_range, row_range" do
    it "returns the given portion of the Matrix" do
      @matrix.minor(0..0, 0..1).should == Matrix[ [1, 2] ]
      @matrix.minor(1..2, 1..2).should == Matrix[ [4], [6] ]
      @matrix.minor(1...3, 1...3).should == Matrix[ [4], [6] ]
    end

    it "returns nil if col_range or row_range is out of range" do
      r = @matrix.row_size + 1
      c = @matrix.column_size + 1
      @matrix.minor(r..6, c..6).should == nil
      @matrix.minor(0..1, c..6).should == nil
      @matrix.minor(r..6, 0..1).should == nil
      @matrix.minor(-r..6, -c..6).should == nil
      @matrix.minor(0..1, -c..6).should == nil
      @matrix.minor(-r..6, 0..1).should == nil
    end

    it "start counting backwards for col_range or row_range below zero" do
      @matrix.minor(0..1, -2..-1).should == @matrix.minor(0..1, 0..1)
      @matrix.minor(0..1, -2..1).should == @matrix.minor(0..1, 0..1)
      @matrix.minor(-2..-1, 0..1).should == @matrix.minor(1..2, 0..1)
      @matrix.minor(-2..2, 0..1).should == @matrix.minor(1..2, 0..1)
    end
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.ins.minor(0, 1, 0, 1).should be_an_instance_of(MatrixSub)
    end
  end
end
