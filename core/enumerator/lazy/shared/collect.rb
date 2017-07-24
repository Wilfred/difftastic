# -*- encoding: us-ascii -*-

require File.expand_path('../../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :enumerator_lazy_collect, shared: true do
  before :each do
    @yieldsmixed = EnumeratorLazySpecs::YieldsMixed.new.to_enum.lazy
    @eventsmixed = EnumeratorLazySpecs::EventsMixed.new.to_enum.lazy
    ScratchPad.record []
  end

  after :each do
    ScratchPad.clear
  end

  it "returns a new instance of Enumerator::Lazy" do
    ret = @yieldsmixed.send(@method) {}
    ret.should be_an_instance_of(Enumerator::Lazy)
    ret.should_not equal(@yieldsmixed)
  end

  it "keeps size" do
    Enumerator::Lazy.new(Object.new, 100) {}.send(@method) {}.size.should == 100
  end

  describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.send(@method, &:succ).first(3).should == [1, 2, 3]

      @eventsmixed.send(@method) {}.first(1)
      ScratchPad.recorded.should == [:before_yield]
    end
  end

  it "calls the block with initial values when yield with multiple arguments" do
    yields = []
    @yieldsmixed.send(@method) { |v| yields << v }.force
    yields.should == EnumeratorLazySpecs::YieldsMixed.initial_yields
  end

  describe "on a nested Lazy" do
    it "keeps size" do
      Enumerator::Lazy.new(Object.new, 100) {}.send(@method) {}.send(@method) {}.size.should == 100
    end

    describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.send(@method, &:succ).send(@method, &:succ).first(3).should == [2, 3, 4]

        @eventsmixed.send(@method) {}.send(@method) {}.first(1)
        ScratchPad.recorded.should == [:before_yield]
      end
    end
  end
end
