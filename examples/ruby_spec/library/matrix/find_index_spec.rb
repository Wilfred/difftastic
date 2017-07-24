require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#find_index without any argument" do
  before :all do
    @m = Matrix[ [1, 2, 3, 4], [5, 6, 7, 8] ]
  end

  it "returns an Enumerator when called without a block" do
    enum = @m.find_index
    enum.should be_an_instance_of(Enumerator)
    enum.to_a.should == [1, 2, 3, 4, 5, 6, 7, 8]
  end

  it "returns nil if the block is always false" do
    @m.find_index{false}.should be_nil
  end

  it "returns the first index for which the block is true" do
    @m.find_index{|x| x >= 3}.should == [0, 2]
  end
end

describe "Matrix#find_index with a subselection argument" do
  before :all do
    @tests = [
    [  Matrix[ [1, 2, 3, 4], [5, 6, 7, 8] ], {
        diagonal: [1, 6]               ,
        off_diagonal: [2, 3, 4, 5, 7, 8],
        lower: [1, 5, 6]               ,
        strict_lower: [5]              ,
        strict_upper: [2, 3, 4, 7, 8]  ,
        upper: [1, 2, 3, 4, 6, 7, 8]   ,
      }
    ],
    [  Matrix[ [1, 2], [3, 4], [5, 6], [7, 8] ], {
        diagonal: [1, 4]               ,
        off_diagonal: [2, 3, 5, 6, 7, 8],
        lower: [1, 3, 4, 5, 6, 7, 8]   ,
        strict_lower: [3, 5, 6, 7, 8]  ,
        strict_upper: [2]              ,
        upper: [1, 2, 4]               ,
      }
    ]]
  end

  describe "and no generic argument" do
    it "returns an Enumerator when called without a block" do
      @tests.each do |matrix, h|
        h.each do |selector, result|
          matrix.find_index(selector).should be_an_instance_of(Enumerator)
        end
      end
    end

    it "yields the rights elements" do
      @tests.each do |matrix, h|
        h.each do |selector, result|
          matrix.find_index(selector).to_a.should == result
        end
      end
    end

    it "returns the first index for which the block returns true" do
      @tests.each do |matrix, h|
        h.each do |selector, result|
          cnt = result.size.div 2
          which = result[cnt]
          idx = matrix.find_index(selector){|x| cnt -= 1; x == which}
          matrix[*idx].should == which
          cnt.should == -1
        end
      end
    end

    it "returns nil if the block is always false" do
      @tests.each do |matrix, h|
        h.each do |selector, result|
          matrix.find_index(selector){ nil }.should == nil
        end
      end
    end

  end

  describe "and a generic argument" do
    it "ignores a block" do
      @m.find_index(42, :diagonal){raise "oups"}.should == nil
    end

    it "returns the index of the requested value" do
      @tests.each do |matrix, h|
        h.each do |selector, result|
          cnt = result.size / 2
          which = result[cnt]
          idx = matrix.find_index(which, selector)
          matrix[*idx].should == which
        end
      end
    end

    it "returns nil if the requested value is not found" do
      @tests.each do |matrix, h|
        h.each do |selector, result|
          matrix.find_index(42, selector).should == nil
        end
      end
    end
  end

end

describe "Matrix#find_index with only a generic argument" do
  before :all do
    @m = Matrix[ [1, 2, 3, 4], [1, 2, 3, 4] ]
  end

  it "returns nil if the value is not found" do
    @m.find_index(42).should be_nil
  end

  it "returns the first index for of the requested value" do
    @m.find_index(3).should == [0, 2]
  end

  it "ignores a block" do
    @m.find_index(4){raise "oups"}.should == [0, 3]
  end
end

describe "Matrix#find_index with two arguments" do
  it "raises an ArgumentError for an unrecognized last argument" do
    lambda {
      @m.find_index(1, "all"){}
    }.should raise_error(ArgumentError)
    lambda {
      @m.find_index(1, nil){}
    }.should raise_error(ArgumentError)
    lambda {
      @m.find_index(1, :left){}
    }.should raise_error(ArgumentError)
    lambda {
      @m.find_index(:diagonal, 1){}
    }.should raise_error(ArgumentError)
  end
end
