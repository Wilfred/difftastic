require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "DateTime.new" do
  it "sets all values to default if passed no arguments" do
    d = DateTime.new
    d.year.should == -4712
    d.month.should == 1
    d.day.should == 1
    d.hour.should == 0
    d.min.should == 0
    d.sec.should == 0
    d.sec_fraction.should == 0
    d.offset.should == 0
  end

  it "takes the first argument as year" do
    DateTime.new(2011).year.should == 2011
  end

  it "takes the second argument as month" do
    DateTime.new(2011, 2).month.should == 2
  end

  it "takes the third argument as day" do
    DateTime.new(2011, 2, 3).day.should == 3
  end

  it "takes the forth argument as hour" do
    DateTime.new(2011, 2, 3, 4).hour.should == 4
  end

  it "takes the fifth argument as minute" do
    DateTime.new(1, 2, 3, 4, 5).min.should == 5
  end

  it "takes the sixth argument as second" do
    DateTime.new(1, 2, 3, 4, 5, 6).sec.should == 6
  end

  it "takes the seventh argument as an offset" do
    DateTime.new(1, 2, 3, 4, 5, 6, 0.7).offset.should == 0.7
  end

  it "takes the eigth argument as the date of calendar reform" do
    DateTime.new(1, 2, 3, 4, 5, 6, 0.7, Date::ITALY).start().should == Date::ITALY
  end

  it "raises an error on invalid arguments" do
    lambda { new_datetime(minute: 999) }.should raise_error(ArgumentError)
  end
end
