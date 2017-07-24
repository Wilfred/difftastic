require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_round, shared: true do
  before do
    @rational = Rational(2200, 7)
  end

  describe "with no arguments (precision = 0)" do
    it "returns an integer" do
      @rational.round.should be_kind_of(Integer)
      Rational(0, 1).round(0).should be_kind_of(Integer)
      Rational(124, 1).round(0).should be_kind_of(Integer)
    end

    it "returns the truncated value toward the nearest integer" do
      @rational.round.should == 314
      Rational(0, 1).round(0).should == 0
      Rational(2, 1).round(0).should == 2
    end

    it "returns the rounded value toward the nearest integer" do
      Rational(1, 2).round.should == 1
      Rational(-1, 2).round.should == -1
      Rational(3, 2).round.should == 2
      Rational(-3, 2).round.should == -2
      Rational(5, 2).round.should == 3
      Rational(-5, 2).round.should == -3
    end
  end

  describe "with a precision < 0" do
    it "returns an integer" do
      @rational.round(-2).should be_kind_of(Integer)
      @rational.round(-1).should be_kind_of(Integer)
      Rational(0, 1).round(-1).should be_kind_of(Integer)
      Rational(2, 1).round(-1).should be_kind_of(Integer)
    end

    it "moves the truncation point n decimal places left" do
      @rational.round(-3).should == 0
      @rational.round(-2).should == 300
      @rational.round(-1).should == 310
    end
  end

  describe "with a precision > 0" do
    it "returns a Rational" do
      @rational.round(1).should be_kind_of(Rational)
      @rational.round(2).should be_kind_of(Rational)
      Rational(0, 1).round(1).should be_kind_of(Rational)
      Rational(2, 1).round(1).should be_kind_of(Rational)
    end

    it "moves the truncation point n decimal places right" do
      @rational.round(1).should == Rational(3143, 10)
      @rational.round(2).should == Rational(31429, 100)
      @rational.round(3).should == Rational(157143, 500)
      Rational(0, 1).round(1).should == Rational(0, 1)
      Rational(2, 1).round(1).should == Rational(2, 1)
    end

    it "doesn't alter the value if the precision is too great" do
      Rational(3, 2).round(10).should == Rational(3, 2).round(20)
    end

    # #6605
    it "doesn't fail when rounding to an absurdly large positive precision" do
      Rational(3, 2).round(2_097_171).should == Rational(3, 2)
    end
  end
end
