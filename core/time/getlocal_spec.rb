require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#getlocal" do
  it "returns a new time which is the local representation of time" do
    # Testing with America/Regina here because it doesn't have DST.
    with_timezone("CST", -6) do
      t = Time.gm(2007, 1, 9, 12, 0, 0)
      t.localtime.should == Time.local(2007, 1, 9, 6, 0, 0)
    end
  end

  it "returns a Time with UTC offset specified as an Integer number of seconds" do
    t = Time.gm(2007, 1, 9, 12, 0, 0).getlocal(3630)
    t.should == Time.new(2007, 1, 9, 13, 0, 30, 3630)
    t.utc_offset.should == 3630
  end

  platform_is_not :windows do
    it "returns a new time with the correct utc_offset according to the set timezone" do
      t = Time.new(2005, 2, 27, 22, 50, 0, -3600)
      t.utc_offset.should == -3600

      with_timezone("America/New_York") do
        t.getlocal.utc_offset.should == -18000
      end
    end
  end

  describe "with an argument that responds to #to_int" do
    it "coerces using #to_int" do
      o = mock('integer')
      o.should_receive(:to_int).and_return(3630)
      t = Time.gm(2007, 1, 9, 12, 0, 0).getlocal(o)
      t.should == Time.new(2007, 1, 9, 13, 0, 30, 3630)
      t.utc_offset.should == 3630
    end
  end

  it "returns a Time with a UTC offset of the specified number of Rational seconds" do
    t = Time.gm(2007, 1, 9, 12, 0, 0).getlocal(Rational(7201, 2))
    t.should == Time.new(2007, 1, 9, 13, 0, Rational(1, 2), Rational(7201, 2))
    t.utc_offset.should eql(Rational(7201, 2))
  end

  describe "with an argument that responds to #to_r" do
    it "coerces using #to_r" do
      o = mock_numeric('rational')
      o.should_receive(:to_r).and_return(Rational(7201, 2))
      t = Time.gm(2007, 1, 9, 12, 0, 0).getlocal(o)
      t.should == Time.new(2007, 1, 9, 13, 0, Rational(1, 2), Rational(7201, 2))
      t.utc_offset.should eql(Rational(7201, 2))
    end
  end

  it "returns a Time with a UTC offset specified as +HH:MM" do
    t = Time.gm(2007, 1, 9, 12, 0, 0).getlocal("+01:00")
    t.should == Time.new(2007, 1, 9, 13, 0, 0, 3600)
    t.utc_offset.should == 3600
  end

  it "returns a Time with a UTC offset specified as -HH:MM" do
    t = Time.gm(2007, 1, 9, 12, 0, 0).getlocal("-01:00")
    t.should == Time.new(2007, 1, 9, 11, 0, 0, -3600)
    t.utc_offset.should == -3600
  end

  describe "with an argument that responds to #to_str" do
    it "coerces using #to_str" do
      o = mock('string')
      o.should_receive(:to_str).and_return("+01:00")
      t = Time.gm(2007, 1, 9, 12, 0, 0).getlocal(o)
      t.should == Time.new(2007, 1, 9, 13, 0, 0, 3600)
      t.utc_offset.should == 3600
    end
  end

  it "raises ArgumentError if the String argument is not of the form (+|-)HH:MM" do
    t = Time.now
    lambda { t.getlocal("3600") }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the String argument is not in an ASCII-compatible encoding" do
    t = Time.now
    lambda { t.getlocal("-01:00".encode("UTF-16LE")) }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the argument represents a value less than or equal to -86400 seconds" do
    t = Time.new
    t.getlocal(-86400 + 1).utc_offset.should == (-86400 + 1)
    lambda { t.getlocal(-86400) }.should raise_error(ArgumentError)
  end

  it "raises ArgumentError if the argument represents a value greater than or equal to 86400 seconds" do
    t = Time.new
    t.getlocal(86400 - 1).utc_offset.should == (86400 - 1)
    lambda { t.getlocal(86400) }.should raise_error(ArgumentError)
  end
end
