# -*- encoding: us-ascii -*-

require File.expand_path('../../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :enumerator_lazy_select, shared: true do
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

  it "sets #size to nil" do
    Enumerator::Lazy.new(Object.new, 100) {}.send(@method) { true }.size.should == nil
  end

  describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.send(@method, &:even?).first(3).should == [0, 2, 4]

      @eventsmixed.send(@method) { true }.first(1)
      ScratchPad.recorded.should == [:before_yield]
    end
  end

  it "calls the block with a gathered array when yield with multiple arguments" do
    yields = []
    @yieldsmixed.send(@method) { |v| yields << v }.force
    yields.should == EnumeratorLazySpecs::YieldsMixed.gathered_yields
  end

  it "raises an ArgumentError when not given a block" do
    lambda { @yieldsmixed.send(@method) }.should raise_error(ArgumentError)
  end

  describe "on a nested Lazy" do
    it "sets #size to nil" do
      Enumerator::Lazy.new(Object.new, 100) {}.take(50) {}.send(@method) { true }.size.should == nil
    end

    describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.send(@method) { |n| n > 5 }.send(@method, &:even?).first(3).should == [6, 8, 10]

        @eventsmixed.send(@method) { true }.send(@method) { true }.first(1)
        ScratchPad.recorded.should == [:before_yield]
      end
    end
  end
end
