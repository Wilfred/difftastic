require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Comparable#between?" do
  it "returns true if self is greater than or equal to the first and less than or equal to the second argument" do
    a = ComparableSpecs::Weird.new(-1)
    b = ComparableSpecs::Weird.new(0)
    c = ComparableSpecs::Weird.new(1)
    d = ComparableSpecs::Weird.new(2)

    a.between?(a, a).should == true
    a.between?(a, b).should == true
    a.between?(a, c).should == true
    a.between?(a, d).should == true
    c.between?(c, d).should == true
    d.between?(d, d).should == true
    c.between?(a, d).should == true

    a.between?(b, b).should == false
    a.between?(b, c).should == false
    a.between?(b, d).should == false
    c.between?(a, a).should == false
    c.between?(a, b).should == false
  end
end
