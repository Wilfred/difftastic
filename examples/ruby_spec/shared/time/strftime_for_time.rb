# Shared for Time and DateTime, testing only time components (hours, minutes, seconds and smaller)

describe :strftime_time, shared: true do
  before :all do
    @time = @new_time[2001, 2, 3, 4, 5, 6]
  end

  it "formats time according to the directives in the given format string" do
    @new_time[1970, 1, 1].strftime("There is %M minutes in epoch").should == "There is 00 minutes in epoch"
  end

  # Per conversion specifier, not combining
  it "returns the 24-based hour with %H" do
    time = @new_time[2009, 9, 18, 18, 0, 0]
    time.strftime('%H').should == '18'
  end

  it "returns the 12-based hour with %I" do
    time = @new_time[2009, 9, 18, 18, 0, 0]
    time.strftime('%I').should == '06'
  end

  it "supports 24-hr formatting with %l" do
    time = @new_time[2004, 8, 26, 22, 38, 3]
    time.strftime("%k").should == "22"
    morning_time = @new_time[2004, 8, 26, 6, 38, 3]
    morning_time.strftime("%k").should == " 6"
  end

  describe "with %L" do
    it "formats the milliseconds of the second" do
      @new_time[2009, 1, 1, 0, 0, Rational(100, 1000)].strftime("%L").should == "100"
      @new_time[2009, 1, 1, 0, 0, Rational(10, 1000)].strftime("%L").should == "010"
      @new_time[2009, 1, 1, 0, 0, Rational(1, 1000)].strftime("%L").should == "001"
      @new_time[2009, 1, 1, 0, 0, Rational(1, 10000)].strftime("%L").should == "000"
    end
  end

  it "supports 12-hr formatting with %l" do
    time = @new_time[2004, 8, 26, 22, 38, 3]
    time.strftime('%l').should == '10'
    morning_time = @new_time[2004, 8, 26, 6, 38, 3]
    morning_time.strftime('%l').should == ' 6'
  end

  it "returns the minute with %M" do
    time = @new_time[2009, 9, 18, 12, 6, 0]
    time.strftime('%M').should == '06'
  end

  describe "with %N" do
    it "formats the nanoseconds of the second with %N" do
      @new_time[2000, 4, 6, 0, 0, Rational(1234560, 1_000_000_000)].strftime("%N").should == "001234560"
    end

    it "formats the milliseconds of the second with %3N" do
      @new_time[2000, 4, 6, 0, 0, Rational(50, 1000)].strftime("%3N").should == "050"
    end

    it "formats the microseconds of the second with %6N" do
      @new_time[2000, 4, 6, 0, 0, Rational(42, 1000)].strftime("%6N").should == "042000"
    end

    it "formats the nanoseconds of the second with %9N" do
      @new_time[2000, 4, 6, 0, 0, Rational(1234, 1_000_000)].strftime("%9N").should == "001234000"
    end

    it "formats the picoseconds of the second with %12N" do
      @new_time[2000, 4, 6, 0, 0, Rational(999999999999, 1000_000_000_000)].strftime("%12N").should == "999999999999"
    end
  end

  it "supports am/pm formatting with %P" do
    time = @new_time[2004, 8, 26, 22, 38, 3]
    time.strftime('%P').should == 'pm'
    time = @new_time[2004, 8, 26, 11, 38, 3]
    time.strftime('%P').should == 'am'
  end

  it "supports AM/PM formatting with %p" do
    time = @new_time[2004, 8, 26, 22, 38, 3]
    time.strftime('%p').should == 'PM'
    time = @new_time[2004, 8, 26, 11, 38, 3]
    time.strftime('%p').should == 'AM'
  end

  it "returns the second with %S" do
    time = @new_time[2009, 9, 18, 12, 0, 6]
    time.strftime('%S').should == '06'
  end

  it "should be able to show the number of seconds since the unix epoch" do
    @new_time_in_zone["GMT", 0, 2005].strftime("%s").should == "1104537600"
  end

  it "returns the timezone with %Z" do
    time = @new_time[2009, 9, 18, 12, 0, 0]
    zone = time.zone
    time.strftime("%Z").should == zone
  end

  describe "with %z" do
    it "formats a UTC time offset as '+0000'" do
      @new_time_in_zone["GMT", 0, 2005].strftime("%z").should == "+0000"
    end

    it "formats a local time with positive UTC offset as '+HHMM'" do
      @new_time_in_zone["CET", 1, 2005].strftime("%z").should == "+0100"
    end

    it "formats a local time with negative UTC offset as '-HHMM'" do
      @new_time_in_zone["PST", -8, 2005].strftime("%z").should == "-0800"
    end

    it "formats a time with fixed positive offset as '+HHMM'" do
      @new_time_with_offset[2012, 1, 1, 0, 0, 0, 3660].strftime("%z").should == "+0101"
    end

    it "formats a time with fixed negative offset as '-HHMM'" do
      @new_time_with_offset[2012, 1, 1, 0, 0, 0, -3660].strftime("%z").should == "-0101"
    end

    it "formats a time with fixed offset as '+/-HH:MM' with ':' specifier" do
      @new_time_with_offset[2012, 1, 1, 0, 0, 0, 3660].strftime("%:z").should == "+01:01"
    end

    it "formats a time with fixed offset as '+/-HH:MM:SS' with '::' specifier" do
      @new_time_with_offset[2012, 1, 1, 0, 0, 0, 3665].strftime("%::z").should == "+01:01:05"
    end
  end

  # Combining conversion specifiers
  it "should be able to print the time in full" do
    @time.strftime("%c").should == "Sat Feb  3 04:05:06 2001"
    @time.strftime("%c").should == @time.strftime('%a %b %e %H:%M:%S %Y')
  end

  it "should be able to show HH:MM" do
    @time.strftime("%R").should == "04:05"
    @time.strftime("%R").should == @time.strftime('%H:%M')
  end

  it "should be able to show HH:MM:SS AM/PM" do
    @time.strftime("%r").should == "04:05:06 AM"
    @time.strftime("%r").should == @time.strftime('%I:%M:%S %p')
  end

  it "supports HH:MM:SS formatting with %T" do
    @time.strftime('%T').should == '04:05:06'
    @time.strftime('%T').should == @time.strftime('%H:%M:%S')
  end

  it "supports HH:MM:SS formatting with %X" do
    @time.strftime('%X').should == '04:05:06'
    @time.strftime('%X').should == @time.strftime('%H:%M:%S')
  end

  # GNU modificators
  it "supports the '-' modifier to drop leading zeros" do
    time = @new_time[2001,1,1,14,01,42]
    time.strftime("%-m/%-d/%-y %-I:%-M %p").should == "1/1/1 2:1 PM"

    time = @new_time[2010,10,10,12,10,42]
    time.strftime("%-m/%-d/%-y %-I:%-M %p").should == "10/10/10 12:10 PM"
  end

  it "supports the '-' modifier for padded format directives" do
    time = @new_time[2010, 8, 8, 8, 10, 42]
    time.strftime("%-e").should == "8"
    time.strftime("%-k%p").should == "8AM"
    time.strftime("%-l%p").should == "8AM"
  end
end
