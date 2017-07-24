# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerator::Lazy#zip" do
  before :each do
    @yieldsmixed = EnumeratorLazySpecs::YieldsMixed.new.to_enum.lazy
    @eventsmixed = EnumeratorLazySpecs::EventsMixed.new.to_enum.lazy
    ScratchPad.record []
  end

  after :each do
    ScratchPad.clear
  end

  it "returns a new instance of Enumerator::Lazy" do
    ret = @yieldsmixed.zip []
    ret.should be_an_instance_of(Enumerator::Lazy)
    ret.should_not equal(@yieldsmixed)
  end

  it "keeps size" do
    Enumerator::Lazy.new(Object.new, 100) {}.zip([], []).size.should == 100
  end

  describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.zip([4, 5], [8]).first(2).should == [[0, 4, 8], [1, 5, nil]]

      @eventsmixed.zip([0, 1]).first(1)
      ScratchPad.recorded.should == [:before_yield]
    end
  end

  it "calls the block with a gathered array when yield with multiple arguments" do
    yields = @yieldsmixed.zip(EnumeratorLazySpecs::YieldsMixed.new.to_enum).force
    yields.should == [EnumeratorLazySpecs::YieldsMixed.gathered_yields,
                      EnumeratorLazySpecs::YieldsMixed.gathered_yields].transpose
  end

  it "returns a Lazy when no arguments given" do
    @yieldsmixed.zip.should be_an_instance_of(Enumerator::Lazy)
  end

  it "raises a TypeError if arguments contain non-list object" do
    lambda { @yieldsmixed.zip [], Object.new, [] }.should raise_error(TypeError)
  end

  describe "on a nested Lazy" do
    it "keeps size" do
      Enumerator::Lazy.new(Object.new, 100) {}.map {}.zip([], []).size.should == 100
    end

    it "behaves as Enumerable#zip when given a block" do
      lazy_yields = []
      lazy_ret = @yieldsmixed.zip(EnumeratorLazySpecs::YieldsMixed.new.to_enum) { |lists| lazy_yields << lists }
      enum_yields = []
      enum_ret = EnumeratorLazySpecs::YieldsMixed.new.to_enum.zip(EnumeratorLazySpecs::YieldsMixed.new.to_enum) { |lists| enum_yields << lists }

      lazy_yields.should == enum_yields
      lazy_ret.should == enum_ret
    end

    describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.map(&:succ).zip([4, 5], [8]).first(2).should == [[1, 4, 8], [2, 5, nil]]

        @eventsmixed.zip([0, 1]).zip([0, 1]).first(1)
        ScratchPad.recorded.should == [:before_yield]
      end
    end
  end
end
