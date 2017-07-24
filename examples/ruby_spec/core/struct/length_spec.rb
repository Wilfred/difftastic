require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/accessor', __FILE__)

describe "Struct#length" do
  it "returns the number of attributes" do
    StructClasses::Car.new('Cadillac', 'DeVille').length.should == 3
    StructClasses::Car.new.length.should == 3
  end

  it_behaves_like :struct_accessor, :length
end
