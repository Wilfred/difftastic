require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_floor, shared: true do
  before do
    @rational = Rational(2200, 7)
  end

  describe "with no arguments (precision = 0)" do
    it "returns an integer" do
      @rational.floor.should be_kind_of(Integer)
    end

    it "returns the truncated value toward negative infinity" do
      @rational.floor.should == 314
      Rational(1, 2).floor.should == 0
      Rational(-1, 2).floor.should == -1
    end
  end

  describe "with a precision < 0" do
    it "returns an integer" do
      @rational.floor(-2).should be_kind_of(Integer)
      @rational.floor(-1).should be_kind_of(Integer)
    end

    it "moves the truncation point n decimal places left" do
      @rational.floor(-3).should == 0
      @rational.floor(-2).should == 300
      @rational.floor(-1).should == 310
    end
  end

  describe "with a precision > 0" do
    it "returns a Rational" do
      @rational.floor(1).should be_kind_of(Rational)
      @rational.floor(2).should be_kind_of(Rational)
    end

    it "moves the truncation point n decimal places right" do
      @rational.floor(1).should == Rational(1571, 5)
      @rational.floor(2).should == Rational(7857, 25)
      @rational.floor(3).should == Rational(62857, 200)
    end
  end
end
