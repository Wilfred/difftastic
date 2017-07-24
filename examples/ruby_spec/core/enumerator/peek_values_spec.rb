require File.expand_path('../../../spec_helper', __FILE__)

describe "Enumerator#peek_values" do
  before :each do
    o = Object.new
    def o.each
      yield :a
      yield :b1, :b2
      yield :c
      yield :d1, :d2
      yield :e1, :e2, :e3
      yield nil
      yield
    end

    @e = o.to_enum
  end

  it "returns the next element in self" do
    @e.peek_values.should == [:a]
  end

  it "does not advance the position of the current element" do
    @e.next.should == :a
    @e.peek_values.should == [:b1, :b2]
    @e.next.should == [:b1, :b2]
  end

  it "can be called repeatedly without advancing the position of the current element" do
    @e.peek_values
    @e.peek_values
    @e.peek_values.should == [:a]
    @e.next.should == :a
  end

  it "works in concert with #rewind" do
    @e.next
    @e.next
    @e.rewind
    @e.peek_values.should == [:a]
  end

  it "returns an array with only nil if yield is called with nil" do
    5.times { @e.next }
    @e.peek_values.should == [nil]
  end

  it "returns an empty array if yield is called without arguments" do
    6.times { @e.next }
    @e.peek_values.should == []
  end

  it "raises StopIteration if called on a finished enumerator" do
    7.times { @e.next }
    lambda { @e.peek_values }.should raise_error(StopIteration)
  end
end
