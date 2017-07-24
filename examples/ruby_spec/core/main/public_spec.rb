require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "main#public" do
  after :each do
    Object.send(:private, :main_private_method)
  end

  it "sets the visibility of the given method to public" do
    eval "public :main_private_method", TOPLEVEL_BINDING
    Object.should_not have_private_method(:main_private_method)
  end

  it "returns Object" do
    eval("public :main_private_method", TOPLEVEL_BINDING).should equal(Object)
  end

  it "raises a NameError when given an undefined name" do
    lambda do
      eval "public :main_undefined_method", TOPLEVEL_BINDING
    end.should raise_error(NameError)
  end
end
