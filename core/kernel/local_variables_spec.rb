require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#local_variables" do
  after :each do
    ScratchPad.clear
  end

  it "is a private method" do
    Kernel.should have_private_instance_method(:local_variables)
  end

  it "contains locals as they are added" do
    a = 1
    b = 2
    local_variables.should include(:a, :b)
    local_variables.length.should == 2
  end

  it "is accessible from bindings" do
    def local_var_foo
      a = 1
      b = 2
      binding
    end
    foo_binding = local_var_foo()
    res = eval("local_variables",foo_binding)
    res.should include(:a, :b)
    res.length.should == 2
  end

  it "is accessible in eval" do
    eval "a=1; b=2; ScratchPad.record local_variables"
    ScratchPad.recorded.should include(:a, :b)
    ScratchPad.recorded.length.should == 2
  end
end
