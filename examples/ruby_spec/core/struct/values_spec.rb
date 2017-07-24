require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Struct#values" do
  it "is a synonym for to_a" do
    car = StructClasses::Car.new('Nissan', 'Maxima')
    car.values.should == car.to_a

    StructClasses::Car.new.values.should == StructClasses::Car.new.to_a
  end
end
