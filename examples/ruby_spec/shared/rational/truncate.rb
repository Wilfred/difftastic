require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_truncate, shared: true do
  before do
    @rational = Rational(2200, 7)
  end

  describe "with no arguments (precision = 0)" do
    it "returns an integer" do
      @rational.truncate.should be_kind_of(Integer)
    end

    it "returns the truncated value toward 0" do
      @rational.truncate.should == 314
      Rational(1, 2).truncate.should == 0
      Rational(-1, 2).truncate.should == 0
    end
  end

  describe "with a precision < 0" do
    it "returns an integer" do
      @rational.truncate(-2).should be_kind_of(Integer)
      @rational.truncate(-1).should be_kind_of(Integer)
    end

    it "moves the truncation point n decimal places left" do
      @rational.truncate(-3).should == 0
      @rational.truncate(-2).should == 300
      @rational.truncate(-1).should == 310
    end
  end

  describe "with a precision > 0" do
    it "returns a Rational" do
      @rational.truncate(1).should be_kind_of(Rational)
      @rational.truncate(2).should be_kind_of(Rational)
    end

    it "moves the truncation point n decimal places right" do
      @rational.truncate(1).should == Rational(1571, 5)
      @rational.truncate(2).should == Rational(7857, 25)
      @rational.truncate(3).should == Rational(62857, 200)
    end
  end
end
