require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#append_features" do
  it "is a private method" do
    Module.should have_private_instance_method(:append_features)
  end

  describe "on Class" do
    it "is undefined" do
      Class.should_not have_private_instance_method(:append_features, true)
    end

    it "raises a TypeError if calling after rebinded to Class" do
      lambda {
        Module.instance_method(:append_features).bind(Class.new).call Module.new
      }.should raise_error(TypeError)
    end
  end

  it "gets called when self is included in another module/class" do
    begin
      m = Module.new do
        def self.append_features(mod)
          $appended_to = mod
        end
      end

      c = Class.new do
        include m
      end

      $appended_to.should == c
    ensure
      $appended_to = nil
    end
  end

  it "raises an ArgumentError on a cyclic include" do
    lambda {
      ModuleSpecs::CyclicAppendA.send(:append_features, ModuleSpecs::CyclicAppendA)
    }.should raise_error(ArgumentError)

    lambda {
      ModuleSpecs::CyclicAppendB.send(:append_features, ModuleSpecs::CyclicAppendA)
    }.should raise_error(ArgumentError)

  end

  it "copies own tainted status to the given module" do
    other = Module.new
    Module.new.taint.send :append_features, other
    other.tainted?.should be_true
  end

  it "copies own untrusted status to the given module" do
    other = Module.new
    Module.new.untrust.send :append_features, other
    other.untrusted?.should be_true
  end

  describe "when other is frozen" do
    before :each do
      @receiver = Module.new
      @other = Module.new.freeze
    end

    it "raises a RuntimeError before appending self" do
      lambda { @receiver.send(:append_features, @other) }.should raise_error(RuntimeError)
      @other.ancestors.should_not include(@receiver)
    end
  end
end
