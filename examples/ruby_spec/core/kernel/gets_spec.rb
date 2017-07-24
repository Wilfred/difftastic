require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#gets" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:gets)
  end

  it "calls ARGF.gets" do
    ARGF.should_receive(:gets).and_return("spec")
    gets.should == "spec"
  end
end

describe "Kernel.gets" do
  it "needs to be reviewed for spec completeness"
end
