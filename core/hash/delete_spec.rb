require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#delete" do
  it "removes the entry and returns the deleted value" do
    h = { a: 5, b: 2 }
    h.delete(:b).should == 2
    h.should == { a: 5 }
  end

  it "calls supplied block if the key is not found" do
    { a: 1, b: 10, c: 100 }.delete(:d) { 5 }.should == 5
    Hash.new(:default).delete(:d) { 5 }.should == 5
    Hash.new { :defualt }.delete(:d) { 5 }.should == 5
  end

  it "returns nil if the key is not found when no block is given" do
    { a: 1, b: 10, c: 100 }.delete(:d).should == nil
    Hash.new(:default).delete(:d).should == nil
    Hash.new { :defualt }.delete(:d).should == nil
  end

  # MRI explicitly implements this behavior
  it "allows removing a key while iterating" do
    h = { a: 1, b: 2 }
    visited = []
    h.each_pair { |k,v|
      visited << k
      h.delete(k)
    }
    visited.should == [:a, :b]
    h.should == {}
  end

  it "accepts keys with private #hash method" do
    key = HashSpecs::KeyWithPrivateHash.new
    { key => 5 }.delete(key).should == 5
  end

  it "raises a RuntimeError if called on a frozen instance" do
    lambda { HashSpecs.frozen_hash.delete("foo")  }.should raise_error(RuntimeError)
    lambda { HashSpecs.empty_frozen_hash.delete("foo") }.should raise_error(RuntimeError)
  end
end
