require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Struct#values_at" do
  it "returns an array of values" do
    clazz = Struct.new(:name, :director, :year)
    movie = clazz.new('Sympathy for Mr. Vengence', 'Chan-wook Park', 2002)
    movie.values_at(0, 1).should == ['Sympathy for Mr. Vengence', 'Chan-wook Park']
    movie.values_at(0..2).should == ['Sympathy for Mr. Vengence', 'Chan-wook Park', 2002]
  end

  it "fails when passed unsupported types" do
    car = StructClasses::Car.new('Ford', 'Ranger')
    lambda { car.values_at('make') }.should raise_error(TypeError)
  end
end
