require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#all?" do

  before :each do
    @enum = EnumerableSpecs::Numerous.new
    @empty = EnumerableSpecs::Empty.new()
    @enum1 = [0, 1, 2, -1]
    @enum2 = [nil, false, true]
  end

  it "always returns true on empty enumeration" do
    @empty.all?.should == true
    @empty.all? { nil }.should == true

    [].all?.should == true
    [].all? { false }.should == true

    {}.all?.should == true
    {}.all? { nil }.should == true
  end

  it "does not hide exceptions out of #each" do
    lambda {
      EnumerableSpecs::ThrowingEach.new.all?
    }.should raise_error(RuntimeError)

    lambda {
      EnumerableSpecs::ThrowingEach.new.all? { false }
    }.should raise_error(RuntimeError)
  end

  describe "with no block" do
    it "returns true if no elements are false or nil" do
      @enum.all?.should == true
      @enum1.all?.should == true
      @enum2.all?.should == false

      EnumerableSpecs::Numerous.new('a','b','c').all?.should == true
      EnumerableSpecs::Numerous.new(0, "x", true).all?.should == true
    end

    it "returns false if there are false or nil elements" do
      EnumerableSpecs::Numerous.new(false).all?.should == false
      EnumerableSpecs::Numerous.new(false, false).all?.should == false

      EnumerableSpecs::Numerous.new(nil).all?.should == false
      EnumerableSpecs::Numerous.new(nil, nil).all?.should == false

      EnumerableSpecs::Numerous.new(1, nil, 2).all?.should == false
      EnumerableSpecs::Numerous.new(0, "x", false, true).all?.should == false
      @enum2.all?.should == false
    end

    it "gathers whole arrays as elements when each yields multiple" do
      multi = EnumerableSpecs::YieldsMultiWithFalse.new
      multi.all?.should be_true
    end

  end

  describe "with block" do
    it "returns true if the block never returns false or nil" do
      @enum.all? { true }.should == true
      @enum1.all?{ |o| o < 5 }.should == true
      @enum1.all?{ |o| 5 }.should == true
    end

    it "returns false if the block ever returns false or nil" do
      @enum.all? { false }.should == false
      @enum.all? { nil }.should == false
      @enum1.all?{ |o| o > 2 }.should == false

      EnumerableSpecs::Numerous.new.all? { |i| i > 5 }.should == false
      EnumerableSpecs::Numerous.new.all? { |i| i == 3 ? nil : true }.should == false
    end

    it "stops iterating once the return value is determined" do
      yielded = []
      EnumerableSpecs::Numerous.new(:one, :two, :three).all? do |e|
        yielded << e
        false
      end.should == false
      yielded.should == [:one]

      yielded = []
      EnumerableSpecs::Numerous.new(true, true, false, true).all? do |e|
        yielded << e
        e
      end.should == false
      yielded.should == [true, true, false]

      yielded = []
      EnumerableSpecs::Numerous.new(1, 2, 3, 4, 5).all? do |e|
        yielded << e
        e
      end.should == true
      yielded.should == [1, 2, 3, 4, 5]
    end

    it "does not hide exceptions out of the block" do
      lambda {
        @enum.all? { raise "from block" }
      }.should raise_error(RuntimeError)
    end

    it "gathers initial args as elements when each yields multiple" do
      multi = EnumerableSpecs::YieldsMulti.new
      multi.all? {|e| !(Array === e) }.should be_true
    end

    it "yields multiple arguments when each yields multiple" do
      multi = EnumerableSpecs::YieldsMulti.new
      yielded = []
      multi.all? {|e, i| yielded << [e, i] }
      yielded.should == [[1, 2], [3, 4], [6, 7]]
    end

  end
end
