require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix.[]" do

  it "requires arrays as parameters" do
    lambda { Matrix[5] }.should raise_error(TypeError)
    lambda { Matrix[nil] }.should raise_error(TypeError)
    lambda { Matrix[1..2] }.should raise_error(TypeError)
    lambda { Matrix[[1, 2], 3] }.should raise_error(TypeError)
  end

  it "creates an empty Matrix with no arguments" do
    m = Matrix[]
    m.column_size.should == 0
    m.row_size.should == 0
  end

  it "raises for non-rectangular matrices" do
    lambda{ Matrix[ [0], [0,1] ] }.should \
      raise_error(Matrix::ErrDimensionMismatch)
    lambda{ Matrix[ [0,1], [0,1,2], [0,1] ]}.should \
      raise_error(Matrix::ErrDimensionMismatch)
  end

  it "accepts vector arguments" do
    a = Matrix[Vector[1, 2], Vector[3, 4]]
    a.should be_an_instance_of(Matrix)
    a.should == Matrix[ [1, 2], [3, 4] ]
  end

  it "tries to calls :to_ary on arguments" do
    array = mock('ary')
    array.should_receive(:to_ary).and_return([1,2])
    Matrix[array, [3,4] ].should == Matrix[ [1,2], [3,4] ]
  end


  it "returns a Matrix object" do
    Matrix[ [1] ].should be_an_instance_of(Matrix)
  end

  it "can create an nxn Matrix" do
    m = Matrix[ [20,30], [40.5, 9] ]
    m.row_size.should == 2
    m.column_size.should == 2
    m.column(0).should == Vector[20, 40.5]
    m.column(1).should == Vector[30, 9]
    m.row(0).should == Vector[20, 30]
    m.row(1).should == Vector[40.5, 9]
  end

  it "can create a 0xn Matrix" do
    m = Matrix[ [], [], [] ]
    m.row_size.should == 3
    m.column_size.should == 0
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub[ [20,30], [40.5, 9] ].should be_an_instance_of(MatrixSub)
    end
  end
end
