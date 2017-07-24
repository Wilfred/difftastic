require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#row" do
  before :all do
    @m = Matrix[ [1, 2], [2, 3], [3, 4] ]
  end

  it "returns a Vector when called without a block" do
    @m.row(0).should == Vector[1,2]
  end

  it "yields the elements of the row when called with a block" do
    a = []
    @m.row(0) {|x| a << x}
    a.should == [1,2]
  end

  it "counts backwards for negative argument" do
    @m.row(-1).should == Vector[3, 4]
  end

  it "returns self when called with a block" do
    @m.row(0) { |x| x }.should equal(@m)
  end

  it "returns nil when out of bounds" do
    @m.row(3).should == nil
    @m.row(-4).should == nil
  end

  it "never yields when out of bounds" do
    lambda { @m.row(3){ raise } }.should_not raise_error
    lambda { @m.row(-4){ raise } }.should_not raise_error
  end
end
