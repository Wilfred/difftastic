# -*- encoding: us-ascii -*-

require File.expand_path('../../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :enumerator_lazy_collect_concat, shared: true do
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
      (0..Float::INFINITY).lazy.send(@method) { |n| (n * 10).to_s }.first(6).should == %w[0 10 20 30 40 50]

      @eventsmixed.send(@method) {}.first(1)
      ScratchPad.recorded.should == [:before_yield]
    end

    it "flattens elements when the given block returned an array or responding to .each and .force" do
      (0..Float::INFINITY).lazy.send(@method) { |n| (n * 10).to_s.chars }.first(6).should == %w[0 1 0 2 0 3]
      (0..Float::INFINITY).lazy.send(@method) { |n| (n * 10).to_s.each_char }.first(6).all? { |o| o.instance_of? Enumerator }.should be_true
      (0..Float::INFINITY).lazy.send(@method) { |n| (n * 10).to_s.each_char.lazy }.first(6).should == %w[0 1 0 2 0 3]
    end
  end

  it "calls the block with initial values when yield with multiple arguments" do
    yields = []
    @yieldsmixed.send(@method) { |v| yields << v }.force
    yields.should == EnumeratorLazySpecs::YieldsMixed.initial_yields
  end

  it "raises an ArgumentError when not given a block" do
    lambda { @yieldsmixed.send(@method) }.should raise_error(ArgumentError)
  end

  describe "on a nested Lazy" do
    it "sets #size to nil" do
      Enumerator::Lazy.new(Object.new, 100) {}.take(50) {}.send(@method) {}.size.should == nil
    end

    describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.map {|n| n * 10 }.send(@method) { |n| n.to_s }.first(6).should == %w[0 10 20 30 40 50]

        @eventsmixed.send(@method) {}.send(@method) {}.first(1)
        ScratchPad.recorded.should == [:before_yield]
      end

      it "flattens elements when the given block returned an array or responding to .each and .force" do
        (0..Float::INFINITY).lazy.map {|n| n * 10 }.send(@method) { |n| n.to_s.chars }.first(6).should == %w[0 1 0 2 0 3]
        (0..Float::INFINITY).lazy.map {|n| n * 10 }.send(@method) { |n| n.to_s.each_char }.first(6).all? { |o| o.instance_of? Enumerator }.should be_true
        (0..Float::INFINITY).lazy.map {|n| n * 10 }.send(@method) { |n| n.to_s.each_char.lazy }.first(6).should == %w[0 1 0 2 0 3]
      end
    end
  end
end
