require File.expand_path('../../../spec_helper', __FILE__)

describe "Hash" do
  it "includes Enumerable" do
    Hash.include?(Enumerable).should == true
  end
end

describe "Hash#hash" do
  it "returns a value which doesn't depend on the hash order" do
    { 0=>2, 11=>1 }.hash.should == { 11=>1, 0=>2 }.hash
  end

  it "generates a hash for recursive hash structures" do
    h = {}
    h[:a] = h
    (h.hash == h[:a].hash).should == true
  end

  it "returns the same hash for recursive hashes" do
    h = {} ; h[:x] = h
    h.hash.should == {x: h}.hash
    h.hash.should == {x: {x: h}}.hash
    # This is because h.eql?(x: h)
    # Remember that if two objects are eql?
    # then the need to have the same hash.
    # Check the Hash#eql? specs!
  end

  it "returns the same hash for recursive hashes through arrays" do
    h = {} ; rec = [h] ; h[:x] = rec
    h.hash.should == {x: rec}.hash
    h.hash.should == {x: [h]}.hash
    # Like above, because h.eql?(x: [h])
  end
end
