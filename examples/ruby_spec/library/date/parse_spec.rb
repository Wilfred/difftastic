require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/parse', __FILE__)
require File.expand_path('../shared/parse_us', __FILE__)
require File.expand_path('../shared/parse_eu', __FILE__)
require 'date'

describe "Date#parse" do
  # The space separator is also different, doesn't work for only numbers
  it "parses a day name into a Date object" do
    d = Date.parse("friday")
    d.should == Date.commercial(d.cwyear, d.cweek, 5)
  end

  it "parses a month name into a Date object" do
    d = Date.parse("october")
    d.should == Date.civil(Date.today.year, 10)
  end

  it "parses a month day into a Date object" do
    d = Date.parse("5th")
    d.should == Date.civil(Date.today.year, Date.today.month, 5)
  end

  # Specs using numbers
  it "throws an argument error for a single digit" do
    lambda{ Date.parse("1") }.should raise_error(ArgumentError)
  end

  it "parses DD as month day number" do
    d = Date.parse("10")
    d.should == Date.civil(Date.today.year, Date.today.month, 10)
  end

  it "parses DDD as year day number" do
    d = Date.parse("100")
    if Date.gregorian_leap?(Date.today.year)
      d.should == Date.civil(Date.today.year, 4, 9)
    else
      d.should == Date.civil(Date.today.year, 4, 10)
    end
  end

  it "parses MMDD as month and day" do
    d = Date.parse("1108")
    d.should == Date.civil(Date.today.year, 11, 8)
  end

  it "parses YYDDD as year and day number in 1969--2068" do
    d = Date.parse("10100")
    d.should == Date.civil(2010, 4, 10)
  end

  it "parses YYMMDD as year, month and day in 1969--2068" do
    d = Date.parse("201023")
    d.should == Date.civil(2020, 10, 23)
  end

  it "parses YYYYDDD as year and day number" do
    d = Date.parse("1910100")
    d.should == Date.civil(1910, 4, 10)
  end

  it "parses YYYYMMDD as year, month and day number" do
    d = Date.parse("19101101")
    d.should == Date.civil(1910, 11, 1)
  end
end

describe "Date#parse with '.' separator" do
  before :all do
    @sep = '.'
  end

  it_should_behave_like "date_parse"
end

describe "Date#parse with '/' separator" do
  before :all do
    @sep = '/'
  end

  it_should_behave_like "date_parse"
end

describe "Date#parse with ' ' separator" do
  before :all do
    @sep = ' '
  end

  it_should_behave_like "date_parse"
end

describe "Date#parse with '/' separator US-style" do
  before :all do
    @sep = '/'
  end

  it_should_behave_like "date_parse_us"
end

describe "Date#parse with '-' separator EU-style" do
  before :all do
    @sep = '-'
  end

  it_should_behave_like "date_parse_eu"
end

describe "Date#parse(.)" do
  it "parses YYYY.MM.DD into a Date object" do
    d = Date.parse("2007.10.01")
    d.year.should == 2007
    d.month.should == 10
    d.day.should == 1
  end

  it "parses DD.MM.YYYY into a Date object" do
    d = Date.parse("10.01.2007")
    d.year.should == 2007
    d.month.should == 1
    d.day.should == 10
  end

  it "parses YY.MM.DD into a Date object using the year 20YY" do
    d = Date.parse("10.01.07")
    d.year.should == 2010
    d.month.should == 1
    d.day.should == 7
  end

  it "parses YY.MM.DD using the year digits as 20YY when given true as additional argument" do
    d = Date.parse("10.01.07", true)
    d.year.should == 2010
    d.month.should == 1
    d.day.should == 7
  end
end
