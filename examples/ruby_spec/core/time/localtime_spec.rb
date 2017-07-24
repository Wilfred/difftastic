require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#localtime" do
  it "converts self to local time, modifying the receiver" do
    # Testing with America/Regina here because it doesn't have DST.
    with_timezone("CST", -6) do
      t = Time.gm(2007, 1, 9, 12, 0, 0)
      t.localtime
      t.should == Time.local(2007, 1, 9, 6, 0, 0)
    end
  end

  it "returns self" do
    t = Time.gm(2007, 1, 9, 12, 0, 0)
    t.localtime.should equal(t)
  end

  it "converts time to the UTC offset specified as an Integer number of seconds" do
    t = Time.gm(2007, 1, 9, 12, 0, 0)
    t.localtime(3630)
    t.should == Time.new(2007, 1, 9, 13, 0, 30, 3630)
    t.utc_offset.should == 3630
  end

  describe "on a frozen time" do
    it "does not raise an error if already in the right time zone" do
      time = Time.now
      time.freeze
      time.localtime.should equal(time)
    end

    it "raises a RuntimeError if the time has a different time zone" do
      time = Time.gm(2007, 1, 9, 12, 0, 0)
      time.freeze
      lambda { time.localtime }.should raise_error(RuntimeError)
    end
  end

  describe "with an argument that responds to #to_int" do
    it "coerces using #to_int" do
      o = mock('integer')
      o.should_receive(:to_int).and_return(3630)
      t = Time.gm(2007, 1, 9, 12, 0, 0)
      t.localtime(o)
      t.should == Time.new(2007, 1, 9, 13, 0, 30, 3630)
      t.utc_offset.should == 3630
    end
  end

  it "returns a Time with a UTC offset of the specified number of Rational seconds" do
    t = Time.gm(2007, 1, 9, 12, 0, 0)
    t.localtime(Rational(7201, 2))
    t.should == Time.new(2007, 1, 9, 13, 0, Rational(1, 2), Rational(7201, 2))
    t.utc_offset.should eql(Rational(7201, 2))
  end

  describe "with an argument that responds to #to_r" do
    it "coerces using #to_r" do
      o = mock_numeric('rational')
      o.should_receive(:to_r).and_return(Rational(7201, 2))
      t = Time.gm(2007, 1, 9, 12, 0, 0)
      t.localtime(o)
      t.should == Time.new(2007, 1, 9, 13, 0, Rational(1, 2), Rational(7201, 2))
      t.utc_offset.should eql(Rational(7201, 2))
    end
  end

  it "returns a Time with a UTC offset specified as +HH:MM" do
    t = Time.gm(2007, 1, 9, 12, 0, 0)
    t.localtime("+01:00")
    t.should == Time.new(2007, 1, 9, 13, 0, 0, 3600)
    t.utc_offset.should == 3600
  end

  it "returns a Time with a UTC offset specified as -HH:MM" do
    t = Time.gm(2007, 1, 9, 12, 0, 0)
    t.localtime("-01:00")
    t.should == Time.new(2007, 1, 9, 11, 0, 0, -3600)
    t.utc_offset.should == -3600
  end

  platform_is_not :windows do
    it "changes the timezone according to the set one" do
      t = Time.new(2005, 2, 27, 22, 50, 0, -3600)
      t.utc_offset.should == -3600

      with_timezone("America/New_York") do
        t.localtime
      end

      t.utc_offset.should == -18000
    end
  end

  describe "with an argument that responds to #to_str" do
    it "coerces using #to_str" do
      o = mock('string')
      o.should_receive(:to_str).and_return("+01:00")
      t = Time.gm(2007, 1, 9, 12, 0, 0)
      t.localtime(o)
      t.should == Time.new(2007, 1, 9, 13, 0, 0, 3600)
      t.utc_offset.should == 3600
    end
  end

  it "raises ArgumentError if the String argument is not of the form (+|-)HH:MM" do
    t = Time.now
    lambda { t.localtime("3600") }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the String argument is not in an ASCII-compatible encoding" do
    t = Time.now
    lambda { t.localtime("-01:00".encode("UTF-16LE")) }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the argument represents a value less than or equal to -86400 seconds" do
    t = Time.new
    t.localtime(-86400 + 1).utc_offset.should == (-86400 + 1)
    lambda { t.localtime(-86400) }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the argument represents a value greater than or equal to 86400 seconds" do
    t = Time.new
    t.localtime(86400 - 1).utc_offset.should == (86400 - 1)
    lambda { t.localtime(86400) }.should raise_error(ArgumentError)
  end
end
