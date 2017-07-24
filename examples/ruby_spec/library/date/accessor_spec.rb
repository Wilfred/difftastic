require 'date'
require File.expand_path('../../../spec_helper', __FILE__)

describe "Date#ajd" do
  it "determines the Astronomical Julian day" do
    Date.civil(2007, 1, 17).ajd.should == 4908235.to_r / 2
  end
end

describe "Date#amjd" do
  it "determines the Astronomical Modified Julian day" do
    Date.civil(2007, 1, 17).amjd.should == 54117
  end
end

describe "Date#day_fraction" do
  it "determines the day fraction" do
    Date.civil(2007, 1, 17).day_fraction.should == 0
  end
end

describe "Date#mjd" do
  it "determines the Modified Julian day" do
    Date.civil(2007, 1, 17).mjd.should == 54117
  end
end

describe "Date#ld" do
  it "determines the Modified Julian day" do
    Date.civil(2007, 1, 17).ld.should == 154958
  end
end

describe "Date#year" do
  it "determines the year" do
    Date.civil(2007, 1, 17).year.should == 2007
  end
end

describe "Date#yday" do
  it "determines the year" do
    Date.civil(2007,  1, 17).yday.should == 17
    Date.civil(2008, 10, 28).yday.should == 302
  end
end

describe "Date#mon" do
  it "determines the month" do
    Date.civil(2007,  1, 17).mon.should == 1
    Date.civil(2008, 10, 28).mon.should == 10
  end
end

describe "Date#mday" do
  it "determines the day of the month" do
    Date.civil(2007,  1, 17).mday.should == 17
    Date.civil(2008, 10, 28).mday.should == 28
  end
end

describe "Date#wday" do
  it "determines the week day" do
    Date.civil(2007,  1, 17).wday.should == 3
    Date.civil(2008, 10, 26).wday.should == 0
  end
end

describe "Date#cwyear" do
  it "determines the commercial year" do
    Date.civil(2007,  1, 17).cwyear.should == 2007
    Date.civil(2008, 10, 28).cwyear.should == 2008
    Date.civil(2007, 12, 31).cwyear.should == 2008
    Date.civil(2010,  1,  1).cwyear.should == 2009
  end
end

describe "Date#cweek" do
  it "determines the commercial week" do
    Date.civil(2007,  1, 17).cweek.should == 3
    Date.civil(2008, 10, 28).cweek.should == 44
    Date.civil(2007, 12, 31).cweek.should == 1
    Date.civil(2010,  1,  1).cweek.should == 53
  end
end

describe "Date#cwday" do
  it "determines the commercial week day" do
    Date.civil(2007,  1, 17).cwday.should == 3
    Date.civil(2008, 10, 26).cwday.should == 7
  end
end
