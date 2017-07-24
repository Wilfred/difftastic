require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/method', __FILE__)

describe "Kernel#public_method" do
  it_behaves_like(:kernel_method, :public_method)

  before :each do
    @obj = KernelSpecs::A.new
  end

  it "raises a NameError when called on a private method" do
    @obj.send(:private_method).should == :private_method
    lambda do
      @obj.public_method(:private_method)
    end.should raise_error(NameError)
  end

  it "raises a NameError when called on a protected method" do
    @obj.send(:protected_method).should == :protected_method
    lambda {
      @obj.public_method(:protected_method)
    }.should raise_error(NameError)
  end

  it "raises a NameError if we only repond_to_missing? method, true" do
    obj = KernelSpecs::RespondViaMissing.new
    lambda do
      obj.public_method(:handled_privately)
    end.should raise_error(NameError)
  end
end
