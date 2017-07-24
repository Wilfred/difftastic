require File.expand_path('../../../../spec_helper', __FILE__)

describe :numeric_polar, shared: true do
  before :each do
    @pos_numbers = [
      1,
      3898172610**9,
      987.18273,
      Float::MAX,
      Rational(13,7),
      infinity_value,
    ]
    @neg_numbers = @pos_numbers.map {|n| -n}
    @numbers = @pos_numbers + @neg_numbers
    @numbers.push(0, 0.0)
  end

  it "returns a two-element Array" do
    @numbers.each do |number|
      number.polar.should be_an_instance_of(Array)
      number.polar.size.should == 2
    end
  end

  it "sets the first value to the absolute value of self" do
    @numbers.each do |number|
      number.polar.first.should == number.abs
    end
  end

  it "sets the last value to 0 if self is positive" do
    (@numbers - @neg_numbers).each do |number|
      number.should >= 0
      number.polar.last.should == 0
    end
  end

  it "sets the last value to Pi if self is negative" do
    @neg_numbers.each do |number|
      number.should < 0
      number.polar.last.should == Math::PI
    end
  end

  it "returns [NaN, NaN] if self is NaN" do
    nan_value.polar.size.should == 2
    nan_value.polar.first.nan?.should be_true
    nan_value.polar.last.nan?.should be_true
  end
end
