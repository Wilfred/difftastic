require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/inspect', __FILE__)

describe "Struct#to_s" do
  it "is a synonym for inspect" do
    car = StructClasses::Car.new('Ford', 'Ranger')
    car.inspect.should == car.to_s
  end

  it_behaves_like(:struct_inspect, :to_s)
end
