require File.expand_path('../spec_helper', __FILE__)

load_extension("rational")

describe :rb_Rational, shared: true do
  it "creates a new Rational with numerator and denominator" do
    @r.send(@method, 1, 2).should == Rational(1, 2)
  end
end

describe :rb_rational_new, shared: true do
  it "creates a normalized Rational" do
    r = @r.send(@method, 10, 4)
    r.numerator.should == 5
    r.denominator.should == 2
  end
end

describe "CApiRationalSpecs" do
  before :each do
    @r = CApiRationalSpecs.new
  end

  describe "rb_Rational" do
    it_behaves_like :rb_Rational, :rb_Rational
  end

  describe "rb_Rational2" do
    it_behaves_like :rb_Rational, :rb_Rational2
  end

  describe "rb_Rational1" do
    it "creates a new Rational with numerator and denominator of 1" do
      @r.rb_Rational1(5).should == Rational(5, 1)
    end
  end

  describe "rb_rational_new" do
    it_behaves_like :rb_rational_new, :rb_rational_new
  end

  describe "rb_rational_new2" do
    it_behaves_like :rb_rational_new, :rb_rational_new2
  end

  describe "rb_rational_num" do
    it "returns the numerator of a Rational" do
      @r.rb_rational_num(Rational(7, 2)).should == 7
    end
  end

  describe "rb_rational_den" do
    it "returns the denominator of a Rational" do
      @r.rb_rational_den(Rational(7, 2)).should == 2
    end
  end
end
