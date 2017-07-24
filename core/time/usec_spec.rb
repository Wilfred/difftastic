require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#usec" do
  it "returns 0 for a Time constructed with a whole number of seconds" do
    Time.at(100).usec.should == 0
  end

  it "returns the microseconds part of a Time constructed with a Float number of seconds" do
    Time.at(10.75).usec.should == 750_000
  end

  it "returns the microseconds part of a Time constructed with an Integer number of microseconds" do
    Time.at(0, 999_999).usec.should == 999_999
  end

  it "returns the microseconds part of a Time constructed with an Float number of microseconds > 1" do
    Time.at(0, 3.75).usec.should == 3
  end

  it "returns 0 for a Time constructed with an Float number of microseconds < 1" do
    Time.at(0, 0.75).usec.should == 0
  end

  it "returns the microseconds part of a Time constructed with a Rational number of seconds" do
    Time.at(Rational(3, 2)).usec.should == 500_000
  end

  it "returns the microseconds part of a Time constructed with an Rational number of microseconds > 1" do
    Time.at(0, Rational(99, 10)).usec.should == 9
  end

  it "returns 0 for a Time constructed with an Rational number of microseconds < 1" do
    Time.at(0, Rational(9, 10)).usec.should == 0
  end

  it "returns the microseconds for time created by Time#local" do
    Time.local(1,2,3,4,5,Rational(6.78)).usec.should == 780000
  end
end
