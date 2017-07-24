require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "DateTime#hour" do
  it "returns 0 if no argument is passed" do
    DateTime.new.hour.should == 0
  end

  it "returns the hour given as argument" do
    new_datetime(hour: 5).hour.should == 5
  end

  it "adds 24 to negative hours" do
    new_datetime(hour: -10).hour.should == 14
  end

  it "raises an error for Rational" do
    lambda { new_datetime(hour: 1 + Rational(1,2)) }.should raise_error(ArgumentError)
  end

  it "raises an error for Float" do
    lambda { new_datetime(hour: 1.5).hour }.should raise_error(ArgumentError)
  end

  it "raises an error for Rational" do
    lambda { new_datetime(day: 1 + Rational(1,2)) }.should raise_error(ArgumentError)
  end

  it "raises an error, when the hour is smaller than -24" do
    lambda { new_datetime(hour: -25) }.should raise_error(ArgumentError)
  end

  it "raises an error, when the hour is larger than 24" do
    lambda { new_datetime(hour: 25) }.should raise_error(ArgumentError)
  end

  it "raises an error for hour fractions smaller than -24" do
    lambda { new_datetime(hour: -24 - Rational(1,2)) }.should(
      raise_error(ArgumentError))
  end

  it "adds 1 to day, when 24 hours given" do
    d = new_datetime day: 1, hour: 24
    d.hour.should == 0
    d.day.should == 2
  end
end
