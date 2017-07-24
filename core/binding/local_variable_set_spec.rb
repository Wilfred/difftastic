require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Binding#local_variable_set" do
  it "adds nonexistent variables to the binding's eval scope" do
    obj = BindingSpecs::Demo.new(1)
    bind = obj.get_empty_binding
    bind.eval('local_variables').should == []
    bind.local_variable_set :foo, 1
    bind.eval('local_variables').should == [:foo]
    bind.eval('foo').should == 1
  end

  it 'sets a new local variable' do
    bind = binding

    bind.local_variable_set(:number, 10)
    bind.local_variable_get(:number).should == 10
  end

  it 'sets a local variable using a String as the variable name' do
    bind = binding

    bind.local_variable_set('number', 10)
    bind.local_variable_get('number').should == 10
  end

  it 'sets a local variable using an object responding to #to_str as the variable name' do
    bind = binding
    name = mock(:obj)
    name.stub!(:to_str).and_return('number')

    bind.local_variable_set(name, 10)
    bind.local_variable_get(name).should == 10
  end

  it 'scopes new local variables to the receiving Binding' do
    bind = binding
    bind.local_variable_set(:number, 10)

    lambda { number }.should raise_error(NameError)
  end

  it 'overwrites an existing local variable defined before a Binding' do
    number = 10
    bind = binding

    bind.local_variable_set(:number, 20)
    number.should == 20
  end

  it 'overwrites a local variable defined using eval()' do
    bind = binding
    bind.eval('number = 10')

    bind.local_variable_set(:number, 20)
    bind.local_variable_get(:number).should == 20
  end

  it "raises a NameError on global access" do
    bind = binding
    lambda { bind.local_variable_set(:$0, "") }.should raise_error(NameError)
  end

  it "raises a NameError on special variable access" do
    bind = binding
    lambda { bind.local_variable_set(:$~, "") }.should raise_error(NameError)
    lambda { bind.local_variable_set(:$_, "") }.should raise_error(NameError)
  end

end
