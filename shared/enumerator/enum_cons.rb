require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../fixtures/enumerator/classes', __FILE__)

describe :enum_cons, shared: true do
  it "returns an enumerator of the receiver with iteration of each_cons for each array of n concecutive elements" do
    a = []
    enum = EnumSpecs::Numerous.new.enum_cons(3)
    enum.each {|x| a << x}
    enum.should be_an_instance_of(Enumerator)
    a.should == [[2, 5, 3], [5, 3, 6], [3, 6, 1], [6, 1, 4]]
  end
end
