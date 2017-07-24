require 'date'
require File.expand_path('../../../shared/time/strftime_for_date', __FILE__)
require File.expand_path('../../../shared/time/strftime_for_time', __FILE__)

describe "DateTime#strftime" do
  before :all do
    @new_date = lambda { |y,m,d| DateTime.civil(y,m,d) }
    @new_time = lambda { |*args| DateTime.civil(*args) }
    @new_time_in_zone = lambda { |zone,offset,*args|
      y, m, d, h, min, s = args
      DateTime.new(y, m||1, d||1, h||0, min||0, s||0, Rational(offset, 24))
    }
    @new_time_with_offset = lambda { |y,m,d,h,min,s,offset|
      DateTime.new(y,m,d,h,min,s, Rational(offset, 86_400))
    }

    @time = DateTime.civil(2001, 2, 3, 4, 5, 6)
  end

  it_behaves_like :strftime_date, :strftime
  it_behaves_like :strftime_time, :strftime

  # Differences with Time
  it "should be able to print the datetime with no argument" do
    @time.strftime.should == "2001-02-03T04:05:06+00:00"
    @time.strftime.should == @time.to_s
  end

  # %Z is %:z for Date/DateTime
  it "should be able to show the timezone with a : separator" do
    @time.strftime("%Z").should == "+00:00"
  end

  # %v is %e-%b-%Y for Date/DateTime
  it "should be able to show the commercial week" do
    @time.strftime("%v").should == " 3-Feb-2001"
    @time.strftime("%v").should == @time.strftime('%e-%b-%Y')
  end

  # additional conversion specifiers only in Date/DateTime
  it 'shows the number of milliseconds since epoch' do
    DateTime.new(1970, 1, 1, 0, 0, 0).strftime("%Q").should == "0"
    @time.strftime("%Q").should == "981173106000"
    DateTime.civil(2001, 2, 3, 4, 5, Rational(6123, 1000)).strftime("%Q").should == "981173106123"
  end

  it "should be able to show a full notation" do
    @time.strftime("%+").should == "Sat Feb  3 04:05:06 +00:00 2001"
    @time.strftime("%+").should == @time.strftime('%a %b %e %H:%M:%S %Z %Y')
  end
end
