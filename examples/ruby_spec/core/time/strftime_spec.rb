# encoding: utf-8

require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/time/strftime_for_date', __FILE__)
require File.expand_path('../../../shared/time/strftime_for_time', __FILE__)

describe "Time#strftime" do
  before :all do
    @new_date = lambda { |y,m,d| Time.gm(y,m,d) }
    @new_time = lambda { |*args| Time.gm(*args) }
    @new_time_in_zone = lambda { |zone,offset,*args|
      with_timezone(zone, offset) do
        Time.new(*args)
      end
    }
    @new_time_with_offset = lambda { |y,m,d,h,min,s,offset|
      Time.new(y,m,d,h,min,s,offset)
    }

    @time = @new_time[2001, 2, 3, 4, 5, 6]
  end

  it_behaves_like :strftime_date, :strftime
  it_behaves_like :strftime_time, :strftime

  # Differences with date
  it "requires an argument" do
    lambda { @time.strftime }.should raise_error(ArgumentError)
  end

  # %Z is zone name or empty for Time
  it "should be able to show the timezone if available" do
    @time.strftime("%Z").should == @time.zone
    with_timezone("UTC", 0) do
      Time.gm(2000).strftime("%Z").should == "UTC"
    end

    Time.new(2000, 1, 1, 0, 0, 0, 42).strftime("%Z").should == ""
  end

  # %v is %e-%^b-%Y for Time
  it "should be able to show the commercial week" do
    @time.strftime("%v").should == " 3-FEB-2001"
    @time.strftime("%v").should == @time.strftime('%e-%^b-%Y')
  end

  # Date/DateTime round at creation time, but Time does it in strftime.
  it "rounds an offset to the nearest second when formatting with %z" do
    time = @new_time_with_offset[2012, 1, 1, 0, 0, 0, Rational(36645, 10)]
    time.strftime("%::z").should == "+01:01:05"
  end
end
