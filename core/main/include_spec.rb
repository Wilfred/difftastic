require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "main#include" do
  it "includes the given Module in Object" do
    eval "include MainSpecs::Module", TOPLEVEL_BINDING
    Object.ancestors.should include(MainSpecs::Module)
  end

  context "in a file loaded with wrapping" do
    it "includes the given Module in the load wrapper" do
      load(File.expand_path("../fixtures/wrapped_include.rb", __FILE__), true)
      Object.ancestors.should_not include(MainSpecs::WrapIncludeModule)
    end
  end
end
