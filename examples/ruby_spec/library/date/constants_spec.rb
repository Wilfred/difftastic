require 'date'
require File.expand_path('../../../spec_helper', __FILE__)

describe "Date constants" do

  it "defines JULIAN" do
    (Date::JULIAN <=> Date::Infinity.new).should == 0
  end

  it "defines GREGORIAN" do
    (Date::GREGORIAN <=> -Date::Infinity.new).should == 0
  end

  it "defines ITALY" do
    Date::ITALY.should == 2299161 # 1582-10-15
  end

  it "defines ENGLAND" do
    Date::ENGLAND.should == 2361222 # 1752-09-14
  end

  it "defines MONTHNAMES" do
    Date::MONTHNAMES.should == [nil] + %w(January February March April May June July
                                          August September October November December)
  end

  it "defines DAYNAMES" do
    Date::DAYNAMES.should == %w(Sunday Monday Tuesday Wednesday Thursday Friday Saturday)
  end

  it "defines ABBR_MONTHNAMES" do
    Date::ABBR_DAYNAMES.should == %w(Sun Mon Tue Wed Thu Fri Sat)
  end

  it "freezes MONTHNAMES, DAYNAMES, ABBR_MONTHNAMES, ABBR_DAYSNAMES" do
    [Date::MONTHNAMES, Date::DAYNAMES, Date::ABBR_MONTHNAMES, Date::ABBR_DAYNAMES].each do |ary|
      lambda { ary << "Unknown" }.should raise_error
      ary.compact.each do |name|
        lambda { name << "modified" }.should raise_error
      end
    end
  end

end
