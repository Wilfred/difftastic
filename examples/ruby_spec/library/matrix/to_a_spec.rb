require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#to_a" do
  it "returns the array of arrays that describe the rows of the matrix" do
    Matrix[].to_a.should == []
    Matrix[[]].to_a.should == [[]]
    Matrix[[1]].to_a.should == [[1]]
    Matrix[[1, 2], [3, 4]].to_a.should == [[1, 2],[3, 4]]
  end
end
