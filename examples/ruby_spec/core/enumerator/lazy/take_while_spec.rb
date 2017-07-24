# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerator::Lazy#take_while" do
  before :each do
    @yieldsmixed = EnumeratorLazySpecs::YieldsMixed.new.to_enum.lazy
    @eventsmixed = EnumeratorLazySpecs::EventsMixed.new.to_enum.lazy
    ScratchPad.record []
  end

  after :each do
    ScratchPad.clear
  end

  it "returns a new instance of Enumerator::Lazy" do
    ret = @yieldsmixed.take_while {}
    ret.should be_an_instance_of(Enumerator::Lazy)
    ret.should_not equal(@yieldsmixed)
  end

  it "sets #size to nil" do
    Enumerator::Lazy.new(Object.new, 100) {}.take_while { true }.size.should == nil
  end

  describe "when the returned lazy enumerator is evaluated by .force" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.take_while { |n| n < 3 }.force.should == [0, 1, 2]

      @eventsmixed.take_while { false }.force
      ScratchPad.recorded.should == [:before_yield]
    end
  end

  it "calls the block with initial values when yield with multiple arguments" do
    yields = []
    @yieldsmixed.take_while { |v| yields << v; true }.force
    yields.should == EnumeratorLazySpecs::YieldsMixed.initial_yields
  end

  it "raises an ArgumentError when not given a block" do
    lambda { @yieldsmixed.take_while }.should raise_error(ArgumentError)
  end

  describe "on a nested Lazy" do
    it "sets #size to nil" do
      Enumerator::Lazy.new(Object.new, 100) {}.take(20).take_while { true }.size.should == nil
    end

    describe "when the returned lazy enumerator is evaluated by .force" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.take_while { |n| n < 3 }.take_while(&:even?).force.should == [0]

        @eventsmixed.take_while { true }.take_while { false }.force
        ScratchPad.recorded.should == [:before_yield]
      end
    end
  end
end
