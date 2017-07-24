require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#invert" do
  it "returns a new hash where keys are values and vice versa" do
    { 1 => 'a', 2 => 'b', 3 => 'c' }.invert.should ==
      { 'a' => 1, 'b' => 2, 'c' => 3 }
  end

  it "handles collisions by overriding with the key coming later in keys()" do
    h = { a: 1, b: 1 }
    override_key = h.keys.last
    h.invert[1].should == override_key
  end

  it "compares new keys with eql? semantics" do
    h = { a: 1.0, b: 1 }
    i = h.invert
    i[1.0].should == :a
    i[1].should == :b
  end

  it "does not return subclass instances for subclasses" do
    HashSpecs::MyHash[1 => 2, 3 => 4].invert.class.should == Hash
    HashSpecs::MyHash[].invert.class.should == Hash
  end
end
