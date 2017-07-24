require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Singleton#dup" do
  it "is prevented" do
    lambda { SingletonSpecs::MyClass.instance.dup }.should raise_error(TypeError)
  end
end
