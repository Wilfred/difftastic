require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#[]" do
  it "returns the value for key" do
    obj = mock('x')
    h = { 1 => 2, 3 => 4, "foo" => "bar", obj => obj, [] => "baz" }
    h[1].should == 2
    h[3].should == 4
    h["foo"].should == "bar"
    h[obj].should == obj
    h[[]].should == "baz"
  end

  it "returns nil as default default value" do
    { 0 => 0 }[5].should == nil
  end

  it "returns the default (immediate) value for missing keys" do
    h = Hash.new(5)
    h[:a].should == 5
    h[:a] = 0
    h[:a].should == 0
    h[:b].should == 5
  end

  it "calls subclass implementations of default" do
    h = HashSpecs::DefaultHash.new
    h[:nothing].should == 100
  end

  it "does not create copies of the immediate default value" do
    str = "foo"
    h = Hash.new(str)
    a = h[:a]
    b = h[:b]
    a << "bar"

    a.should equal(b)
    a.should == "foobar"
    b.should == "foobar"
  end

  it "returns the default (dynamic) value for missing keys" do
    h = Hash.new { |hsh, k| k.kind_of?(Numeric) ? hsh[k] = k + 2 : hsh[k] = k }
    h[1].should == 3
    h['this'].should == 'this'
    h.should == { 1 => 3, 'this' => 'this' }

    i = 0
    h = Hash.new { |hsh, key| i += 1 }
    h[:foo].should == 1
    h[:foo].should == 2
    h[:bar].should == 3
  end

  it "does not return default values for keys with nil values" do
    h = Hash.new(5)
    h[:a] = nil
    h[:a].should == nil

    h = Hash.new { 5 }
    h[:a] = nil
    h[:a].should == nil
  end

  it "compares keys with eql? semantics" do
    { 1.0 => "x" }[1].should == nil
    { 1.0 => "x" }[1.0].should == "x"
    { 1 => "x" }[1.0].should == nil
    { 1 => "x" }[1].should == "x"
  end

  it "compares key via hash" do
    x = mock('0')
    x.should_receive(:hash).and_return(0)

    h = {}
    # 1.9 only calls #hash if the hash had at least one entry beforehand.
    h[:foo] = :bar
    h[x].should == nil
  end

  it "does not compare keys with different #hash values via #eql?" do
    x = mock('x')
    x.should_not_receive(:eql?)
    x.stub!(:hash).and_return(0)

    y = mock('y')
    y.should_not_receive(:eql?)
    y.stub!(:hash).and_return(1)

    { y => 1 }[x].should == nil
  end

  it "compares keys with the same #hash value via #eql?" do
    x = mock('x')
    x.should_receive(:eql?).and_return(true)
    x.stub!(:hash).and_return(42)

    y = mock('y')
    y.should_not_receive(:eql?)
    y.stub!(:hash).and_return(42)

    { y => 1 }[x].should == 1
  end

  it "finds a value via an identical key even when its #eql? isn't reflexive" do
    x = mock('x')
    x.should_receive(:hash).at_least(1).and_return(42)
    x.stub!(:eql?).and_return(false) # Stubbed for clarity and latitude in implementation; not actually sent by MRI.

    { x => :x }[x].should == :x
  end

  it "supports keys with private #hash method" do
    key = HashSpecs::KeyWithPrivateHash.new
    { key => 42 }[key].should == 42
  end
end
