require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#eql?" do
  it "returns true if self and other have the same whole number of seconds" do
    Time.at(100).should eql(Time.at(100))
  end

  it "returns false if self and other have differing whole numbers of seconds" do
    Time.at(100).should_not eql(Time.at(99))
  end

  it "returns true if self and other have the same number of microseconds" do
    Time.at(100, 100).should eql(Time.at(100, 100))
  end

  it "returns false if self and other have differing numbers of microseconds" do
    Time.at(100, 100).should_not eql(Time.at(100, 99))
  end

  it "returns false if self and other have differing fractional microseconds" do
    Time.at(100, Rational(100,1000)).should_not eql(Time.at(100, Rational(99,1000)))
  end

  it "returns false when given a non-time value" do
    Time.at(100, 100).should_not eql("100")
    Time.at(100, 100).should_not eql(100)
    Time.at(100, 100).should_not eql(100.1)
  end
end
