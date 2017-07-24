require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#hash" do
  it "needs to be reviewed for spec completeness"
end

describe "Kernel" do
  it "has private instance method Hash()" do
    Kernel.should have_private_instance_method(:Hash)
  end
end

describe :kernel_Hash, shared: true do
  before :each do
    @hash = { a: 1}
  end

  it "converts nil to a Hash" do
    @object.send(@method, nil).should == {}
  end

  it "converts an empty array to a Hash" do
    @object.send(@method, []).should == {}
  end

  it "does not call #to_hash on an Hash" do
    @hash.should_not_receive(:to_hash)
    @object.send(@method, @hash).should == @hash
  end

  it "calls #to_hash to convert the argument to an Hash" do
    obj = mock("Hash(a: 1)")
    obj.should_receive(:to_hash).and_return(@hash)

    @object.send(@method, obj).should == @hash
  end

  it "raises a TypeError if it doesn't respond to #to_hash" do
    lambda { @object.send(@method, mock("")) }.should raise_error(TypeError)
  end

  it "raises a TypeError if #to_hash does not return an Hash" do
    obj = mock("Hash() string")
    obj.should_receive(:to_hash).and_return("string")

    lambda { @object.send(@method, obj) }.should raise_error(TypeError)
  end
end

describe "Kernel.Hash" do
  it_behaves_like :kernel_Hash, :Hash_method, KernelSpecs
end

describe "Kernel#Hash" do
  it_behaves_like :kernel_Hash, :Hash_function, KernelSpecs
end
