require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/method', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#method" do
  it_behaves_like(:kernel_method, :method)

  before :each do
    @obj = KernelSpecs::A.new
  end

  it "can be called on a private method" do
    @obj.send(:private_method).should == :private_method
    @obj.method(:private_method).should be_an_instance_of(Method)
  end

  it "can be called on a protected method" do
    @obj.send(:protected_method).should == :protected_method
    @obj.method(:protected_method).should be_an_instance_of(Method)
  end

  it "will see an alias of the original method as == when in a derived class" do
    obj = KernelSpecs::B.new
    obj.method(:aliased_pub_method).should == obj.method(:pub_method)
  end

  it "can call methods created with define_method" do
    m = @obj.method(:defined_method)
    m.call.should == :defined
  end

  it "can be called even if we only repond_to_missing? method, true" do
    m = KernelSpecs::RespondViaMissing.new.method(:handled_privately)
    m.should be_an_instance_of(Method)
    m.call(1, 2, 3).should == "Done handled_privately([1, 2, 3])"
  end
end
