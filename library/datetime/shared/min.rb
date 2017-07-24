require 'date'

describe :datetime_min, shared: true do
  it "returns 0 if no argument is passed" do
    DateTime.new.send(@method).should == 0
  end

  it "returns the minute passed as argument" do
    new_datetime(minute: 5).send(@method).should == 5
  end

  it "adds 60 to negative minutes" do
    new_datetime(minute: -20).send(@method).should == 40
  end

  it "raises an error for Rational" do
    lambda { new_datetime minute: 5 + Rational(1,2) }.should raise_error(ArgumentError)
  end

  it "raises an error for Float" do
    lambda { new_datetime minute: 5.5 }.should raise_error(ArgumentError)
  end

  it "raises an error for Rational" do
    lambda { new_datetime(hour: 2 + Rational(1,2)) }.should raise_error(ArgumentError)
  end

  it "raises an error, when the minute is smaller than -60" do
    lambda { new_datetime(minute: -61) }.should raise_error(ArgumentError)
  end

  it "raises an error, when the minute is greater or equal than 60" do
    lambda { new_datetime(minute: 60) }.should raise_error(ArgumentError)
  end

  it "raises an error for minute fractions smaller than -60" do
    lambda { new_datetime(minute: -60 - Rational(1,2))}.should(
      raise_error(ArgumentError))
  end
end
