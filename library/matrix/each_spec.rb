require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#each" do
  before :all do
    @m = Matrix[ [1, 2, 3], [4, 5, 6] ]
    @result = (1..6).to_a
  end

  it "returns an Enumerator when called without a block" do
    enum = @m.each
    enum.should be_an_instance_of(Enumerator)
    enum.to_a.should == @result
  end

  it "returns self" do
    @m.each{}.should equal(@m)
  end

  it "yields the elements starting with the those of the first row" do
    a = []
    @m.each {|x| a << x}
    a.should ==  @result
  end
end

describe "Matrix#each with an argument" do
  before :all do
    @m = Matrix[ [1, 2, 3, 4], [5, 6, 7, 8] ]
    @t = Matrix[ [1, 2], [3, 4], [5, 6], [7, 8] ]
  end

  it "raises an ArgumentError for unrecognized argument" do
    lambda {
      @m.each("all"){}
    }.should raise_error(ArgumentError)
    lambda {
      @m.each(nil){}
    }.should raise_error(ArgumentError)
    lambda {
      @m.each(:left){}
    }.should raise_error(ArgumentError)
  end

  it "yields the rights elements when passed :diagonal" do
    @m.each(:diagonal).to_a.should == [1, 6]
    @t.each(:diagonal).to_a.should == [1, 4]
  end

  it "yields the rights elements when passed :off_diagonal" do
    @m.each(:off_diagonal).to_a.should == [2, 3, 4, 5, 7, 8]
    @t.each(:off_diagonal).to_a.should == [2, 3, 5, 6, 7, 8]
  end

  it "yields the rights elements when passed :lower" do
    @m.each(:lower).to_a.should == [1, 5, 6]
    @t.each(:lower).to_a.should == [1, 3, 4, 5, 6, 7, 8]
  end

  it "yields the rights elements when passed :strict_lower" do
    @m.each(:strict_lower).to_a.should == [5]
    @t.each(:strict_lower).to_a.should == [3, 5, 6, 7, 8]
  end

  it "yields the rights elements when passed :strict_upper" do
    @m.each(:strict_upper).to_a.should == [2, 3, 4, 7, 8]
    @t.each(:strict_upper).to_a.should == [2]
  end

  it "yields the rights elements when passed :upper" do
    @m.each(:upper).to_a.should == [1, 2, 3, 4, 6, 7, 8]
    @t.each(:upper).to_a.should == [1, 2, 4]
  end
end
