require File.expand_path('../../../spec_helper', __FILE__)

describe "Enumerator#next_values" do
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
    @e.next_values.should == [:a]
  end

  it "advances the position of the current element" do
    @e.next.should == :a
    @e.next_values.should == [:b1, :b2]
    @e.next.should == :c
  end

  it "advances the position of the enumerator each time when called multiple times" do
    2.times { @e.next_values }
    @e.next_values.should == [:c]
    @e.next.should == [:d1, :d2]
  end

  it "works in concert with #rewind" do
    2.times { @e.next }
    @e.rewind
    @e.next_values.should == [:a]
  end

  it "returns an array with only nil if yield is called with nil" do
    5.times { @e.next }
    @e.next_values.should == [nil]
  end

  it "returns an empty array if yield is called without arguments" do
    6.times { @e.next }
    @e.next_values.should == []
  end

  it "raises StopIteration if called on a finished enumerator" do
    7.times { @e.next }
    lambda { @e.next_values }.should raise_error(StopIteration)
  end
end
