require File.expand_path('../../fixtures/classes', __FILE__)
require 'matrix'

describe :matrix_imaginary, shared: true do
  it "returns a matrix with the imaginary part of the elements of the receiver" do
    Matrix[ [1,   2], [3, 4] ].send(@method).should == Matrix[ [0,   0], [0, 0] ]
    Matrix[ [1.9, Complex(1,1)], [Complex(-2,0.42), 4] ].send(@method).should == Matrix[ [0, 1], [0.42, 0] ]
  end

  it "returns empty matrices on the same size if empty" do
    Matrix.empty(0, 3).send(@method).should == Matrix.empty(0, 3)
    Matrix.empty(3, 0).send(@method).should == Matrix.empty(3, 0)
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.ins.send(@method).should be_an_instance_of(MatrixSub)
    end
  end
end
