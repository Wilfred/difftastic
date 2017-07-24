require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#>>" do
  it "adds the number of months to a Date" do
    d = Date.civil(2007,2,27) >> 10
    d.should == Date.civil(2007, 12, 27)
  end

  it "sets the day to the last day of a month if the day doesn't exist" do
    d = Date.civil(2008,3,31) >> 1
    d.should == Date.civil(2008, 4, 30)
  end

  it "returns the day of the reform if date falls within calendar reform" do
    calendar_reform_italy = Date.new(1582, 10, 4)
    d1 = Date.new(1582, 9, 9) >> 1
    d2 = Date.new(1582, 9, 10) >> 1
    d1.should == calendar_reform_italy
    d2.should == calendar_reform_italy
  end

  it "raise a TypeError when passed a Symbol" do
    lambda { Date.civil(2007,2,27) >> :hello }.should raise_error(TypeError)
  end

  it "raise a TypeError when passed a String" do
    lambda { Date.civil(2007,2,27) >> "hello" }.should raise_error(TypeError)
  end

  it "raise a TypeError when passed a Date" do
    lambda { Date.civil(2007,2,27) >> Date.new }.should raise_error(TypeError)
  end

  it "raise a TypeError when passed an Object" do
    lambda { Date.civil(2007,2,27) >> Object.new }.should raise_error(TypeError)
  end
end
