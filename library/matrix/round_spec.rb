require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix#round" do
  it "returns a matrix with all entries rounded" do
    Matrix[ [1,   2.34], [5.67, 8] ].round.should == Matrix[ [1, 2], [6, 8] ]
    Matrix[ [1,   2.34], [5.67, 8] ].round(1).should == Matrix[ [1, 2.3], [5.7, 8] ]
  end

  it "returns empty matrices on the same size if empty" do
    Matrix.empty(0, 3).round.should == Matrix.empty(0, 3)
    Matrix.empty(3, 0).round(42).should == Matrix.empty(3, 0)
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.ins.round.should be_an_instance_of(MatrixSub)
    end
  end
end
