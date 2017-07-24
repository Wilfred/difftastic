require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Singleton.instance" do
  it "returns an instance of the singleton class" do
    SingletonSpecs::MyClass.instance.should be_kind_of(SingletonSpecs::MyClass)
  end

  it "returns the same instance for multiple calls to instance" do
    SingletonSpecs::MyClass.instance.should equal(SingletonSpecs::MyClass.instance)
  end

  it "returns an instance of the singleton's subclasses" do
    SingletonSpecs::MyClassChild.instance.should be_kind_of(SingletonSpecs::MyClassChild)
  end

  it "returns the same instance for multiple class to instance on subclasses" do
    SingletonSpecs::MyClassChild.instance.should equal(SingletonSpecs::MyClassChild.instance)
  end

  it "returns an instance of the singleton's clone" do
    klone = SingletonSpecs::MyClassChild.clone
    klone.instance.should be_kind_of(klone)
  end

  it "returns the same instance for multiple class to instance on clones" do
    klone = SingletonSpecs::MyClassChild.clone
    klone.instance.should equal(klone.instance)
  end
end
