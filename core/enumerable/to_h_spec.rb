require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#to_h" do
  it "converts empty enumerable to empty hash" do
    enum = EnumerableSpecs::EachDefiner.new
    enum.to_h.should == {}
  end

  it "converts yielded [key, value] pairs to a hash" do
    enum = EnumerableSpecs::EachDefiner.new([:a, 1], [:b, 2])
    enum.to_h.should == { a: 1, b: 2 }
  end

  it "uses the last value of a duplicated key" do
    enum = EnumerableSpecs::EachDefiner.new([:a, 1], [:b, 2], [:a, 3])
    enum.to_h.should == { a: 3, b: 2 }
  end

  it "calls #to_ary on contents" do
    pair = mock('to_ary')
    pair.should_receive(:to_ary).and_return([:b, 2])
    enum = EnumerableSpecs::EachDefiner.new([:a, 1], pair)
    enum.to_h.should == { a: 1, b: 2 }
  end

  it "forwards arguments to #each" do
    enum = Object.new
    def enum.each(*args)
      yield(*args)
      yield([:b, 2])
    end
    enum.extend Enumerable
    enum.to_h(:a, 1).should == { a: 1, b: 2 }
  end

  it "raises TypeError if an element is not an array" do
    enum = EnumerableSpecs::EachDefiner.new(:x)
    lambda { enum.to_h }.should raise_error(TypeError)
  end

  it "raises ArgumentError if an element is not a [key, value] pair" do
    enum = EnumerableSpecs::EachDefiner.new([:x])
    lambda { enum.to_h }.should raise_error(ArgumentError)
  end
end
