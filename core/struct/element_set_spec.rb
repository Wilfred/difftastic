require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Struct#[]=" do
  it "assigns the passed value" do
    car = StructClasses::Car.new('Ford', 'Ranger')

    car[:model] = 'Escape'
    car[:model].should == 'Escape'

    car['model'] = 'Fusion'
    car[:model].should == 'Fusion'

    car[1] = 'Excursion'
    car[:model].should == 'Excursion'

    car[-1] = '2000-2005'
    car[:year].should == '2000-2005'
  end

  it "fails when trying to assign attributes which don't exist" do
    car = StructClasses::Car.new('Ford', 'Ranger')

    lambda { car[:something] = true }.should raise_error(NameError)
    lambda { car[3] = true          }.should raise_error(IndexError)
    lambda { car[-4] = true         }.should raise_error(IndexError)
    lambda { car[Object.new] = true }.should raise_error(TypeError)
  end
end
