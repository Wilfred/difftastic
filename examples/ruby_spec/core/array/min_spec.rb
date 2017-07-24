require File.expand_path('../../../spec_helper', __FILE__)

describe "Array#min" do
  it "returns nil with no values" do
    [].min.should == nil
  end

  it "returns only element in one element array" do
    [1].min.should == 1
  end

  it "returns smallest value with multiple elements" do
    [1,2].min.should == 1
    [2,1].min.should == 1
  end

  describe "given a block with one argument" do
    it "yields in turn the last length-1 values from the array" do
      ary = []
      result = [1,2,3,4,5].min {|x| ary << x; x}

      ary.should == [2,3,4,5]
      result.should == 1
    end
  end
end

# From Enumerable#min, copied for better readability
describe "Array#min" do
  before :each do
    @a = [2, 4, 6, 8, 10]

    @e_strs = ["333", "22", "666666", "1", "55555", "1010101010"]
    @e_ints = [ 333,   22,   666666,        55555,   1010101010]
  end

  it "min should return the minimum element" do
    [18, 42].min.should == 18
    [2, 5, 3, 6, 1, 4].min.should == 1
  end

  it "returns the minimum (basic cases)" do
    [55].min.should == 55

    [11,99].min.should ==  11
    [99,11].min.should == 11
    [2, 33, 4, 11].min.should == 2

    [1,2,3,4,5].min.should == 1
    [5,4,3,2,1].min.should == 1
    [4,1,3,5,2].min.should == 1
    [5,5,5,5,5].min.should == 5

    ["aa","tt"].min.should == "aa"
    ["tt","aa"].min.should == "aa"
    ["2","33","4","11"].min.should == "11"

    @e_strs.min.should == "1"
    @e_ints.min.should == 22
  end

  it "returns nil for an empty Enumerable" do
    [].min.should be_nil
  end

  it "raises a NoMethodError for elements without #<=>" do
    lambda do
      [BasicObject.new, BasicObject.new].min
    end.should raise_error(NoMethodError)
  end

  it "raises an ArgumentError for incomparable elements" do
    lambda do
      [11,"22"].min
    end.should raise_error(ArgumentError)
    lambda do
      [11,12,22,33].min{|a, b| nil}
    end.should raise_error(ArgumentError)
  end

  it "returns the minimum when using a block rule" do
    ["2","33","4","11"].min {|a,b| a <=> b }.should == "11"
    [ 2 , 33 , 4 , 11 ].min {|a,b| a <=> b }.should == 2

    ["2","33","4","11"].min {|a,b| b <=> a }.should == "4"
    [ 2 , 33 , 4 , 11 ].min {|a,b| b <=> a }.should == 33

    [ 1, 2, 3, 4 ].min {|a,b| 15 }.should == 1

    [11,12,22,33].min{|a, b| 2 }.should == 11
    @i = -2
    [11,12,22,33].min{|a, b| @i += 1 }.should == 12

    @e_strs.min {|a,b| a.length <=> b.length }.should == "1"

    @e_strs.min {|a,b| a <=> b }.should == "1"
    @e_strs.min {|a,b| a.to_i <=> b.to_i }.should == "1"

    @e_ints.min {|a,b| a <=> b }.should == 22
    @e_ints.min {|a,b| a.to_s <=> b.to_s }.should == 1010101010
  end

  it "returns the minimum for enumerables that contain nils" do
    arr = [nil, nil, true]
    arr.min { |a, b|
      x = a.nil? ? -1 : a ? 0 : 1
      y = b.nil? ? -1 : b ? 0 : 1
      x <=> y
    }.should == nil
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = [[1,2], [3,4,5], [6,7,8,9]]
    multi.min.should == [1, 2]
  end

end
