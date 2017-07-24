require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#prepend_features" do
  it "is a private method" do
    Module.should have_private_instance_method(:prepend_features, true)
  end

  it "gets called when self is included in another module/class" do
    ScratchPad.record []

    m = Module.new do
      def self.prepend_features(mod)
        ScratchPad << mod
      end
    end

    c = Class.new do
      prepend m
    end

    ScratchPad.recorded.should == [c]
  end

  it "raises an ArgumentError on a cyclic prepend" do
    lambda {
      ModuleSpecs::CyclicPrepend.send(:prepend_features, ModuleSpecs::CyclicPrepend)
    }.should raise_error(ArgumentError)
  end

  it "copies own tainted status to the given module" do
    other = Module.new
    Module.new.taint.send :prepend_features, other
    other.tainted?.should be_true
  end

  it "copies own untrusted status to the given module" do
    other = Module.new
    Module.new.untrust.send :prepend_features, other
    other.untrusted?.should be_true
  end

  it "clears caches of the given module" do
    parent = Class.new do
      def bar; :bar; end
    end

    child = Class.new(parent) do
      def foo; :foo; end
      def bar; super; end
    end

    mod = Module.new do
      def foo; :fooo; end
    end

    child.new.foo
    child.new.bar

    child.prepend(mod)

    child.new.bar.should == :bar
  end

  describe "on Class" do
    it "is undefined" do
      Class.should_not have_private_instance_method(:prepend_features, true)
    end

    it "raises a TypeError if calling after rebinded to Class" do
      lambda {
        Module.instance_method(:prepend_features).bind(Class.new).call Module.new
      }.should raise_error(TypeError)
    end
  end
end
