require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'matrix'

describe "Matrix#clone" do
  before :each do
    @a = Matrix[[1, 2], [3, 4], [5, 6]]
  end

  it "returns a shallow copy of the matrix" do
    b = @a.clone
    @a.should_not equal(b)
    b.should be_kind_of(Matrix)
    b.should == @a
    0.upto(@a.row_size - 1) do |i|
      @a.row(i).should_not equal(b.row(i))
    end
  end

  describe "for a subclass of Matrix" do
    it "returns an instance of that subclass" do
      MatrixSub.ins.clone.should be_an_instance_of(MatrixSub)
    end
  end
end
