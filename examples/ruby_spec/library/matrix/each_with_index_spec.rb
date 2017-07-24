require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#each_with_index" do
  before :all do
    @m = Matrix[ [1, 2, 3], [4, 5, 6] ]
    @result = [
      [1, 0, 0],
      [2, 0, 1],
      [3, 0, 2],
      [4, 1, 0],
      [5, 1, 1],
      [6, 1, 2]
    ]
  end

  it "returns an Enumerator when called without a block" do
    enum = @m.each_with_index
    enum.should be_an_instance_of(Enumerator)
    enum.to_a.should == @result
  end

  it "returns self" do
    @m.each_with_index{}.should equal(@m)
  end

  it "yields the elements starting with the those of the first row" do
    a = []
    @m.each_with_index {|x, r, c| a << [x, r, c]}
    a.should == @result
  end
end

describe "Matrix#each_with_index with an argument" do
  before :all do
    @m = Matrix[ [1, 2, 3, 4], [5, 6, 7, 8] ]
    @t = Matrix[ [1, 2], [3, 4], [5, 6], [7, 8] ]
  end

  it "raises an ArgumentError for unrecognized argument" do
    lambda {
      @m.each_with_index("all"){}
    }.should raise_error(ArgumentError)
    lambda {
      @m.each_with_index(nil){}
    }.should raise_error(ArgumentError)
    lambda {
      @m.each_with_index(:left){}
    }.should raise_error(ArgumentError)
  end

  it "yields the rights elements when passed :diagonal" do
    @m.each_with_index(:diagonal).to_a.should == [[1, 0, 0], [6, 1, 1]]
    @t.each_with_index(:diagonal).to_a.should == [[1, 0, 0], [4, 1, 1]]
  end

  it "yields the rights elements when passed :off_diagonal" do
    @m.each_with_index(:off_diagonal).to_a.should == [[2, 0, 1], [3, 0, 2], [4, 0, 3], [5, 1, 0], [7, 1, 2], [8, 1, 3]]
    @t.each_with_index(:off_diagonal).to_a.should == [[2, 0, 1], [3, 1, 0], [5, 2, 0], [6, 2, 1], [7, 3, 0], [8, 3, 1]]
  end

  it "yields the rights elements when passed :lower" do
    @m.each_with_index(:lower).to_a.should == [[1, 0, 0], [5, 1, 0], [6, 1, 1]]
    @t.each_with_index(:lower).to_a.should == [[1, 0, 0], [3, 1, 0], [4, 1, 1], [5, 2, 0], [6, 2, 1], [7, 3, 0], [8, 3, 1]]
  end

  it "yields the rights elements when passed :strict_lower" do
    @m.each_with_index(:strict_lower).to_a.should == [[5, 1, 0]]
    @t.each_with_index(:strict_lower).to_a.should == [[3, 1, 0], [5, 2, 0], [6, 2, 1], [7, 3, 0], [8, 3, 1]]
  end

  it "yields the rights elements when passed :strict_upper" do
    @m.each_with_index(:strict_upper).to_a.should == [[2, 0, 1], [3, 0, 2], [4, 0, 3], [7, 1, 2], [8, 1, 3]]
    @t.each_with_index(:strict_upper).to_a.should == [[2, 0, 1]]
  end

  it "yields the rights elements when passed :upper" do
    @m.each_with_index(:upper).to_a.should == [[1, 0, 0], [2, 0, 1], [3, 0, 2], [4, 0, 3], [6, 1, 1], [7, 1, 2], [8, 1, 3]]
    @t.each_with_index(:upper).to_a.should == [[1, 0, 0], [2, 0, 1], [4, 1, 1]]
  end
end
