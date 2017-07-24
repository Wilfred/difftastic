require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Enumerator#feed" do
  before :each do
    ScratchPad.record []
    @enum = EnumeratorSpecs::Feed.new.to_enum(:each)
  end

  it "sets the future return value of yield if called before advancing the iterator" do
    @enum.feed :a
    @enum.next
    @enum.next
    @enum.next
    ScratchPad.recorded.should == [:a, nil]
  end

  it "causes yield to return the value if called during iteration" do
    @enum.next
    @enum.feed :a
    @enum.next
    @enum.next
    ScratchPad.recorded.should == [:a, nil]
  end

  it "can be called for each iteration" do
    @enum.next
    @enum.feed :a
    @enum.next
    @enum.feed :b
    @enum.next
    ScratchPad.recorded.should == [:a, :b]
  end

  it "returns nil" do
    @enum.feed(:a).should be_nil
  end

  it "raises a TypeError if called more than once without advancing the enumerator" do
    @enum.feed :a
    @enum.next
    lambda { @enum.feed :b }.should raise_error(TypeError)
  end

  it "sets the return value of Yielder#yield" do
    enum = Enumerator.new { |y| ScratchPad << y.yield }
    enum.next
    enum.feed :a
    lambda { enum.next }.should raise_error(StopIteration)
    ScratchPad.recorded.should == [:a]
  end
end
