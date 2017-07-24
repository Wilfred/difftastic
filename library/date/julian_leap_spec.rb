require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date.julian_leap?" do
  it "determines whether a year is a leap year in the Julian calendar" do
    Date.julian_leap?(1900).should be_true
    Date.julian_leap?(2000).should be_true
    Date.julian_leap?(2004).should be_true
  end

  it "determines whether a year is not a leap year in the Julian calendar" do
    Date.julian_leap?(1999).should be_false
    Date.julian_leap?(2002).should be_false
  end
end
