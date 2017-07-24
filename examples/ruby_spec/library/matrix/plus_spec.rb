require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix#+" do
  before :each do
    @a = Matrix[ [1,2], [3,4] ]
    @b = Matrix[ [4,5], [6,7] ]
  end

  it "returns the result of adding the corresponding elements of self and other" do
    (@a + @b).should == Matrix[ [5,7], [9,11] ]
  end

  it "returns an instance of Matrix" do
    (@a + @b).should be_kind_of(Matrix)
  end

  it "raises a Matrix::ErrDimensionMismatch if the matrices are different sizes" do
    lambda { @a + Matrix[ [1] ] }.should raise_error(Matrix::ErrDimensionMismatch)
  end

  it "raises a ExceptionForMatrix::ErrOperationNotDefined if other is a Numeric Type" do
    lambda { @a + 2            }.should raise_error(ExceptionForMatrix::ErrOperationNotDefined)
    lambda { @a + 1.2          }.should raise_error(ExceptionForMatrix::ErrOperationNotDefined)
    lambda { @a + bignum_value }.should raise_error(ExceptionForMatrix::ErrOperationNotDefined)
  end

  it "raises a TypeError if other is of wrong type" do
    lambda { @a + nil        }.should raise_error(TypeError)
    lambda { @a + "a"        }.should raise_error(TypeError)
    lambda { @a + [ [1, 2] ] }.should raise_error(TypeError)
    lambda { @a + Object.new }.should raise_error(TypeError)
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      m = MatrixSub.ins
      (m+m).should be_an_instance_of(MatrixSub)
    end
  end
end
