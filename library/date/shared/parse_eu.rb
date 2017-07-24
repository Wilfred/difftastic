describe :date_parse_eu, shared: true do
  # The - separator let's it work like European format, so it as a different spec
  it "can parse a YYYY-MM-DD string into a Date object" do
    d = Date.parse("2007#{@sep}10#{@sep}01")
    d.year.should == 2007
    d.month.should == 10
    d.day.should == 1
  end

  it "can parse a MM-DD-YYYY string into a Date object" do
    d = Date.parse("10#{@sep}01#{@sep}2007")
    d.year.should == 2007
    d.month.should == 1
    d.day.should == 10
  end

  it "can parse a MM-DD-YY string into a Date object" do
    d = Date.parse("10#{@sep}01#{@sep}07")
    d.year.should == 2010
    d.month.should == 1
    d.day.should == 7
  end

  it "can parse a MM-DD-YY string into a Date object NOT using the year digits as 20XX" do
    d = Date.parse("10#{@sep}01#{@sep}07", false)
    d.year.should == 10
    d.month.should == 1
    d.day.should == 7
  end

  it "can parse a MM-DD-YY string into a Date object using the year digits as 20XX" do
    d = Date.parse("10#{@sep}01#{@sep}07", true)
    d.year.should == 2010
    d.month.should == 1
    d.day.should == 7
  end
end
