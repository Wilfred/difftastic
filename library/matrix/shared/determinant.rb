require 'matrix'

describe :determinant, shared: true do
  it "returns the determinant of a square Matrix" do
    m = Matrix[ [7,6], [3,9] ]
    m.send(@method).should == 45

    m = Matrix[ [9, 8], [6,5] ]
    m.send(@method).should == -3

    m = Matrix[ [9,8,3], [4,20,5], [1,1,1] ]
    m.send(@method).should == 95
  end

  it "returns the determinant of a single-element Matrix" do
    m = Matrix[ [2] ]
    m.send(@method).should == 2
  end

  it "returns 1 for an empty Matrix" do
    m = Matrix[ ]
    m.send(@method).should == 1
  end

  it "returns the determinant even for Matrices containing 0 as first entry" do
    Matrix[[0,1],[1,0]].send(@method).should == -1
  end

  it "raises an error for rectangular matrices" do
    lambda {
      Matrix[[1], [2], [3]].send(@method)
    }.should raise_error(Matrix::ErrDimensionMismatch)

    lambda {
      Matrix.empty(3,0).send(@method)
    }.should raise_error(Matrix::ErrDimensionMismatch)
  end
end
