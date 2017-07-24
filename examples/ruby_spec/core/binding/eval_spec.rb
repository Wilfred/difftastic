require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Binding#eval" do
  it "behaves like Kernel.eval(..., self)" do
    obj = BindingSpecs::Demo.new(1)
    bind = obj.get_binding

    bind.eval("@secret += square(3)").should == 10
    bind.eval("a").should be_true

    bind.eval("class Inside; end")
    bind.eval("Inside.name").should == "BindingSpecs::Demo::Inside"
  end

  it "does not leak variables to cloned bindings" do
    obj = BindingSpecs::Demo.new(1)
    bind = obj.get_empty_binding
    bind2 = bind.dup

    bind.eval("x = 72")
    bind.local_variables.should == [:x]
    bind2.local_variables.should == []
  end

  describe "with a file given" do
    it "does not store the filename permanently" do
      obj = BindingSpecs::Demo.new(1)
      bind = obj.get_binding

      bind.eval("__FILE__", "test.rb").should == "test.rb"
      bind.eval("__FILE__").should_not == "test.rb"
    end
  end

  it "needs to be reviewed for spec completeness"
end
