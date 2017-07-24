# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerator::Lazy#drop_while" do
  before :each do
    @yieldsmixed = EnumeratorLazySpecs::YieldsMixed.new.to_enum.lazy
    @eventsmixed = EnumeratorLazySpecs::EventsMixed.new.to_enum.lazy
    ScratchPad.record []
  end

  after :each do
    ScratchPad.clear
  end

  it "returns a new instance of Enumerator::Lazy" do
    ret = @yieldsmixed.drop_while {}
    ret.should be_an_instance_of(Enumerator::Lazy)
    ret.should_not equal(@yieldsmixed)
  end

  it "sets #size to nil" do
    Enumerator::Lazy.new(Object.new, 100) {}.drop_while { |v| v }.size.should == nil
  end

  describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.drop_while { |n| n < 5 }.first(2).should == [5, 6]

      @eventsmixed.drop_while { false }.first(1)
      ScratchPad.recorded.should == [:before_yield]
    end
  end

  it "calls the block with initial values when yield with multiple arguments" do
    yields = []
    @yieldsmixed.drop_while { |v| yields << v; true }.force
    yields.should == EnumeratorLazySpecs::YieldsMixed.initial_yields
  end

  it "raises an ArgumentError when not given a block" do
    lambda { @yieldsmixed.drop_while }.should raise_error(ArgumentError)
  end

  describe "on a nested Lazy" do
    it "sets #size to nil" do
      Enumerator::Lazy.new(Object.new, 100) {}.take(20).drop_while { |v| v }.size.should == nil
    end

    describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.drop_while { |n| n < 5 }.drop_while { |n| n.odd? }.first(2).should == [6, 7]

        @eventsmixed.drop_while { false }.drop_while { false }.first(1)
        ScratchPad.recorded.should == [:before_yield]
      end
    end
  end
end
