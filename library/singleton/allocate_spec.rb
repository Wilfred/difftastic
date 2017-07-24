require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Singleton.allocate" do
  it "is a private method" do
    lambda { SingletonSpecs::MyClass.allocate }.should raise_error(NoMethodError)
  end
end
