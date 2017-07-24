require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "main#private" do
  after :each do
    Object.send(:public, :main_public_method)
  end

  it "sets the visibility of the given method to private" do
    eval "private :main_public_method", TOPLEVEL_BINDING
    Object.should have_private_method(:main_public_method)
  end

  it "returns Object" do
    eval("private :main_public_method", TOPLEVEL_BINDING).should equal(Object)
  end

  it "raises a NameError when given an undefined name" do
    lambda do
      eval "private :main_undefined_method", TOPLEVEL_BINDING
    end.should raise_error(NameError)
  end
end
