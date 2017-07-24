require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/accessor', __FILE__)

describe "Struct#members" do
  it "returns an array of attribute names" do
    StructClasses::Car.new.members.should == [:make, :model, :year]
    StructClasses::Car.new('Cadillac').members.should == [:make, :model, :year]
    StructClasses::Ruby.members.should == [:version, :platform]
  end

  it_behaves_like :struct_accessor, :members
end
