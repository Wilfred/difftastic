require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#default" do
  it "returns the default value" do
    h = Hash.new(5)
    h.default.should == 5
    h.default(4).should == 5
    {}.default.should == nil
    {}.default(4).should == nil
  end

  it "uses the default proc to compute a default value, passing given key" do
    h = Hash.new { |*args| args }
    h.default(nil).should == [h, nil]
    h.default(5).should == [h, 5]
  end

  it "calls default proc with nil arg if passed a default proc but no arg" do
    h = Hash.new { |*args| args }
    h.default.should == nil
  end
end

describe "Hash#default=" do
  it "sets the default value" do
    h = {}
    h.default = 99
    h.default.should == 99
  end

  it "unsets the default proc" do
    [99, nil, lambda { 6 }].each do |default|
      h = Hash.new { 5 }
      h.default_proc.should_not == nil
      h.default = default
      h.default.should == default
      h.default_proc.should == nil
    end
  end

  it "raises a RuntimeError if called on a frozen instance" do
    lambda { HashSpecs.frozen_hash.default = nil }.should raise_error(RuntimeError)
    lambda { HashSpecs.empty_frozen_hash.default = nil }.should raise_error(RuntimeError)
  end
end
