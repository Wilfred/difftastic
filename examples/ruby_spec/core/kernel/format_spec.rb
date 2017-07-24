require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#format" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:format)
  end
end

describe "Kernel.format" do
  it "is accessible as a module function" do
    Kernel.format("%s", "hello").should == "hello"
  end
end
