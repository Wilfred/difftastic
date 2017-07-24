require File.expand_path('../../../spec_helper', __FILE__)

describe 'Binding#local_variable_defined?' do
  it 'returns false when a variable is not defined' do
    binding.local_variable_defined?(:foo).should == false
  end

  it 'returns true when a regular local variable is defined' do
    foo = 10
    binding.local_variable_defined?(:foo).should == true
  end

  it 'returns true when a local variable is defined using eval()' do
    bind = binding
    bind.eval('foo = 10')

    bind.local_variable_defined?(:foo).should == true
  end

  it 'returns true when a local variable is defined using Binding#local_variable_set' do
    bind = binding
    bind.local_variable_set(:foo, 10)

    bind.local_variable_defined?(:foo).should == true
  end

  it 'returns true when a local variable is defined in a parent scope' do
    foo = 10
    lambda {
      binding.local_variable_defined?(:foo)
    }.call.should == true
  end

  it 'allows usage of a String as the variable name' do
    foo = 10
    binding.local_variable_defined?('foo').should == true
  end

  it 'allows usage of an object responding to #to_str as the variable name' do
    foo  = 10
    name = mock(:obj)
    name.stub!(:to_str).and_return('foo')

    binding.local_variable_defined?(name).should == true
  end
end
