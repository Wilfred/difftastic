require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "DateTime.parse" do

  it "parses a day name into a DateTime object" do
    d = DateTime.parse("friday")
    d.should == DateTime.commercial(d.cwyear, d.cweek, 5)
  end

  it "parses a month name into a DateTime object" do
    d = DateTime.parse("october")
    d.should == DateTime.civil(Date.today.year, 10)
  end

  it "parses a month day into a DateTime object" do
    d = DateTime.parse("5th")
    d.should == DateTime.civil(Date.today.year, Date.today.month, 5)
  end

  # Specs using numbers
  it "throws an argument error for a single digit" do
    lambda{ DateTime.parse("1") }.should raise_error(ArgumentError)
  end

  it "parses DD as month day number" do
    d = DateTime.parse("10")
    d.should == DateTime.civil(Date.today.year, Date.today.month, 10)
  end

  it "parses DDD as year day number" do
    d = DateTime.parse("100")
    if DateTime.gregorian_leap?(Date.today.year)
      d.should == DateTime.civil(Date.today.year, 4, 9)
    else
      d.should == DateTime.civil(Date.today.year, 4, 10)
    end
  end

  it "parses MMDD as month and day" do
    d = DateTime.parse("1108")
    d.should == DateTime.civil(Date.today.year, 11, 8)
  end

  it "parses YYYYMMDD as year, month and day" do
    d = DateTime.parse("20121108")
    d.should == DateTime.civil(2012, 11, 8)
  end

  describe "YYYY-MM-DDTHH:MM:SS format" do
    it "parses YYYY-MM-DDTHH:MM:SS into a DateTime object" do
      d = DateTime.parse("2012-11-08T15:43:59")
      d.should == DateTime.civil(2012, 11, 8, 15, 43, 59)
    end

    it "throws an argument error for invalid month values" do
      lambda{DateTime.parse("2012-13-08T15:43:59")}.should raise_error(ArgumentError)
    end

    it "throws an argument error for invalid day values" do
      lambda{DateTime.parse("2012-12-32T15:43:59")}.should raise_error(ArgumentError)
    end

    it "throws an argument error for invalid hour values" do
      lambda{DateTime.parse("2012-12-31T25:43:59")}.should raise_error(ArgumentError)
    end

    it "throws an argument error for invalid minute values" do
      lambda{DateTime.parse("2012-12-31T25:43:59")}.should raise_error(ArgumentError)
    end

    it "throws an argument error for invalid second values" do
      lambda{DateTime.parse("2012-11-08T15:43:61")}.should raise_error(ArgumentError)
    end

  end

  it "parses YYDDD as year and day number in 1969--2068" do
    d = DateTime.parse("10100")
    d.should == DateTime.civil(2010, 4, 10)
  end

  it "parses YYMMDD as year, month and day in 1969--2068" do
    d = DateTime.parse("201023")
    d.should == DateTime.civil(2020, 10, 23)
  end

  it "parses YYYYDDD as year and day number" do
    d = DateTime.parse("1910100")
    d.should == DateTime.civil(1910, 4, 10)
  end

  it "parses YYYYMMDD as year, month and day number" do
    d = DateTime.parse("19101101")
    d.should == DateTime.civil(1910, 11, 1)
  end
end

describe "DateTime.parse(.)" do
  it "parses YYYY.MM.DD into a DateTime object" do
    d = DateTime.parse("2007.10.01")
    d.year.should == 2007
    d.month.should == 10
    d.day.should == 1
  end

  it "parses DD.MM.YYYY into a DateTime object" do
    d = DateTime.parse("10.01.2007")
    d.year.should == 2007
    d.month.should == 1
    d.day.should == 10
  end

  it "parses YY.MM.DD into a DateTime object using the year 20YY" do
    d = DateTime.parse("10.01.07")
    d.year.should == 2010
    d.month.should == 1
    d.day.should == 7
  end

  it "parses YY.MM.DD using the year digits as 20YY when given true as additional argument" do
    d = DateTime.parse("10.01.07", true)
    d.year.should == 2010
    d.month.should == 1
    d.day.should == 7
  end
end
