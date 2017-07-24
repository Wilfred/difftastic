describe :date_parse, shared: true do
  it "can parse a mmm-YYYY string into a Date object" do
    d = Date.parse("feb#{@sep}2008")
    d.year.should == 2008
    d.month.should == 2
    d.day.should == 1
  end

  it "can parse a 'DD mmm YYYY' string into a Date object" do
    d = Date.parse("23#{@sep}feb#{@sep}2008")
    d.year.should == 2008
    d.month.should == 2
    d.day.should == 23
  end

  it "can parse a 'mmm DD YYYY' string into a Date object" do
    d = Date.parse("23#{@sep}feb#{@sep}2008")
    d.year.should == 2008
    d.month.should == 2
    d.day.should == 23
  end

  it "can parse a 'YYYY mmm DD' string into a Date object" do
    d = Date.parse("2008#{@sep}feb#{@sep}23")
    d.year.should == 2008
    d.month.should == 2
    d.day.should == 23
  end

  it "can parse a month name and day into a Date object" do
    d = Date.parse("november#{@sep}5th")
    d.should == Date.civil(Date.today.year, 11, 5)
  end

  it "can parse a month name, day and year into a Date object" do
    d = Date.parse("november#{@sep}5th#{@sep}2005")
    d.should == Date.civil(2005, 11, 5)
  end

  it "can parse a year, month name and day into a Date object" do
    d = Date.parse("2005#{@sep}november#{@sep}5th")
    d.should == Date.civil(2005, 11, 5)
  end

  it "can parse a year, day and month name into a Date object" do
    d = Date.parse("5th#{@sep}november#{@sep}2005")
    d.should == Date.civil(2005, 11, 5)
  end

  it "can handle negative year numbers" do
    d = Date.parse("5th#{@sep}november#{@sep}-2005")
    d.should == Date.civil(-2005, 11, 5)
  end
end
