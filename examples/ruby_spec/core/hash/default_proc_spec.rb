require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#default_proc" do
  it "returns the block passed to Hash.new" do
    h = Hash.new { 'Paris' }
    p = h.default_proc
    p.call(1).should == 'Paris'
  end

  it "returns nil if no block was passed to proc" do
    {}.default_proc.should == nil
  end
end

describe "Hash#default_proc=" do
  it "replaces the block passed to Hash.new" do
    h = Hash.new { 'Paris' }
    h.default_proc = Proc.new { 'Montreal' }
    p = h.default_proc
    p.call(1).should == 'Montreal'
  end

  it "uses :to_proc on its argument" do
    h = Hash.new { 'Paris' }
    obj = mock('to_proc')
    obj.should_receive(:to_proc).and_return(Proc.new { 'Montreal' })
    (h.default_proc = obj).should equal(obj)
    h[:cool_city].should == 'Montreal'
  end

  it "overrides the static default" do
    h = Hash.new(42)
    h.default_proc = Proc.new { 6 }
    h.default.should be_nil
    h.default_proc.call.should == 6
  end

  it "raises an error if passed stuff not convertible to procs" do
    lambda{{}.default_proc = 42}.should raise_error(TypeError)
  end

  it "returns the passed Proc" do
    new_proc = Proc.new {}
    ({}.default_proc = new_proc).should equal(new_proc)
  end

  it "clears the default proc if passed nil" do
    h = Hash.new { 'Paris' }
    h.default_proc = nil
    h.default_proc.should == nil
    h[:city].should == nil
  end

  it "returns nil if passed nil" do
    ({}.default_proc = nil).should be_nil
  end

  it "accepts a lambda with an arity of 2" do
    h = {}
    lambda do
      h.default_proc = lambda {|a,b| }
    end.should_not raise_error(TypeError)
  end

  it "raises a TypeError if passed a lambda with an arity other than 2" do
    h = {}
    lambda do
      h.default_proc = lambda {|a| }
    end.should raise_error(TypeError)
    lambda do
      h.default_proc = lambda {|a,b,c| }
    end.should raise_error(TypeError)
  end

  it "raises a RuntimeError if self is frozen" do
    lambda { {}.freeze.default_proc = Proc.new {} }.should raise_error(RuntimeError)
    lambda { {}.freeze.default_proc = nil }.should raise_error(RuntimeError)
  end
end
