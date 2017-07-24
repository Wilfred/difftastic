require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#untrace_var" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:untrace_var)
  end
end

describe "Kernel.untrace_var" do
  it "needs to be reviewed for spec completeness"
end
