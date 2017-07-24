require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix.column_vector" do

  it "returns a single column Matrix when called with an Array" do
    m = Matrix.column_vector([4,5,6])
    m.should be_an_instance_of(Matrix)
    m.should == Matrix[ [4],[5],[6] ]
  end

  it "returns an empty Matrix when called with an empty Array" do
    m = Matrix.column_vector([])
    m.should be_an_instance_of(Matrix)
    m.row_size.should == 0
    m.column_size.should == 1
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.column_vector([4,5,6]).should be_an_instance_of(MatrixSub)
    end
  end
end
