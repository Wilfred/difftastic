require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel" do
  it "has private instance method Array()" do
    Kernel.should have_private_instance_method(:Array)
  end
end

describe :kernel_Array, shared: true do
  before :each do
    @array = [1, 2, 3]
  end

  it "does not call #to_ary on an Array" do
    @array.should_not_receive(:to_ary)
    @object.send(@method, @array).should == @array
  end

  it "calls #to_ary to convert the argument to an Array" do
    obj = mock("Array([1,2,3])")
    obj.should_receive(:to_ary).and_return(@array)
    obj.should_not_receive(:to_a)

    @object.send(@method, obj).should == @array
  end

  it "does not call #to_a on an Array" do
    @array.should_not_receive(:to_a)
    @object.send(@method, @array).should == @array
  end

  it "calls #to_a if the argument does not respond to #to_ary" do
    obj = mock("Array([1,2,3])")
    obj.should_receive(:to_a).and_return(@array)

    @object.send(@method, obj).should == @array
  end

  it "calls #to_a if #to_ary returns nil" do
    obj = mock("Array([1,2,3])")
    obj.should_receive(:to_ary).and_return(nil)
    obj.should_receive(:to_a).and_return(@array)

    @object.send(@method, obj).should == @array
  end

  it "returns an Array containing the argument if #to_a returns nil" do
    obj = mock("Array([1,2,3])")
    obj.should_receive(:to_a).and_return(nil)

    @object.send(@method, obj).should == [obj]
  end

  it "calls #to_ary first, even if it's private" do
    obj = KernelSpecs::PrivateToAry.new

    @object.send(@method, obj).should == [1, 2]
  end

  it "calls #to_a if #to_ary is not defined, even if it's private" do
    obj = KernelSpecs::PrivateToA.new

    @object.send(@method, obj).should == [3, 4]
  end

  it "returns an Array containing the argument if it responds to neither #to_ary nor #to_a" do
    obj = mock("Array(x)")
    @object.send(@method, obj).should == [obj]
  end

  it "returns an empty Array when passed nil" do
    @object.send(@method, nil).should == []
  end

  it "raises a TypeError if #to_ary does not return an Array" do
    obj = mock("Array() string")
    obj.should_receive(:to_ary).and_return("string")

    lambda { @object.send(@method, obj) }.should raise_error(TypeError)
  end

  it "raises a TypeError if #to_a does not return an Array" do
    obj = mock("Array() string")
    obj.should_receive(:to_a).and_return("string")

    lambda { @object.send(@method, obj) }.should raise_error(TypeError)
  end
end

describe "Kernel.Array" do
  it_behaves_like :kernel_Array, :Array_method, KernelSpecs
end

describe "Kernel#Array" do
  it_behaves_like :kernel_Array, :Array_function, KernelSpecs
end
