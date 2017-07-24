require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Binding#eval" do
  it "inherits __LINE__ from the enclosing scope" do
    obj = BindingSpecs::Demo.new(1)
    bind = obj.get_binding
    bind.eval("__LINE__").should == obj.get_line_of_binding
  end

  it "preserves __LINE__ across multiple calls to eval" do
    obj = BindingSpecs::Demo.new(1)
    bind = obj.get_binding
    bind.eval("__LINE__").should == obj.get_line_of_binding
    bind.eval("__LINE__").should == obj.get_line_of_binding
  end

  it "increments __LINE__ on each line of a multiline eval" do
    obj = BindingSpecs::Demo.new(1)
    bind = obj.get_binding
    bind.eval("#foo\n__LINE__").should == obj.get_line_of_binding + 1
  end

  it "starts with a __LINE__ of 1 if a filename is passed" do
    bind = BindingSpecs::Demo.new(1).get_binding
    bind.eval("__LINE__", "(test)").should == 1
    bind.eval("#foo\n__LINE__", "(test)").should == 2
  end

  it "starts with a __LINE__ from the third argument if passed" do
    bind = BindingSpecs::Demo.new(1).get_binding
    bind.eval("__LINE__", "(test)", 88).should == 88
    bind.eval("#foo\n__LINE__", "(test)", 88).should == 89
  end

  it "inherits __FILE__ from the enclosing scope" do
    obj = BindingSpecs::Demo.new(1)
    bind = obj.get_binding
    bind.eval("__FILE__").should == obj.get_file_of_binding
  end

  it "uses the __FILE__ that is passed in" do
    bind = BindingSpecs::Demo.new(1).get_binding
    bind.eval("__FILE__", "(test)").should == "(test)"
  end
end
