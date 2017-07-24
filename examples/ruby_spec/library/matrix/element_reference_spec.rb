require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#[]" do

  before :all do
    @m = Matrix[[0, 1, 2], [3, 4, 5], [6, 7, 8], [9, 10, 11]]
  end

  it "returns element at (i, j)" do
    (0..3).each do |i|
      (0..2).each do |j|
        @m[i, j].should == (i * 3) + j
      end
    end
  end

  it "returns nil for an invalid index pair" do
    @m[8,1].should be_nil
    @m[1,8].should be_nil
  end

end
