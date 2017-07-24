require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/iteration', __FILE__)
require File.expand_path('../shared/update', __FILE__)

describe "Hash#merge" do
  it "returns a new hash by combining self with the contents of other" do
    h = { 1 => :a, 2 => :b, 3 => :c }.merge(a: 1, c: 2)
    h.should == { c: 2, 1 => :a, 2 => :b, a: 1, 3 => :c }

    hash = { a: 1, b: 2 }
    {}.merge(hash).should == hash
    hash.merge({}).should == hash

    h = { 1 => :a, 2 => :b, 3 => :c }.merge(1 => :b)
    h.should == { 1 => :b, 2 => :b, 3 => :c }

    h = { 1 => :a, 2 => :b }.merge(1 => :b, 3 => :c)
    h.should == { 1 => :b, 2 => :b, 3 => :c }
  end

  it "sets any duplicate key to the value of block if passed a block" do
    h1 = { a: 2, b: 1, d: 5 }
    h2 = { a: -2, b: 4, c: -3 }
    r = h1.merge(h2) { |k,x,y| nil }
    r.should == { a: nil, b: nil, c: -3, d: 5 }

    r = h1.merge(h2) { |k,x,y| "#{k}:#{x+2*y}" }
    r.should == { a: "a:-2", b: "b:9", c: -3, d: 5 }

    lambda {
      h1.merge(h2) { |k, x, y| raise(IndexError) }
    }.should raise_error(IndexError)

    r = h1.merge(h1) { |k,x,y| :x }
    r.should == { a: :x, b: :x, d: :x }
  end

  it "tries to convert the passed argument to a hash using #to_hash" do
    obj = mock('{1=>2}')
    obj.should_receive(:to_hash).and_return({ 1 => 2 })
    { 3 => 4 }.merge(obj).should == { 1 => 2, 3 => 4 }
  end

  it "does not call to_hash on hash subclasses" do
    { 3 => 4 }.merge(HashSpecs::ToHashHash[1 => 2]).should == { 1 => 2, 3 => 4 }
  end

  it "returns subclass instance for subclasses" do
    HashSpecs::MyHash[1 => 2, 3 => 4].merge({ 1 => 2 }).should be_an_instance_of(HashSpecs::MyHash)
    HashSpecs::MyHash[].merge({ 1 => 2 }).should be_an_instance_of(HashSpecs::MyHash)

    { 1 => 2, 3 => 4 }.merge(HashSpecs::MyHash[1 => 2]).class.should == Hash
    {}.merge(HashSpecs::MyHash[1 => 2]).class.should == Hash
  end

  it "processes entries with same order as each()" do
    h = { 1 => 2, 3 => 4, 5 => 6, "x" => nil, nil => 5, [] => [] }
    merge_pairs = []
    each_pairs = []
    h.each_pair { |k, v| each_pairs << [k, v] }
    h.merge(h) { |k, v1, v2| merge_pairs << [k, v1] }
    merge_pairs.should == each_pairs
  end

end

describe "Hash#merge!" do
  it_behaves_like(:hash_update, :merge!)

  it "does not raise an exception if changing the value of an existing key during iteration" do
      hash = {1 => 2, 3 => 4, 5 => 6}
      hash2 = {1 => :foo, 3 => :bar}
      hash.each { hash.merge!(hash2) }
      hash.should == {1 => :foo, 3 => :bar, 5 => 6}
  end
end
