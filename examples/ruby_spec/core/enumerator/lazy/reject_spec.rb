# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerator::Lazy#reject" do
  before :each do
    @yieldsmixed = EnumeratorLazySpecs::YieldsMixed.new.to_enum.lazy
    @eventsmixed = EnumeratorLazySpecs::EventsMixed.new.to_enum.lazy
    ScratchPad.record []
  end

  after :each do
    ScratchPad.clear
  end

  it "returns a new instance of Enumerator::Lazy" do
    ret = @yieldsmixed.reject {}
    ret.should be_an_instance_of(Enumerator::Lazy)
    ret.should_not equal(@yieldsmixed)
  end

  it "sets #size to nil" do
    Enumerator::Lazy.new(Object.new, 100) {}.reject {}.size.should == nil
  end

  describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.reject(&:even?).first(3).should == [1, 3, 5]

      @eventsmixed.reject { false }.first(1)
      ScratchPad.recorded.should == [:before_yield]
    end
  end

  it "calls the block with a gathered array when yield with multiple arguments" do
    yields = []
    @yieldsmixed.reject { |v| yields << v }.force
    yields.should == EnumeratorLazySpecs::YieldsMixed.gathered_yields
  end

  it "raises an ArgumentError when not given a block" do
    lambda { @yieldsmixed.reject }.should raise_error(ArgumentError)
  end

  describe "on a nested Lazy" do
    it "sets #size to nil" do
      Enumerator::Lazy.new(Object.new, 100) {}.take(20).reject {}.size.should == nil
    end

    describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.reject { |n| n < 4 }.reject(&:even?).first(3).should == [5, 7, 9]

        @eventsmixed.reject { false }.reject { false }.first(1)
        ScratchPad.recorded.should == [:before_yield]
      end
    end
  end
end
