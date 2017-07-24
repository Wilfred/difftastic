require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix#*" do
  before :each do
    @a = Matrix[ [1, 2], [3, 4] ]
    @b = Matrix[ [4, 5], [6, 7] ]
  end

  it "returns the result of multiplying the corresponding elements of self and a Matrix" do
    (@a * @b).should == Matrix[ [16,19], [36,43] ]
  end

  it "returns the result of multiplying the corresponding elements of self and a Vector" do
    (@a * Vector[1,2]).should == Vector[5, 11]
  end

  it "returns the result of multiplying the elements of self and a Fixnum" do
    (@a * 2).should == Matrix[ [2, 4], [6, 8] ]
  end

  it "returns the result of multiplying the elements of self and a Bignum" do
    (@a * bignum_value).should == Matrix[
      [9223372036854775808, 18446744073709551616],
      [27670116110564327424, 36893488147419103232]
    ]
  end

  it "returns the result of multiplying the elements of self and a Float" do
    (@a * 2.0).should == Matrix[ [2.0, 4.0], [6.0, 8.0] ]
  end

  it "raises a Matrix::ErrDimensionMismatch if the matrices are different sizes" do
    lambda { @a * Matrix[ [1] ] }.should raise_error(Matrix::ErrDimensionMismatch)
  end

  it "returns a zero matrix if (nx0) * (0xn)" do
    (Matrix[[],[],[]] * Matrix.columns([[],[],[]])).should == Matrix.zero(3)
  end

  it "returns an empty matrix if (0xn) * (nx0)" do
    (Matrix.columns([[],[],[]]) * Matrix[[],[],[]]).should == Matrix[]
  end

  it "returns a mx0 matrix if (mxn) * (nx0)" do
    (Matrix[[1,2],[3,4],[5,6]] * Matrix[[],[]]).should == Matrix[[],[],[]]
  end

  it "returns a 0xm matrix if (0xm) * (mxn)" do
    (Matrix.columns([[], [], []]) * Matrix[[1,2],[3,4],[5,6]]).should == Matrix.columns([[],[]])
  end

  it "raises a TypeError if other is of wrong type" do
    lambda { @a * nil        }.should raise_error(TypeError)
    lambda { @a * "a"        }.should raise_error(TypeError)
    lambda { @a * [ [1, 2] ] }.should raise_error(TypeError)
    lambda { @a * Object.new }.should raise_error(TypeError)
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      m = MatrixSub.ins
      (m*m).should be_an_instance_of(MatrixSub)
      (m*1).should be_an_instance_of(MatrixSub)
    end
  end
end
