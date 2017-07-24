require File.expand_path('../../fixtures/classes', __FILE__)

describe :hash_store, shared: true do
  it "associates the key with the value and return the value" do
    h = { a: 1 }
    h.send(@method, :b, 2).should == 2
    h.should == { b:2, a:1 }
  end

  it "duplicates string keys using dup semantics" do
    # dup doesn't copy singleton methods
    key = "foo"
    def key.reverse() "bar" end
    h = {}
    h.send(@method, key, 0)
    h.keys[0].reverse.should == "oof"
  end

  it "stores unequal keys that hash to the same value" do
    h = {}
    k1 = ["x"]
    k2 = ["y"]
    # So they end up in the same bucket
    k1.should_receive(:hash).and_return(0)
    k2.should_receive(:hash).and_return(0)

    h.send(@method, k1, 1)
    h.send(@method, k2, 2)
    h.size.should == 2
  end

  it "accepts keys with private #hash method" do
    key = HashSpecs::KeyWithPrivateHash.new
    h = {}
    h.send(@method, key, "foo")
    h[key].should == "foo"
  end

  it " accepts keys with a Bignum hash" do
    o = mock(hash: 1 << 100)
    h = {}
    h[o] = 1
    h[o].should == 1
  end

  it "duplicates and freezes string keys" do
    key = "foo"
    h = {}
    h.send(@method, key, 0)
    key << "bar"

    h.should == { "foo" => 0 }
    h.keys[0].frozen?.should == true
  end

  it "doesn't duplicate and freeze already frozen string keys" do
    key = "foo".freeze
    h = {}
    h.send(@method, key, 0)
    h.keys[0].should equal(key)
  end

  it "keeps the existing key in the hash if there is a matching one" do
    h = { "a" => 1, "b" => 2, "c" => 3, "d" => 4 }
    key1 = HashSpecs::ByValueKey.new(13)
    key2 = HashSpecs::ByValueKey.new(13)
    h[key1] = 41
    key_in_hash = h.keys.last
    key_in_hash.should equal(key1)
    h[key2] = 42
    last_key = h.keys.last
    last_key.should equal(key_in_hash)
    last_key.should_not equal(key2)
  end

  it "keeps the existing String key in the hash if there is a matching one" do
    h = { "a" => 1, "b" => 2, "c" => 3, "d" => 4 }
    key1 = "foo"
    key2 = "foo"
    key1.should_not equal(key2)
    h[key1] = 41
    frozen_key = h.keys.last
    frozen_key.should_not equal(key1)
    h[key2] = 42
    h.keys.last.should equal(frozen_key)
    h.keys.last.should_not equal(key2)
  end

  it "raises a RuntimeError if called on a frozen instance" do
    lambda { HashSpecs.frozen_hash.send(@method, 1, 2) }.should raise_error(RuntimeError)
  end

  it "does not raise an exception if changing the value of an existing key during iteration" do
      hash = {1 => 2, 3 => 4, 5 => 6}
      hash.each { hash.send(@method, 1, :foo) }
      hash.should == {1 => :foo, 3 => 4, 5 => 6}
  end
end
