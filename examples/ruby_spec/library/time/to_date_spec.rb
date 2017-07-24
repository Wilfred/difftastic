
require File.expand_path('../../../spec_helper', __FILE__)
require 'time'

describe "Time#to_date" do
  it "yields accurate julian date for ambiguous pre-Gregorian reform value" do
    Time.utc(1582, 10, 4).to_date.jd.should == Date::ITALY - 11 # 2299150j
  end

  it "yields accurate julian date for Julian-Gregorian gap value" do
    Time.utc(1582, 10, 14).to_date.jd.should == Date::ITALY - 1 # 2299160j
  end

  it "yields accurate julian date for post-Gregorian reform value" do
    Time.utc(1582, 10, 15).to_date.jd.should == Date::ITALY # 2299161j
  end

  it "yields same julian day regardless of UTC time value" do
    Time.utc(1582, 10, 15, 00, 00, 00).to_date.jd.should == Date::ITALY
    Time.utc(1582, 10, 15, 23, 59, 59).to_date.jd.should == Date::ITALY
  end

  it "yields same julian day regardless of local time or zone" do

    with_timezone("Pacific/Pago_Pago", -11) do
      Time.local(1582, 10, 15, 00, 00, 00).to_date.jd.should == Date::ITALY
      Time.local(1582, 10, 15, 23, 59, 59).to_date.jd.should == Date::ITALY
    end

    with_timezone("Asia/Kamchatka", +12) do
      Time.local(1582, 10, 15, 00, 00, 00).to_date.jd.should == Date::ITALY
      Time.local(1582, 10, 15, 23, 59, 59).to_date.jd.should == Date::ITALY
    end

  end

  it "yields date with default Calendar reform day" do
    Time.utc(1582, 10,  4).to_date.start.should == Date::ITALY
    Time.utc(1582, 10, 14).to_date.start.should == Date::ITALY
    Time.utc(1582, 10, 15).to_date.start.should == Date::ITALY
  end
end
