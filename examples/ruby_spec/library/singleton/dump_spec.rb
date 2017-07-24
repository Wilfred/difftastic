require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Singleton#_dump" do

  it "returns an empty string" do
    SingletonSpecs::MyClass.instance.send(:_dump).should == ""
  end

  it "returns an empty string from a singleton subclass" do
    SingletonSpecs::MyClassChild.instance.send(:_dump).should == ""
  end

end
