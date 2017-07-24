describe :date_civil, shared: true do
  it "creates a Date for -4712 by default" do
    # the #chomp calls are necessary because of RSpec
    d = Date.send(@method)
    d.year.should == -4712
    d.month.should == 1
    d.day.should == 1
    d.julian?.should == true
    d.jd.should == 0
  end

  it "creates a date with arguments" do
    d = Date.send(@method, 2000, 3, 5)
    d.year.should == 2000
    d.month.should == 3
    d.day.should == 5
    d.julian?.should == false
    d.jd.should == 2451609

    # Should also work with years far in the past and future

    d = Date.send(@method, -9000, 7, 5)
    d.year.should == -9000
    d.month.should == 7
    d.day.should == 5
    d.julian?.should == true
    d.jd.should == -1566006

    d = Date.send(@method, 9000, 10, 14)
    d.year.should == 9000
    d.month.should == 10
    d.day.should == 14
    d.julian?.should == false
    d.jd.should == 5008529

  end

  it "doesn't create dates for invalid arguments" do
    lambda { Date.send(@method, 2000, 13, 31) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2000, 12, 32) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2000,  2, 30) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 1900,  2, 29) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 2000,  2, 29) }.should_not raise_error(ArgumentError)

    lambda { Date.send(@method, 1582, 10, 14) }.should raise_error(ArgumentError)
    lambda { Date.send(@method, 1582, 10, 15) }.should_not raise_error(ArgumentError)

  end

  it "creates a Date for different calendar reform dates" do
    d1 = Date.send(@method, 1582, 10, 4)
    d1.succ.day.should == 15

    d2 = Date.send(@method, 1582, 10, 4, Date::ENGLAND)
    d2.succ.day.should == 5
  end
end
