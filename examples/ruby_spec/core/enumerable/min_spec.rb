require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#min" do
  before :each do
    @e_strs = EnumerableSpecs::EachDefiner.new("333", "22", "666666", "1", "55555", "1010101010")
    @e_ints = EnumerableSpecs::EachDefiner.new( 333,   22,   666666,   55555, 1010101010)
  end

  it "min should return the minimum element" do
    EnumerableSpecs::Numerous.new.min.should == 1
  end

  it "returns the minimum (basic cases)" do
    EnumerableSpecs::EachDefiner.new(55).min.should == 55

    EnumerableSpecs::EachDefiner.new(11,99).min.should ==  11
    EnumerableSpecs::EachDefiner.new(99,11).min.should == 11
    EnumerableSpecs::EachDefiner.new(2, 33, 4, 11).min.should == 2

    EnumerableSpecs::EachDefiner.new(1,2,3,4,5).min.should == 1
    EnumerableSpecs::EachDefiner.new(5,4,3,2,1).min.should == 1
    EnumerableSpecs::EachDefiner.new(4,1,3,5,2).min.should == 1
    EnumerableSpecs::EachDefiner.new(5,5,5,5,5).min.should == 5

    EnumerableSpecs::EachDefiner.new("aa","tt").min.should == "aa"
    EnumerableSpecs::EachDefiner.new("tt","aa").min.should == "aa"
    EnumerableSpecs::EachDefiner.new("2","33","4","11").min.should == "11"

    @e_strs.min.should == "1"
    @e_ints.min.should == 22
  end

  it "returns nil for an empty Enumerable" do
    EnumerableSpecs::EachDefiner.new.min.should be_nil
  end

  it "raises a NoMethodError for elements without #<=>" do
    lambda do
      EnumerableSpecs::EachDefiner.new(BasicObject.new, BasicObject.new).min
    end.should raise_error(NoMethodError)
  end

  it "raises an ArgumentError for incomparable elements" do
    lambda do
      EnumerableSpecs::EachDefiner.new(11,"22").min
    end.should raise_error(ArgumentError)
    lambda do
      EnumerableSpecs::EachDefiner.new(11,12,22,33).min{|a, b| nil}
    end.should raise_error(ArgumentError)
  end

  it "returns the minimum when using a block rule" do
    EnumerableSpecs::EachDefiner.new("2","33","4","11").min {|a,b| a <=> b }.should == "11"
    EnumerableSpecs::EachDefiner.new( 2 , 33 , 4 , 11 ).min {|a,b| a <=> b }.should == 2

    EnumerableSpecs::EachDefiner.new("2","33","4","11").min {|a,b| b <=> a }.should == "4"
    EnumerableSpecs::EachDefiner.new( 2 , 33 , 4 , 11 ).min {|a,b| b <=> a }.should == 33

    EnumerableSpecs::EachDefiner.new( 1, 2, 3, 4 ).min {|a,b| 15 }.should == 1

    EnumerableSpecs::EachDefiner.new(11,12,22,33).min{|a, b| 2 }.should == 11
    @i = -2
    EnumerableSpecs::EachDefiner.new(11,12,22,33).min{|a, b| @i += 1 }.should == 12

    @e_strs.min {|a,b| a.length <=> b.length }.should == "1"

    @e_strs.min {|a,b| a <=> b }.should == "1"
    @e_strs.min {|a,b| a.to_i <=> b.to_i }.should == "1"

    @e_ints.min {|a,b| a <=> b }.should == 22
    @e_ints.min {|a,b| a.to_s <=> b.to_s }.should == 1010101010
  end

  it "returns the minimum for enumerables that contain nils" do
    arr = EnumerableSpecs::Numerous.new(nil, nil, true)
    arr.min { |a, b|
      x = a.nil? ? -1 : a ? 0 : 1
      y = b.nil? ? -1 : b ? 0 : 1
      x <=> y
    }.should == nil
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.min.should == [1, 2]
  end

  context "when called with an argument n" do
    context "without a block" do
      it "returns an array containing the minimum n elements" do
        result = @e_ints.min(2)
        result.should == [22, 333]
      end
    end

    context "with a block" do
      it "returns an array containing the minimum n elements" do
        result = @e_ints.min(2) { |a, b| a * 2 <=> b * 2 }
        result.should == [22, 333]
      end
    end

    context "on a enumerable of length x where x < n" do
      it "returns an array containing the minimum n elements of length x" do
        result = @e_ints.min(500)
        result.length.should == 5
      end
    end

    context "that is negative" do
      it "raises an ArgumentError" do
        lambda { @e_ints.min(-1) }.should raise_error(ArgumentError)
      end
    end
  end

  context "that is nil" do
    it "returns the minimum element" do
      @e_ints.min(nil).should == 22
    end
  end
end
