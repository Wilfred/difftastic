require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#prev_year" do
  it "returns the day of the reform if date falls within calendar reform" do
    calendar_reform_italy = Date.new(1582, 10, 4)
    d1 = Date.new(1583, 10, 9).prev_year
    d2 = Date.new(1583, 10, 10).prev_year
    d1.should == calendar_reform_italy
    d2.should == calendar_reform_italy
  end
end
