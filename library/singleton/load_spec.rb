require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# TODO: change to a.should be_equal(b)
# TODO: write spec for cloning classes and calling private methods
# TODO: write spec for private_methods not showing up via extended
describe "Singleton._load" do
  it "returns the singleton instance for anything passed in" do
    klass = SingletonSpecs::MyClass
    klass._load("").should equal(klass.instance)
    klass._load("42").should equal(klass.instance)
    klass._load(42).should equal(klass.instance)
  end

  it "returns the singleton instance for anything passed in to subclass" do
    subklass = SingletonSpecs::MyClassChild
    subklass._load("").should equal(subklass.instance)
    subklass._load("42").should equal(subklass.instance)
    subklass._load(42).should equal(subklass.instance)
  end
end
