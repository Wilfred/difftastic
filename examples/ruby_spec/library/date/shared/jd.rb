describe :date_jd, shared: true do
  it "constructs a Date object if passed a Julian day" do
    Date.send(@method, 2454482).should == Date.civil(2008, 1, 16)
  end

  it "returns a Date object representing Julian day 0 (-4712-01-01) if no arguments passed" do
    Date.send(@method).should == Date.civil(-4712, 1, 1)
  end

  it "constructs a Date object if passed a negative number" do
    Date.send(@method, -1).should == Date.civil(-4713, 12, 31)
  end

end
