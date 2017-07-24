require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/__method__', __FILE__)

describe "Kernel.__method__" do
  it "returns the current method, even when aliased" do
    KernelSpecs::MethodTest.new.f.should == :f
  end

  it "returns the original name when aliased method" do
    KernelSpecs::MethodTest.new.g.should == :f
  end

  it "returns the caller from blocks too" do
    KernelSpecs::MethodTest.new.in_block.should == [:in_block, :in_block]
  end

  it "returns the caller from define_method too" do
    KernelSpecs::MethodTest.new.dm.should == :dm
  end

  it "returns the caller from block inside define_method too" do
    KernelSpecs::MethodTest.new.dm_block.should == [:dm_block, :dm_block]
  end

  it "returns method name even from send" do
    KernelSpecs::MethodTest.new.from_send.should == :from_send
  end

  it "returns method name even from eval" do
    KernelSpecs::MethodTest.new.from_eval.should == :from_eval
  end

  it "returns nil from inside a class body" do
    KernelSpecs::MethodTest.new.from_class_body.should == nil
  end

  it "returns nil when not called from a method" do
    __method__.should == nil
  end
end
