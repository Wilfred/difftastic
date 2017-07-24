require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Singleton#clone" do
  it "is prevented" do
    lambda { SingletonSpecs::MyClass.instance.clone }.should raise_error(TypeError)
  end
end
