require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/accessor', __FILE__)

describe "Struct#hash" do

  it "returns the same fixnum for structs with the same content" do
    [StructClasses::Ruby.new("1.8.6", "PPC"),
     StructClasses::Car.new("Hugo", "Foo", "1972")].each do |stc|
      stc.hash.should == stc.dup.hash
      stc.hash.should be_kind_of(Fixnum)
    end
  end

  it "returns the same value if structs are #eql?" do
    car = StructClasses::Car.new("Honda", "Accord", "1998")
    similar_car = StructClasses::Car.new("Honda", "Accord", "1998")
    car.should eql(similar_car)
    car.hash.should == similar_car.hash
  end

  it "allows for overriding methods in an included module" do
    mod = Module.new do
      def hash
        "different"
      end
    end
    s = Struct.new(:arg) do
      include mod
    end
    s.new.hash.should == "different"
  end

  it "returns the same hash for recursive structs" do
    car = StructClasses::Car.new("Honda", "Accord", "1998")
    similar_car = StructClasses::Car.new("Honda", "Accord", "1998")
    car[:make] = car
    similar_car[:make] = car
    car.hash.should == similar_car.hash
    # This is because car.eql?(similar_car).
    # Objects that are eql? must return the same hash.
    # See the Struct#eql? specs
  end

  it_behaves_like :struct_accessor, :hash
end
