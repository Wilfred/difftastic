require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#gregorian_leap?" do
  it "returns true if a year is a leap year in the Gregorian calendar" do
    Date.gregorian_leap?(2000).should be_true
    Date.gregorian_leap?(2004).should be_true
  end

  it "returns false if a year is not a leap year in the Gregorian calendar" do
    Date.gregorian_leap?(1900).should be_false
    Date.gregorian_leap?(1999).should be_false
    Date.gregorian_leap?(2002).should be_false
  end
end

