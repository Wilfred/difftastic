require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#assoc" do
  it "returns the first array whose 1st item is == obj or nil" do
    s1 = ["colors", "red", "blue", "green"]
    s2 = [:letters, "a", "b", "c"]
    s3 = [4]
    s4 = ["colors", "cyan", "yellow", "magenda"]
    s5 = [:letters, "a", "i", "u"]
    s_nil = [nil, nil]
    a = [s1, s2, s3, s4, s5, s_nil]
    a.assoc(s1.first).should equal(s1)
    a.assoc(s2.first).should equal(s2)
    a.assoc(s3.first).should equal(s3)
    a.assoc(s4.first).should equal(s1)
    a.assoc(s5.first).should equal(s2)
    a.assoc(s_nil.first).should equal(s_nil)
    a.assoc(4).should equal(s3)
    a.assoc("key not in array").should be_nil
  end

  it "calls == on first element of each array" do
    key1 = 'it'
    key2 = mock('key2')
    items = [['not it', 1], [ArraySpecs::AssocKey.new, 2], ['na', 3]]

    items.assoc(key1).should equal(items[1])
    items.assoc(key2).should be_nil
  end

  it "ignores any non-Array elements" do
    [1, 2, 3].assoc(2).should be_nil
    s1 = [4]
    s2 = [5, 4, 3]
    a = ["foo", [], s1, s2, nil, []]
    a.assoc(s1.first).should equal(s1)
    a.assoc(s2.first).should equal(s2)
  end
end
