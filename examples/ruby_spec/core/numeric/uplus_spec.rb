require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#+@" do
  it "returns self" do
    obj = NumericSpecs::Subclass.new
    obj.send(:+@).should == obj
  end
end
