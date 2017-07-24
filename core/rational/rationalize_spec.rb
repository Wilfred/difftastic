require File.expand_path('../../../spec_helper', __FILE__)

describe "Rational#rationalize" do
  it "returns self with no argument" do
    Rational(12,3).rationalize.should == Rational(12,3)
    Rational(-45,7).rationalize.should == Rational(-45,7)
  end

  # FIXME: These specs need reviewing by somebody familiar with the
  # algorithm used by #rationalize
  it "simplifies self to the degree specified by a Rational argument" do
    r = Rational(5404319552844595,18014398509481984)
    r.rationalize(Rational(1,10)).should == Rational(1,3)
    r.rationalize(Rational(-1,10)).should == Rational(1,3)

    r = Rational(-5404319552844595,18014398509481984)
    r.rationalize(Rational(1,10)).should == Rational(-1,3)
    r.rationalize(Rational(-1,10)).should == Rational(-1,3)

  end

  it "simplifies self to the degree specified by a Float argument" do
    r = Rational(5404319552844595,18014398509481984)
    r.rationalize(0.05).should == Rational(1,3)
    r.rationalize(0.001).should == Rational(3, 10)

    r = Rational(-5404319552844595,18014398509481984)
    r.rationalize(0.05).should == Rational(-1,3)
    r.rationalize(0.001).should == Rational(-3,10)
  end

  it "raises ArgumentError when passed more than one argument" do
    lambda { Rational(1,1).rationalize(0.1, 0.1) }.should raise_error(ArgumentError)
    lambda { Rational(1,1).rationalize(0.1, 0.1, 2) }.should raise_error(ArgumentError)
  end
end
