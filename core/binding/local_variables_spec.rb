require File.expand_path('../../../spec_helper', __FILE__)

describe "Binding#local_variables" do
  it "returns an Array" do
    binding.local_variables.should be_kind_of(Array)
  end

  it "includes local variables in the current scope" do
    a = 1
    b = nil
    binding.local_variables.should == [:a, :b]
  end

  it "includes local variables defined after calling binding.local_variables" do
    binding.local_variables.should == [:a, :b]
    a = 1
    b = 2
  end

  it "includes local variables of inherited scopes and eval'ed context" do
    p = proc { |a| b = 1; eval("c = 2; binding.local_variables") }
    p.call.should == [:c, :a, :b, :p]
  end

  it "includes shadowed local variables only once" do
    a = 1
    proc { |a| binding.local_variables }.call(2).should == [:a]
  end

  it "includes new variables defined in the binding" do
    b = binding
    b.local_variable_set :a, 42
    b.local_variables.should == [:a, :b]
  end
end
