require 'date'
require File.expand_path('../../../spec_helper', __FILE__)


describe "Date#new_start" do
  it "converts a date object into another with a new calendar reform" do
    Date.civil(1582, 10, 14, Date::ENGLAND).new_start.should == Date.civil(1582, 10, 24)
    Date.civil(1582, 10,  4, Date::ENGLAND).new_start.should == Date.civil(1582, 10,  4)
    Date.civil(1582, 10, 15).new_start(Date::ENGLAND).should == Date.civil(1582, 10,  5, Date::ENGLAND)
    Date.civil(1752,  9, 14).new_start(Date::ENGLAND).should == Date.civil(1752,  9, 14, Date::ENGLAND)
    Date.civil(1752,  9, 13).new_start(Date::ENGLAND).should == Date.civil(1752,  9,  2, Date::ENGLAND)
  end
end

describe "Date#italy" do
  it "converts a date object into another with the Italian calendar reform" do
    Date.civil(1582, 10, 14, Date::ENGLAND).italy.should == Date.civil(1582, 10, 24)
    Date.civil(1582, 10,  4, Date::ENGLAND).italy.should == Date.civil(1582, 10,  4)
  end
end

describe "Date#england" do
  it "converts a date object into another with the English calendar reform" do
    Date.civil(1582, 10, 15).england.should == Date.civil(1582, 10,  5, Date::ENGLAND)
    Date.civil(1752,  9, 14).england.should == Date.civil(1752,  9, 14, Date::ENGLAND)
    Date.civil(1752,  9, 13).england.should == Date.civil(1752,  9,  2, Date::ENGLAND)
  end
end

describe "Date#julian" do
  it "converts a date object into another with the Julian calendar" do
    Date.civil(1582, 10, 15).julian.should == Date.civil(1582, 10,  5, Date::JULIAN)
    Date.civil(1752,  9, 14).julian.should == Date.civil(1752,  9,  3, Date::JULIAN)
    Date.civil(1752,  9, 13).julian.should == Date.civil(1752,  9,  2, Date::JULIAN)
  end
end

describe "Date#gregorian" do
  it "converts a date object into another with the Gregorian calendar" do
    Date.civil(1582, 10,  4).gregorian.should == Date.civil(1582, 10, 14, Date::GREGORIAN)
    Date.civil(1752,  9, 14).gregorian.should == Date.civil(1752,  9, 14, Date::GREGORIAN)
  end
end
