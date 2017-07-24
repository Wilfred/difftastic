# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)

describe "Enumerator::Lazy#initialize" do
  before :each do
    @receiver = receiver = Object.new

    def receiver.each
      yield 0
      yield 1
      yield 2
    end

    @uninitialized = Enumerator::Lazy.allocate
  end

  it "is a private method" do
    Enumerator::Lazy.should have_private_instance_method(:initialize, false)
  end

  it "returns self" do
    @uninitialized.send(:initialize, @receiver) {}.should equal(@uninitialized)
  end

  describe "when the returned lazy enumerator is evaluated by Enumerable#first" do
    it "stops after specified times" do
      @uninitialized.send(:initialize, @receiver) do |yielder, *values|
        yielder.<<(*values)
      end.first(2).should == [0, 1]
    end
  end

  it "sets #size to nil if not given a size" do
    @uninitialized.send(:initialize, @receiver) {}.size.should be_nil
  end

  it "sets #size to nil if given size is nil" do
    @uninitialized.send(:initialize, @receiver, nil) {}.size.should be_nil
  end

  it "sets given size to own size if the given size is Float::INFINITY" do
    @uninitialized.send(:initialize, @receiver, Float::INFINITY) {}.size.should equal(Float::INFINITY)
  end

  it "sets given size to own size if the given size is a Fixnum" do
    @uninitialized.send(:initialize, @receiver, 100) {}.size.should == 100
  end

  it "sets given size to own size if the given size is a Proc" do
    @uninitialized.send(:initialize, @receiver, lambda { 200 }) {}.size.should == 200
  end

  it "raises an ArgumentError when block is not given" do
    lambda {  @uninitialized.send :initialize, @receiver }.should raise_error(ArgumentError)
  end

  describe "on frozen instance" do
    it "raises a RuntimeError" do
      lambda {  @uninitialized.freeze.send(:initialize, @receiver) {} }.should raise_error(RuntimeError)
    end
  end
end
