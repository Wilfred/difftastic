require File.expand_path('../../../spec_helper', __FILE__)

describe "Hash#rassoc" do
  before :each do
    @h = {apple: :green, orange: :orange, grape: :green, banana: :yellow}
  end

  it "returns an Array if the argument is a value of the Hash" do
    @h.rassoc(:green).should be_an_instance_of(Array)
  end

  it "returns a 2-element Array if the argument is a value of the Hash" do
    @h.rassoc(:orange).size.should == 2
  end

  it "sets the first element of the Array to the key of the located value" do
    @h.rassoc(:yellow).first.should == :banana
  end

  it "sets the last element of the Array to the located value" do
    @h.rassoc(:yellow).last.should == :yellow
  end

  it "only returns the first matching key-value pair" do
    @h.rassoc(:green).should == [:apple, :green]
  end

  it "uses #== to compare the argument to the values" do
    @h[:key] = 1.0
    1.should == 1.0
    @h.rassoc(1).should eql [:key, 1.0]
  end

  it "returns nil if the argument is not a value of the Hash" do
    @h.rassoc(:banana).should be_nil
  end

  it "returns nil if the argument is not a value of the Hash even when there is a default" do
    Hash.new(42).merge!( foo: :bar ).rassoc(42).should be_nil
    Hash.new{|h, k| h[k] = 42}.merge!( foo: :bar ).rassoc(42).should be_nil
  end
end
