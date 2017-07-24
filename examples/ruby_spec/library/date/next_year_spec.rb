require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#next_year" do
  it "returns the day of the reform if date falls within calendar reform" do
    calendar_reform_italy = Date.new(1582, 10, 4)
    d1 = Date.new(1581, 10, 9).next_year
    d2 = Date.new(1581, 10, 10).next_year
    d1.should == calendar_reform_italy
    d2.should == calendar_reform_italy
  end
end
