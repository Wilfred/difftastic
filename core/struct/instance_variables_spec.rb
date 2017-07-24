require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Struct#instance_variables" do
  it "returns an empty array if only attributes are defined" do
    car = StructClasses::Car.new("Hugo", "Foo", "1972")
    car.instance_variables.should == []
  end

  it "returns an array with one name if an instance variable is added" do
    car = StructClasses::Car.new("Hugo", "Foo", "1972")
    car.instance_variables.should == []
    car.instance_variable_set("@test", 1)
    car.instance_variables.should == [:@test]
  end
end
