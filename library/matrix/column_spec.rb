require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#column" do
  before :all do
    @m =  Matrix[[1,2,3], [2,3,4]]
  end

  it "returns a Vector when called without a block" do
    @m.column(1).should == Vector[2,3]
  end

  it "yields each element in the column to the block" do
    a = []
    @m.column(1) {|n| a << n }
    a.should == [2,3]
  end

  it "counts backwards for negative argument" do
    @m.column(-1).should == Vector[3, 4]
  end

  it "returns self when called with a block" do
    @m.column(0) { |x| x }.should equal(@m)
  end

  it "returns nil when out of bounds" do
    @m.column(3).should == nil
  end

  it "never yields when out of bounds" do
    lambda { @m.column(3){ raise } }.should_not raise_error
    lambda { @m.column(-4){ raise } }.should_not raise_error
  end
end
