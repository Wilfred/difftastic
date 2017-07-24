require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../shared/kernel/raise', __FILE__)

describe "Kernel#raise" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:raise)
  end
end

describe "Kernel#raise" do
  it_behaves_like :kernel_raise, :raise, Kernel
end

describe "Kernel.raise" do
  it "needs to be reviewed for spec completeness"
end
