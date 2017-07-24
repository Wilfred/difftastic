# Shared for Time, Date and DateTime, testing only date components (smallest unit is day)

describe :strftime_date, shared: true do
  before :all do
    @d200_4_6 =   @new_date[200, 4, 6]
    @d2000_4_6 =  @new_date[2000, 4, 6]
    @d2000_4_9 =  @new_date[2000, 4, 9]
    @d2000_4_10 = @new_date[2000, 4, 10]
    @d2009_9_18 = @new_date[2009, 9, 18]
  end

  # Per conversion specifier, not combining
  it "should be able to print the full day name" do
    @d2000_4_6.strftime("%A").should == "Thursday"
    @d2009_9_18.strftime('%A').should == 'Friday'
  end

  it "should be able to print the short day name" do
    @d2000_4_6.strftime("%a").should == "Thu"
    @d2009_9_18.strftime('%a').should == 'Fri'
  end

  it "should be able to print the full month name" do
    @d2000_4_6.strftime("%B").should == "April"
    @d2009_9_18.strftime('%B').should == 'September'
  end

  it "should be able to print the short month name" do
    @d2000_4_6.strftime("%b").should == "Apr"
    @d2000_4_6.strftime("%h").should == "Apr"
    @d2000_4_6.strftime("%b").should == @d2000_4_6.strftime("%h")
    @d2009_9_18.strftime('%b').should == 'Sep'
  end

  it "should be able to print the century" do
    @d2000_4_6.strftime("%C").should == "20"
  end

  it "should be able to print the month day with leading zeroes" do
    @d2000_4_6.strftime("%d").should == "06"
    @d2009_9_18.strftime('%d').should == '18'
  end

  it "should be able to print the month day with leading spaces" do
    @d2000_4_6.strftime("%e").should == " 6"
  end

  it "should be able to print the commercial year with leading zeroes" do
    @d2000_4_6.strftime("%G").should == "2000"
    @d200_4_6.strftime("%G").should == "0200"
  end

  it "should be able to print the commercial year with only two digits" do
    @d2000_4_6.strftime("%g").should == "00"
    @d200_4_6.strftime("%g").should == "00"
  end

  it "should be able to print the hour with leading zeroes (hour is always 00)" do
    @d2000_4_6.strftime("%H").should == "00"
  end

  it "should be able to print the hour in 12 hour notation with leading zeroes" do
    @d2000_4_6.strftime("%I").should == "12"
  end

  it "should be able to print the julian day with leading zeroes" do
    @d2000_4_6.strftime("%j").should == "097"
    @d2009_9_18.strftime('%j').should == '261'
  end

  it "should be able to print the hour in 24 hour notation with leading spaces" do
    @d2000_4_6.strftime("%k").should == " 0"
  end

  it "should be able to print the hour in 12 hour notation with leading spaces" do
    @d2000_4_6.strftime("%l").should == "12"
  end

  it "should be able to print the minutes with leading zeroes" do
    @d2000_4_6.strftime("%M").should == "00"
  end

  it "should be able to print the month with leading zeroes" do
    @d2000_4_6.strftime("%m").should == "04"
    @d2009_9_18.strftime('%m').should == '09'
  end

  it "should be able to add a newline" do
    @d2000_4_6.strftime("%n").should == "\n"
  end

  it "should be able to show AM/PM" do
    @d2000_4_6.strftime("%P").should == "am"
  end

  it "should be able to show am/pm" do
    @d2000_4_6.strftime("%p").should == "AM"
  end

  it "should be able to show the number of seconds with leading zeroes" do
    @d2000_4_6.strftime("%S").should == "00"
  end

  it "should be able to show the number of seconds since the unix epoch for a date" do
    @d2000_4_6.strftime("%s").should == "954979200"
  end

  it "should be able to add a tab" do
    @d2000_4_6.strftime("%t").should == "\t"
  end

  it "should be able to show the week number with the week starting on Sunday (%U) and Monday (%W)" do
    @d2000_4_6.strftime("%U").should == "14"  # Thursday
    @d2000_4_6.strftime("%W").should == "14"

    @d2000_4_9.strftime("%U").should == "15"  # Sunday
    @d2000_4_9.strftime("%W").should == "14"

    @d2000_4_10.strftime("%U").should == "15" # Monday
    @d2000_4_10.strftime("%W").should == "15"

    # start of the year
    saturday_first = @new_date[2000,1,1]
    saturday_first.strftime("%U").should == "00"
    saturday_first.strftime("%W").should == "00"

    sunday_second = @new_date[2000,1,2]
    sunday_second.strftime("%U").should == "01"
    sunday_second.strftime("%W").should == "00"

    monday_third = @new_date[2000,1,3]
    monday_third.strftime("%U").should == "01"
    monday_third.strftime("%W").should == "01"

    sunday_9th = @new_date[2000,1,9]
    sunday_9th.strftime("%U").should == "02"
    sunday_9th.strftime("%W").should == "01"

    monday_10th = @new_date[2000,1,10]
    monday_10th.strftime("%U").should == "02"
    monday_10th.strftime("%W").should == "02"

    # middle of the year
    some_sunday = @new_date[2000,8,6]
    some_sunday.strftime("%U").should == "32"
    some_sunday.strftime("%W").should == "31"
    some_monday = @new_date[2000,8,7]
    some_monday.strftime("%U").should == "32"
    some_monday.strftime("%W").should == "32"

    # end of year, and start of next one
    saturday_30th = @new_date[2000,12,30]
    saturday_30th.strftime("%U").should == "52"
    saturday_30th.strftime("%W").should == "52"

    sunday_last = @new_date[2000,12,31]
    sunday_last.strftime("%U").should == "53"
    sunday_last.strftime("%W").should == "52"

    monday_first = @new_date[2001,1,1]
    monday_first.strftime("%U").should == "00"
    monday_first.strftime("%W").should == "01"
  end

  it "should be able to show the commercial week day" do
    @d2000_4_9.strftime("%u").should == "7"
    @d2000_4_10.strftime("%u").should == "1"
  end

  it "should be able to show the commercial week with %V" do
    @d2000_4_9.strftime("%V").should == "14"
    @d2000_4_10.strftime("%V").should == "15"
  end

  # %W: see %U

  it "should be able to show the week day" do
    @d2000_4_9.strftime("%w").should == "0"
    @d2000_4_10.strftime("%w").should == "1"
    @d2009_9_18.strftime('%w').should == '5'
  end

  it "should be able to show the year in YYYY format" do
    @d2000_4_9.strftime("%Y").should == "2000"
    @d2009_9_18.strftime('%Y').should == '2009'
  end

  it "should be able to show the year in YY format" do
    @d2000_4_9.strftime("%y").should == "00"
    @d2009_9_18.strftime('%y').should == '09'
  end

  it "should be able to show the timezone of the date with a : separator" do
    @d2000_4_9.strftime("%z").should == "+0000"
  end

  it "should be able to escape the % character" do
    @d2000_4_9.strftime("%%").should == "%"
  end

  # Combining conversion specifiers
  it "should be able to print the date in full" do
    @d2000_4_6.strftime("%c").should == "Thu Apr  6 00:00:00 2000"
    @d2000_4_6.strftime("%c").should == @d2000_4_6.strftime('%a %b %e %H:%M:%S %Y')
  end

  it "should be able to print the date with slashes" do
    @d2000_4_6.strftime("%D").should == "04/06/00"
    @d2000_4_6.strftime("%D").should == @d2000_4_6.strftime('%m/%d/%y')
  end

  it "should be able to print the date as YYYY-MM-DD" do
    @d2000_4_6.strftime("%F").should == "2000-04-06"
    @d2000_4_6.strftime("%F").should == @d2000_4_6.strftime('%Y-%m-%d')
  end

  it "should be able to show HH:MM for a date" do
    @d2000_4_6.strftime("%R").should == "00:00"
    @d2000_4_6.strftime("%R").should == @d2000_4_6.strftime('%H:%M')
  end

  it "should be able to show HH:MM:SS AM/PM for a date" do
    @d2000_4_6.strftime("%r").should == "12:00:00 AM"
    @d2000_4_6.strftime("%r").should == @d2000_4_6.strftime('%I:%M:%S %p')
  end

  it "should be able to show HH:MM:SS" do
    @d2000_4_6.strftime("%T").should == "00:00:00"
    @d2000_4_6.strftime("%T").should == @d2000_4_6.strftime('%H:%M:%S')
  end

  it "should be able to show HH:MM:SS" do
    @d2000_4_6.strftime("%X").should == "00:00:00"
    @d2000_4_6.strftime("%X").should == @d2000_4_6.strftime('%H:%M:%S')
  end

  it "should be able to show MM/DD/YY" do
    @d2000_4_6.strftime("%x").should == "04/06/00"
    @d2000_4_6.strftime("%x").should == @d2000_4_6.strftime('%m/%d/%y')
  end

  # GNU modificators
  it "supports GNU modificators" do
    time = @new_date[2001, 2, 3]

    time.strftime('%^h').should == 'FEB'
    time.strftime('%^_5h').should == '  FEB'
    time.strftime('%0^5h').should == '00FEB'
    time.strftime('%04m').should == '0002'
    time.strftime('%0-^5h').should == 'FEB'
    time.strftime('%_-^5h').should == 'FEB'
    time.strftime('%^ha').should == 'FEBa'

    time.strftime("%10h").should == '       Feb'
    time.strftime("%^10h").should == '       FEB'
    time.strftime("%_10h").should == '       Feb'
    time.strftime("%_010h").should == '0000000Feb'
    time.strftime("%0_10h").should == '       Feb'
    time.strftime("%0_-10h").should == 'Feb'
    time.strftime("%0-_10h").should == 'Feb'
  end

  it "supports the '-' modifier to drop leading zeros" do
    @new_date[2001,3,22].strftime("%-m/%-d/%-y").should == "3/22/1"
  end

  with_feature :encoding do
    it "passes the format string's encoding to the result string" do
      result = @new_date[2010,3,8].strftime("%d. März %Y")

      result.encoding.should == Encoding::UTF_8
      result.should == "08. März 2010"
    end
  end
end
