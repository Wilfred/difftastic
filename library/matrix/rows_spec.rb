require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix.rows" do
  before :each do
    @a = [1, 2]
    @b = [3, 4]
    @m = Matrix.rows([@a, @b])
  end

  it "returns a Matrix" do
    @m.should be_kind_of(Matrix)
  end

  it "creates a matrix from argument rows" do
    @m.row(0).to_a.should == @a
    @m.row(1).to_a.should == @b
  end

  it "copies the original rows by default" do
    @a << 3
    @b << 6
    @m.row(0).should_not equal(@a)
    @m.row(1).should_not equal(@b)
  end

  it "references the original rows if copy is false" do
    @m_ref = Matrix.rows([@a, @b], false)
    @a << 3
    @b << 6
    @m_ref.row(0).to_a.should == @a
    @m_ref.row(1).to_a.should == @b
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.rows([[0, 1], [0, 1]]).should be_an_instance_of(MatrixSub)
    end
  end
end
