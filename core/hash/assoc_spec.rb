require File.expand_path('../../../spec_helper', __FILE__)

describe "Hash#assoc" do
  before :each do
    @h = {apple: :green, orange: :orange, grape: :green, banana: :yellow}
  end

  it "returns an Array if the argument is == to a key of the Hash" do
    @h.assoc(:apple).should be_an_instance_of(Array)
  end

  it "returns a 2-element Array if the argument is == to a key of the Hash" do
    @h.assoc(:grape).size.should == 2
  end

  it "sets the first element of the Array to the located key" do
    @h.assoc(:banana).first.should == :banana
  end

  it "sets the last element of the Array to the value of the located key" do
    @h.assoc(:banana).last.should == :yellow
  end

  it "only returns the first matching key-value pair for identity hashes" do
    # Avoid literal String keys in Hash#[]= due to https://bugs.ruby-lang.org/issues/12855
    h = {}.compare_by_identity
    k1 = 'pear'
    h[k1] = :red
    k2 = 'pear'
    h[k2] = :green
    h.size.should == 2
    h.keys.grep(/pear/).size.should == 2
    h.assoc('pear').should == ['pear', :red]
  end

  it "uses #== to compare the argument to the keys" do
    @h[1.0] = :value
    1.should == 1.0
    @h.assoc(1).should == [1.0, :value]
  end

  it "returns nil if the argument is not a key of the Hash" do
    @h.assoc(:green).should be_nil
  end

  it "returns nil if the argument is not a key of the Hash even when there is a default" do
    Hash.new(42).merge!( foo: :bar ).assoc(42).should be_nil
    Hash.new{|h, k| h[k] = 42}.merge!( foo: :bar ).assoc(42).should be_nil
  end
end
