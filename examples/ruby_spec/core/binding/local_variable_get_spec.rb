require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Binding#local_variable_get" do
  it "reads local variables captured in the binding" do
    a = 42
    bind = binding
    bind.local_variable_get(:a).should == 42
  end

  it "raises a NameError for missing variables" do
    bind = BindingSpecs::Demo.new(1).get_empty_binding

    lambda {
      bind.local_variable_get(:no_such_variable)
    }.should raise_error(NameError)
  end

  it "reads variables added later to the binding" do
    bind = BindingSpecs::Demo.new(1).get_empty_binding

    lambda {
      bind.local_variable_get(:a)
    }.should raise_error(NameError)

    bind.local_variable_set(:a, 42)

    bind.local_variable_get(:a).should == 42
  end

  it 'gets a local variable defined in a parent scope' do
    number = 10

    lambda {
      binding.local_variable_get(:number)
    }.call.should == 10
  end

  it 'gets a local variable defined using eval()' do
    bind = binding
    bind.eval('number = 10')

    bind.local_variable_get(:number).should == 10
  end

  it "raises a NameError on global access" do
    bind = binding
    lambda { bind.local_variable_get(:$0) }.should raise_error(NameError)
  end

  it "raises a NameError on special variable access" do
    bind = binding
    lambda { bind.local_variable_get(:$~) }.should raise_error(NameError)
    lambda { bind.local_variable_get(:$_) }.should raise_error(NameError)
  end
end
