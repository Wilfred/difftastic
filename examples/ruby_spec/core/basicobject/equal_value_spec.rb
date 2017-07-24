require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/kernel/equal', __FILE__)

describe "BasicObject#==" do
  it "is a public instance method" do
    BasicObject.should have_public_instance_method(:==)
  end

  it_behaves_like :object_equal, :==
end
