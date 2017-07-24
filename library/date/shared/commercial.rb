describe :date_commercial, shared: true do
  it "creates a Date for Julian Day Number day 0 by default" do
    d = Date.send(@method)
    d.year.should == -4712
    d.month.should == 1
    d.day.should == 1
  end

  it "creates a Date for the monday in the year and week given" do
    d = Date.send(@method, 2000, 1)
    d.year.should == 2000
    d.month.should == 1
    d.day.should == 3
    d.cwday.should == 1
  end

  it "creates a Date for the correct day given the year, week and day number" do
    d = Date.send(@method, 2004, 1, 1)
    d.year.should == 2003
    d.month.should == 12
    d.day.should == 29
    d.cwday.should == 1
    d.cweek.should == 1
    d.cwyear.should == 2004
  end

  it "creates only Date objects for valid weeks" do
    lambda { Date.send(@method, 2004, 53, 1) }.should_not raise_error(ArgumentError)
    lambda { Date.send(@method, 2004, 53, 0) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2004, 53, 8) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2004, 54, 1) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2004,  0, 1) }.should raise_error(ArgumentError)

    lambda { Date.send(@method, 2003, 52, 1) }.should_not raise_error(ArgumentError)
    lambda { Date.send(@method, 2003, 53, 1) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2003, 52, 0) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2003, 52, 8) }.should raise_error(ArgumentError)
  end
end
