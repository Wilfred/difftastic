require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix.columns" do
  before :each do
    @a = [1, 2]
    @b = [3, 4]
    @m = Matrix.columns([@a, @b])
  end

  it "creates a Matrix from argument columns" do
    @m.should be_an_instance_of(Matrix)
    @m.column(0).to_a.should == @a
    @m.column(1).to_a.should == @b
  end

  it "accepts Vectors as argument columns" do
    m = Matrix.columns([Vector[*@a], Vector[*@b]])
    m.should == @m
    m.column(0).to_a.should == @a
    m.column(1).to_a.should == @b
  end

  it "handles empty matrices" do
    e = Matrix.columns([])
    e.row_size.should == 0
    e.column_size.should == 0
    e.should == Matrix[]

    v = Matrix.columns([[],[],[]])
    v.row_size.should == 0
    v.column_size.should == 3
    v.should == Matrix[[], [], []].transpose
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.columns([[1]]).should be_an_instance_of(MatrixSub)
    end
  end
end
