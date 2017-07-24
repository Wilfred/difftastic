require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#gregorian?" do

  it "marks a day before the calendar reform as Julian" do
    Date.civil(1007, 2, 27).gregorian?.should be_false
    Date.civil(1907, 2, 27, Date.civil(1930, 1, 1).jd).gregorian?.should be_false
  end

  it "marks a day after the calendar reform as Julian" do
    Date.civil(2007, 2, 27).gregorian?.should == true
    Date.civil(1607, 2, 27, Date.civil(1582, 1, 1).jd).gregorian?.should be_true
  end

end
