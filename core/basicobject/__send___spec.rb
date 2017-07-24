require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/basicobject/send', __FILE__)

describe "BasicObject#__send__" do
  it "is a public instance method" do
    BasicObject.should have_public_instance_method(:__send__)
  end

  it_behaves_like(:basicobject_send, :__send__)
end
