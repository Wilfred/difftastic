# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerator::Lazy#take" do
  before :each do
    @yieldsmixed = EnumeratorLazySpecs::YieldsMixed.new.to_enum.lazy
    @eventsmixed = EnumeratorLazySpecs::EventsMixed.new.to_enum.lazy
    ScratchPad.record []
  end

  after :each do
    ScratchPad.clear
  end

  it "returns a new instance of Enumerator::Lazy" do
    ret = @yieldsmixed.take(1)
    ret.should be_an_instance_of(Enumerator::Lazy)
    ret.should_not equal(@yieldsmixed)
  end

  it "sets given count to size if the given count is less than old size" do
    Enumerator::Lazy.new(Object.new, 100) {}.take(20).size.should == 20
    Enumerator::Lazy.new(Object.new, 100) {}.take(200).size.should == 100
  end

  it "sets given count to size if the old size is Infinity" do
    loop.lazy.take(20).size.should == 20
  end

  describe "when the returned lazy enumerator is evaluated by .force" do
    it "stops after specified times" do
      (0..Float::INFINITY).lazy.take(2).force.should == [0, 1]

      @eventsmixed.take(1).force
      ScratchPad.recorded.should == [:before_yield]
    end

    it "stops without iterations if the given argument is 0" do
      @eventsmixed.take(0).force
      ScratchPad.recorded.should == []
    end
  end

  describe "on a nested Lazy" do
    it "sets given count to size if the given count is less than old size" do
      Enumerator::Lazy.new(Object.new, 100) {}.take(20).take(50).size.should == 20
      Enumerator::Lazy.new(Object.new, 100) {}.take(50).take(20).size.should == 20
    end

    describe "when the returned lazy enumerator is evaluated by .force" do
      it "stops after specified times" do
        (0..Float::INFINITY).lazy.map(&:succ).take(2).force.should == [1, 2]

        @eventsmixed.take(10).take(1).force
        ScratchPad.recorded.should == [:before_yield]
      end

      it "stops without iterations if the given argument is 0" do
        @eventsmixed.take(10).take(0).force
        ScratchPad.recorded.should == []
      end
    end
  end
end
