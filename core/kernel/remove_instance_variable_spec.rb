require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe :kernel_remove_instance_variable, shared: true do
  it "returns the instance variable's value" do
    value = @instance.send :remove_instance_variable, @object
    value.should == "hello"
  end

  it "removes the instance variable" do
    @instance.send :remove_instance_variable, @object
    @instance.instance_variable_defined?(@object).should be_false
  end
end

describe "Kernel#remove_instance_variable" do
  before do
    @instance = KernelSpecs::InstanceVariable.new
  end

  it "is a public method" do
    Kernel.should have_public_instance_method(:remove_instance_variable, false)
  end

  it "raises a NameError if the instance variable is not defined" do
    lambda do
      @instance.send :remove_instance_variable, :@unknown
    end.should raise_error(NameError)
  end

  it "raises a NameError if the argument is not a valid instance variable name" do
    lambda do
      @instance.send :remove_instance_variable, :"@0"
    end.should raise_error(NameError)
  end

  it "raises a TypeError if passed an Object not defining #to_str" do
    lambda do
      obj = mock("kernel remove_instance_variable")
      @instance.send :remove_instance_variable, obj
    end.should raise_error(TypeError)
  end

  describe "when passed a String" do
    it_behaves_like :kernel_remove_instance_variable, nil, "@greeting"
  end

  describe "when passed a Symbol" do
    it_behaves_like :kernel_remove_instance_variable, nil, :@greeting
  end

  describe "when passed an Object" do
    it "calls #to_str to convert the argument" do
      name = mock("kernel remove_instance_variable")
      name.should_receive(:to_str).and_return("@greeting")
      @instance.send :remove_instance_variable, name
    end
  end
end
