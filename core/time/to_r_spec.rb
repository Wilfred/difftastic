require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#to_r" do
  it "returns the a Rational representing seconds and subseconds since the epoch" do
    Time.at(Rational(11, 10)).to_r.should eql(Rational(11, 10))
  end

  it "returns a Rational even for a whole number of seconds" do
    Time.at(2).to_r.should eql(Rational(2))
  end
end
