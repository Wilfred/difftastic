require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Singleton.new" do
  it "is a private method" do
    lambda { SingletonSpecs::NewSpec.new }.should raise_error(NoMethodError)
  end
end
