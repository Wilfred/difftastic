require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/__callee__', __FILE__)

describe "Kernel.__callee__" do
  it "returns the current method, even when aliased" do
    KernelSpecs::CalleeTest.new.f.should == :f
  end

  it "returns the aliased name when aliased method" do
    KernelSpecs::CalleeTest.new.g.should == :g
  end

  it "returns the caller from blocks too" do
    KernelSpecs::CalleeTest.new.in_block.should == [:in_block, :in_block]
  end

  it "returns the caller from define_method too" do
    KernelSpecs::CalleeTest.new.dm.should == :dm
  end

  it "returns the caller from block inside define_method too" do
    KernelSpecs::CalleeTest.new.dm_block.should == [:dm_block, :dm_block]
  end

  it "returns method name even from send" do
    KernelSpecs::CalleeTest.new.from_send.should == :from_send
  end

  it "returns method name even from eval" do
    KernelSpecs::CalleeTest.new.from_eval.should == :from_eval
  end

  it "returns nil from inside a class body" do
    KernelSpecs::CalleeTest.new.from_class_body.should == nil
  end

  it "returns nil when not called from a method" do
    __callee__.should == nil
  end

  it "returns the caller from a define_method called from the same class" do
    c = Class.new do
      define_method(:f) { 1.times{ break __callee__ } }
      def g; f end
    end
    c.new.g.should == :f
  end
end
