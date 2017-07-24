require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/equal_value', __FILE__)

describe "Struct#eql?" do
  it_behaves_like(:struct_equal_value, :eql?)

  it "returns false if any corresponding elements are not #eql?" do
    car = StructClasses::Car.new("Honda", "Accord", 1998)
    similar_car = StructClasses::Car.new("Honda", "Accord", 1998.0)
    car.send(@method, similar_car).should be_false
  end
end
