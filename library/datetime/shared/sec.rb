require 'date'

describe :datetime_sec, shared: true do
  it "returns 0 seconds if passed no arguments" do
    d = DateTime.new
    d.send(@method).should == 0
  end

  it "returns the seconds passed in the arguments" do
    new_datetime(second: 5).send(@method).should == 5
  end

  it "adds 60 to negative values" do
    new_datetime(second: -20).send(@method).should == 40
  end

  it "returns the absolute value of a Rational" do
    new_datetime(second: 5 + Rational(1,2)).send(@method).should == 5
  end

  it "returns the absolute value of a float" do
    new_datetime(second: 5.5).send(@method).should == 5
  end

  it "raises an error when minute is given as a rational" do
    lambda { new_datetime(minute: 5 + Rational(1,2)) }.should raise_error(ArgumentError)
  end

  it "raises an error, when the second is smaller than -60" do
    lambda { new_datetime(second: -61) }.should raise_error(ArgumentError)
  end

  it "raises an error, when the second is greater or equal than 60" do
    lambda { new_datetime(second: 60) }.should raise_error(ArgumentError)
  end

  it "raises an error for second fractions smaller than -60" do
    lambda { new_datetime(second: -60 - Rational(1,2))}.should(
      raise_error(ArgumentError))
  end

  it "takes a second fraction near 60" do
    new_datetime(second: 59 + Rational(1,2)).send(@method).should == 59
  end
end
