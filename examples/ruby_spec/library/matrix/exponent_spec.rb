require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix#**" do

  describe "given an integer _n_" do
    it "multiples the Matrix by itself _n_ times" do
      m = Matrix[ [7,6], [3,9] ]
      (m ** 1).should == m
      (m ** 2).should == Matrix[ [67, 96], [48,99] ]
      (m ** 2).should == m * m
      (m ** 3).should == m * m * m
      (m ** 4).should == m * m * m * m
      (m ** 5).should == m * m * m * m * m
    end

    it "raises a ErrDimensionMismatch for non square matrices" do
      m = Matrix[ [1, 1], [1, 2], [2, 3]]
      lambda { m ** 3 }.should raise_error(Matrix::ErrDimensionMismatch)
      lambda { m ** 0 }.should raise_error(Matrix::ErrDimensionMismatch)
    end

    describe "that is <= 0" do
      it "returns the inverse of **(-n)" do
        m = Matrix[ [1, 1], [1, 2] ]
        (m ** -2).should == Matrix[ [5, -3], [-3, 2]]
        (m ** -4).should == (m.inverse ** 4)
      end

      it "raises a ErrDimensionMismatch for irregular matrices" do
        m = Matrix[ [1, 1], [1, 1] ]
        lambda { m ** -2 }.should raise_error(Matrix::ErrNotRegular)
        lambda { m ** 0 }.should raise_error(Matrix::ErrNotRegular)
      end
    end
  end

  it "returns the power for non integer powers" do
    a = Matrix[[5, 4], [4, 5]]
    ((a ** 0.5) ** 2).round(8).should == a
    a = Matrix[[7, 10], [15, 22]]
    ((a ** 0.25) ** 4).round(8).should == a
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      (MatrixSub.ins ** 1).should be_an_instance_of(MatrixSub)
    end
  end
end
