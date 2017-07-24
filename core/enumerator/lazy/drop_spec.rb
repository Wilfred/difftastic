# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerator::Lazy#drop" do
  before :each do
    @yieldsmixed = EnumeratorLazySpecs::YieldsMixed.new.to_enum.lazy
    @eventsmixed = EnumeratorLazySpecs::EventsMixed.new.to_enum.lazy
    ScratchPad.record []
  end

  after :each do
    ScratchPad.clear
  end

  it "returns a new instance of Enumerator::Lazy" do
    ret = @yieldsmixed.drop(1)
    ret.should be_an_instance_of(Enumerator::Lazy)
    ret.should_not equal(@yieldsmixed)
  end

  it "sets difference of given count with old size to new size" do
    Enumerator::Lazy.new(Object.new, 100) {}.drop(20).size.should == 80
    Enumerator::Lazy.new(Object.new, 100) {}.drop(200).size.should == 0
  end

  describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.drop(2).first(2).should == [2, 3]

      @eventsmixed.drop(0).first(1)
      ScratchPad.recorded.should == [:before_yield]
    end
  end

  describe "on a nested Lazy" do
    it "sets difference of given count with old size to new size" do
      Enumerator::Lazy.new(Object.new, 100) {}.drop(20).drop(50).size.should == 30
      Enumerator::Lazy.new(Object.new, 100) {}.drop(50).drop(20).size.should == 30
    end

    describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.drop(2).drop(2).first(2).should == [4, 5]

        @eventsmixed.drop(0).drop(0).first(1)
        ScratchPad.recorded.should == [:before_yield]
      end
    end
  end
end
