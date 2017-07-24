require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/kernel/equal', __FILE__)

describe "Kernel#eql?" do
  it "is a public instance method" do
    Kernel.should have_public_instance_method(:eql?)
  end

  it_behaves_like :object_equal, :eql?
end

