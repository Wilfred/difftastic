require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#readlines" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:readlines)
  end
end

describe "Kernel.readlines" do
  it "needs to be reviewed for spec completeness"
end
