describe :date_new_bang, shared: true do

  it "returns a new Date object set to Astronomical Julian Day 0 if no arguments passed" do
    d = Date.send(@method)
    d.ajd.should == 0
  end

  it "accepts astronomical julian day number, offset as a fraction of a day and returns a new Date object" do
    d = Date.send(@method, 10, 0.5)
    d.ajd.should == 10
    d.jd.should == 11
  end

end
