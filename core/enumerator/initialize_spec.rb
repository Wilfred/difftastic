# -*- encoding: us-ascii -*-

require File.expand_path('../../../spec_helper', __FILE__)

describe "Enumerator#initialize" do
  before :each do
    @uninitialized = Enumerator.allocate
  end

  it "is a private method" do
    Enumerator.should have_private_instance_method(:initialize, false)
  end

  it "returns self when given an object" do
    @uninitialized.send(:initialize, Object.new).should equal(@uninitialized)
  end

  it "returns self when given a block" do
    @uninitialized.send(:initialize) {}.should equal(@uninitialized)
  end

  # Maybe spec should be broken up?
  it "accepts a block" do
    @uninitialized.send(:initialize) do |yielder|
      r = yielder.yield 3
      yielder << r << 2 << 1
    end
    @uninitialized.should be_an_instance_of(Enumerator)
    r = []
    @uninitialized.each{|x| r << x; x * 2}
    r.should == [3, 6, 2, 1]
  end

  it "sets size to nil if size is not given" do
    @uninitialized.send(:initialize) {}.size.should be_nil
  end

  it "sets size to nil if the given size is nil" do
    @uninitialized.send(:initialize, nil) {}.size.should be_nil
  end

  it "sets size to the given size if the given size is Float::INFINITY" do
    @uninitialized.send(:initialize, Float::INFINITY) {}.size.should equal(Float::INFINITY)
  end

  it "sets size to the given size if the given size is a Fixnum" do
    @uninitialized.send(:initialize, 100) {}.size.should == 100
  end

  it "sets size to the given size if the given size is a Proc" do
    @uninitialized.send(:initialize, lambda { 200 }) {}.size.should == 200
  end

  describe "on frozen instance" do
    it "raises a RuntimeError" do
      lambda {
        @uninitialized.freeze.send(:initialize) {}
      }.should raise_error(RuntimeError)
    end
  end
end
