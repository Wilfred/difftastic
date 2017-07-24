require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/accessor', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "Struct#each_pair" do
  before :each do
    @car = StructClasses::Car.new('Ford', 'Ranger', 2001)
  end

  it "passes each key value pair to the given block" do
    @car.each_pair do |key, value|
      value.should == @car[key]
    end
  end

  context "with a block variable" do
    it "passes an array to the given block" do
      @car.each_pair.map { |var| var }.should == StructClasses::Car.members.zip(@car.values)
    end
  end

  it "returns self if passed a block" do
    @car.each_pair {}.should equal(@car)
  end

  it "returns an Enumerator if not passed a block" do
    @car.each_pair.should be_an_instance_of(Enumerator)
  end

  it_behaves_like :struct_accessor, :each_pair
  it_behaves_like :enumeratorized_with_origin_size, :each_pair, StructClasses::Car.new('Ford', 'Ranger')
end
