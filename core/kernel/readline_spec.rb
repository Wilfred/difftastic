require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#readline" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:readline)
  end
end

describe "Kernel.readline" do
  it "needs to be reviewed for spec completeness"
end
