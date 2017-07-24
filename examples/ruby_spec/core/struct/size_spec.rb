require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/accessor', __FILE__)

describe "Struct#size" do
  it "is a synonym for length" do
    StructClasses::Car.new.size.should == StructClasses::Car.new.length
  end

  it_behaves_like :struct_accessor, :size
end
