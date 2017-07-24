require 'date'
require File.expand_path('../../../shared/time/strftime_for_date', __FILE__)

describe "Date#strftime" do
  before :all do
    @new_date = lambda { |y,m,d| Date.civil(y,m,d) }

    @date = Date.civil(2000, 4, 9)
  end

  it_behaves_like :strftime_date, :strftime

  # Differences with Time
  it "should be able to print the date with no argument" do
    @date.strftime.should == "2000-04-09"
    @date.strftime.should == @date.to_s
  end

  # %Z is %:z for Date/DateTime
  it "should be able to show the timezone with a : separator" do
    @date.strftime("%Z").should == "+00:00"
  end

  # %v is %e-%b-%Y for Date/DateTime
  it "should be able to show the commercial week" do
    @date.strftime("%v").should == " 9-Apr-2000"
    @date.strftime("%v").should == @date.strftime('%e-%b-%Y')
  end

  # additional conversion specifiers only in Date/DateTime
  it 'shows the number of milliseconds since epoch' do
    DateTime.new(1970, 1, 1).strftime('%Q').should == "0"
    @date.strftime("%Q").should == "955238400000"
  end

  it "should be able to show a full notation" do
    @date.strftime("%+").should == "Sun Apr  9 00:00:00 +00:00 2000"
    @date.strftime("%+").should == @date.strftime('%a %b %e %H:%M:%S %Z %Y')
  end
end
