require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#any?" do
  before :each do
    @enum = EnumerableSpecs::Numerous.new
    @empty = EnumerableSpecs::Empty.new()
    @enum1 = [0, 1, 2, -1]
    @enum2 = [nil, false, true]
  end

  it "always returns false on empty enumeration" do
    @empty.any?.should == false
    @empty.any? { nil }.should == false

    [].any?.should == false
    [].any? { false }.should == false

    {}.any?.should == false
    {}.any? { nil }.should == false
  end

  it "raises an ArgumentError when any arguments provided" do
    lambda { @enum.any?(Proc.new {}) }.should raise_error(ArgumentError)
    lambda { @enum.any?(nil) }.should raise_error(ArgumentError)
    lambda { @empty.any?(1) }.should raise_error(ArgumentError)
    lambda { @enum1.any?(1) {} }.should raise_error(ArgumentError)
    lambda { @enum2.any?(1, 2, 3) {} }.should raise_error(ArgumentError)
  end

  it "does not hide exceptions out of #each" do
    lambda {
      EnumerableSpecs::ThrowingEach.new.any?
    }.should raise_error(RuntimeError)

    lambda {
      EnumerableSpecs::ThrowingEach.new.any? { false }
    }.should raise_error(RuntimeError)
  end

  describe "with no block" do
    it "returns true if any element is not false or nil" do
      @enum.any?.should == true
      @enum1.any?.should == true
      @enum2.any?.should == true
      EnumerableSpecs::Numerous.new(true).any?.should == true
      EnumerableSpecs::Numerous.new('a','b','c').any?.should == true
      EnumerableSpecs::Numerous.new('a','b','c', nil).any?.should == true
      EnumerableSpecs::Numerous.new(1, nil, 2).any?.should == true
      EnumerableSpecs::Numerous.new(1, false).any?.should == true
      EnumerableSpecs::Numerous.new(false, nil, 1, false).any?.should == true
      EnumerableSpecs::Numerous.new(false, 0, nil).any?.should == true
    end

    it "returns false if all elements are false or nil" do
      EnumerableSpecs::Numerous.new(false).any?.should == false
      EnumerableSpecs::Numerous.new(false, false).any?.should == false
      EnumerableSpecs::Numerous.new(nil).any?.should == false
      EnumerableSpecs::Numerous.new(nil, nil).any?.should == false
      EnumerableSpecs::Numerous.new(nil, false, nil).any?.should == false
    end

    it "gathers whole arrays as elements when each yields multiple" do
      multi = EnumerableSpecs::YieldsMultiWithFalse.new
      multi.any?.should be_true
    end
  end

  describe "with block" do
    it "returns true if the block ever returns other than false or nil" do
      @enum.any? { true } == true
      @enum.any? { 0 } == true
      @enum.any? { 1 } == true

      @enum1.any? { Object.new } == true
      @enum1.any?{ |o| o < 1 }.should == true
      @enum1.any?{ |o| 5 }.should == true

      @enum2.any? { |i| i == nil }.should == true
    end

    it "any? should return false if the block never returns other than false or nil" do
      @enum.any? { false }.should == false
      @enum.any? { nil }.should == false

      @enum1.any?{ |o| o < -10 }.should == false
      @enum1.any?{ |o| nil }.should == false

      @enum2.any? { |i| i == :stuff }.should == false
    end

    it "stops iterating once the return value is determined" do
      yielded = []
      EnumerableSpecs::Numerous.new(:one, :two, :three).any? do |e|
        yielded << e
        false
      end.should == false
      yielded.should == [:one, :two, :three]

      yielded = []
      EnumerableSpecs::Numerous.new(true, true, false, true).any? do |e|
        yielded << e
        e
      end.should == true
      yielded.should == [true]

      yielded = []
      EnumerableSpecs::Numerous.new(false, nil, false, true, false).any? do |e|
        yielded << e
        e
      end.should == true
      yielded.should == [false, nil, false, true]

      yielded = []
      EnumerableSpecs::Numerous.new(1, 2, 3, 4, 5).any? do |e|
        yielded << e
        e
      end.should == true
      yielded.should == [1]
    end

    it "does not hide exceptions out of the block" do
      lambda {
        @enum.any? { raise "from block" }
      }.should raise_error(RuntimeError)
    end

    it "gathers initial args as elements when each yields multiple" do
      multi = EnumerableSpecs::YieldsMulti.new
      multi.any? {|e| e == 1 }.should be_true
    end

    it "yields multiple arguments when each yields multiple" do
      multi = EnumerableSpecs::YieldsMulti.new
      yielded = []
      multi.any? {|e, i| yielded << [e, i] }
      yielded.should == [[1, 2]]
    end

  end
end
