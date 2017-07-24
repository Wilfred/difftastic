require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Struct#to_h" do
  it "returns a Hash with members as keys" do
    car = StructClasses::Car.new('Ford', 'Ranger')
    car.to_h.should == {make: "Ford", model: "Ranger", year: nil}
  end

  it "returns a Hash that is independent from the struct" do
    car = StructClasses::Car.new('Ford', 'Ranger')
    car.to_h[:make] = 'Suzuki'
    car.make.should == 'Ford'
  end
end
