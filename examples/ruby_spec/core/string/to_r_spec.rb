require File.expand_path('../../../spec_helper', __FILE__)

describe "String#to_r" do
  it "returns a Rational object" do
    String.new.to_r.should be_an_instance_of(Rational)
  end

  it "returns (0/1) for the empty String" do
    "".to_r.should == Rational(0, 1)
  end

  it "returns (n/1) for a String starting with a decimal _n_" do
    "2".to_r.should == Rational(2, 1)
    "1765".to_r.should == Rational(1765, 1)
  end

  it "ignores trailing characters" do
    "2 foo".to_r.should == Rational(2, 1)
    "1765, ".to_r.should == Rational(1765, 1)
  end

  it "ignores leading spaces" do
    " 2".to_r.should == Rational(2, 1)
    "  1765, ".to_r.should == Rational(1765, 1)
  end

  it "does not ignore arbitrary, non-numeric leading characters" do
    "The rational form of 33 is...".to_r.should_not == Rational(33, 1)
    "a1765, ".to_r.should_not == Rational(1765, 1)
  end

  it "treats leading hypens as minus signs" do
    "-20".to_r.should == Rational(-20, 1)
  end

  it "does not treat a leading period without a numeric prefix as a decimal point" do
    ".9".to_r.should_not == Rational(8106479329266893, 9007199254740992)
  end

  it "understands decimal points" do
    "3.33".to_r.should == Rational(333, 100)
    "-3.33".to_r.should == Rational(-333, 100)
  end

  it "ignores underscores between numbers" do
    "190_22".to_r.should == Rational(19022, 1)
    "-190_22.7".to_r.should == Rational(-190227, 10)
  end

  it "understands a forward slash as separating the numerator from the denominator" do
    "20/3".to_r.should == Rational(20, 3)
    " -19.10/3".to_r.should == Rational(-191, 30)
  end

  it "returns (0/1) for Strings it can't parse" do
    "glark".to_r.should == Rational(0,1)
  end
end
