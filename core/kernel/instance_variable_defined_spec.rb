require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#instance_variable_defined?" do
  before do
    @instance = KernelSpecs::InstanceVariable.new
  end

  describe "when passed a String" do
    it "returns false if the instance variable is not defined" do
      @instance.instance_variable_defined?("@goodbye").should be_false
    end

    it "returns true if the instance variable is defined" do
      @instance.instance_variable_defined?("@greeting").should be_true
    end
  end

  describe "when passed a Symbol" do
    it "returns false if the instance variable is not defined" do
      @instance.instance_variable_defined?(:@goodbye).should be_false
    end

    it "returns true if the instance variable is defined" do
      @instance.instance_variable_defined?(:@greeting).should be_true
    end
  end

  it "raises a TypeError if passed an Object not defining #to_str" do
    lambda do
      obj = mock("kernel instance_variable_defined?")
      @instance.instance_variable_defined? obj
    end.should raise_error(TypeError)
  end

  it "returns false if the instance variable is not defined for different types" do
    [nil, false, true, 1, 2.0, :test, "test"].each do |obj|
      obj.instance_variable_defined?("@goodbye").should be_false
    end
  end
end
