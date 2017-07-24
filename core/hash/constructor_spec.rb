require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash.[]" do
  describe "passed zero arguments" do
    it "returns an empty hash" do
      Hash[].should == {}
    end
  end

  it "creates a Hash; values can be provided as the argument list" do
    Hash[:a, 1, :b, 2].should == { a: 1, b: 2 }
    Hash[].should == {}
    Hash[:a, 1, :b, { c: 2 }].should == { a: 1, b: { c: 2 } }
  end

  it "creates a Hash; values can be provided as one single hash" do
    Hash[a: 1, b: 2].should == { a: 1, b: 2 }
    Hash[{1 => 2, 3 => 4}].should == {1 => 2, 3 => 4}
    Hash[{}].should == {}
  end

  describe "passed an array" do
    it "treats elements that are 2 element arrays as key and value" do
      Hash[[[:a, :b], [:c, :d]]].should == { a: :b, c: :d }
    end

    it "treats elements that are 1 element arrays as keys with value nil" do
      Hash[[[:a]]].should == { a: nil }
    end
  end

  # #1000 #1385
  it "creates a Hash; values can be provided as a list of value-pairs in an array" do
    Hash[[[:a, 1], [:b, 2]]].should == { a: 1, b: 2 }
  end

  it "coerces a single argument which responds to #to_ary" do
    ary = mock('to_ary')
    ary.should_receive(:to_ary).and_return([[:a, :b]])

    Hash[ary].should == { a: :b }
  end

  it "ignores elements that are not arrays" do
    -> {
      Hash[[:a]].should == {}
    }.should complain(/ignoring wrong elements/)
    -> {
      Hash[[:nil]].should == {}
    }.should complain(/ignoring wrong elements/)
  end

  it "raises an ArgumentError for arrays of more than 2 elements" do
    lambda{ Hash[[[:a, :b, :c]]].should == {} }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when passed a list of value-invalid-pairs in an array" do
    -> {
      -> {
        Hash[[[:a, 1], [:b], 42, [:d, 2], [:e, 2, 3], []]]
      }.should complain(/ignoring wrong elements/)
    }.should raise_error(ArgumentError)
  end

  describe "passed a single argument which responds to #to_hash" do
    it "coerces it and returns a copy" do
      h = { a: :b, c: :d }
      to_hash = mock('to_hash')
      to_hash.should_receive(:to_hash).and_return(h)

      result = Hash[to_hash]
      result.should == h
      result.should_not equal(h)
    end
  end

  it "raises an ArgumentError when passed an odd number of arguments" do
    lambda { Hash[1, 2, 3] }.should raise_error(ArgumentError)
    lambda { Hash[1, 2, { 3 => 4 }] }.should raise_error(ArgumentError)
  end

  it "calls to_hash" do
    obj = mock('x')
    def obj.to_hash() { 1 => 2, 3 => 4 } end
    Hash[obj].should == { 1 => 2, 3 => 4 }
  end

  it "returns an instance of a subclass when passed an Array" do
    HashSpecs::MyHash[1,2,3,4].should be_an_instance_of(HashSpecs::MyHash)
  end

  it "returns instances of subclasses" do
    HashSpecs::MyHash[].should be_an_instance_of(HashSpecs::MyHash)
  end

  it "returns an instance of the class it's called on" do
    Hash[HashSpecs::MyHash[1, 2]].class.should == Hash
    HashSpecs::MyHash[Hash[1, 2]].should be_an_instance_of(HashSpecs::MyHash)
  end

  it "does not call #initialize on the subclass instance" do
    HashSpecs::MyInitializerHash[Hash[1, 2]].should be_an_instance_of(HashSpecs::MyInitializerHash)
  end

  it "removes the default_proc" do
    hash = Hash.new { |h, k| h[k] = [] }
    Hash[hash].default_proc.should be_nil
  end
end
