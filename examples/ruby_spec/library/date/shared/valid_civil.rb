describe :date_valid_civil?, shared: true do

  # reference:
  # October 1582 (the Gregorian calendar, Civil Date)
  #   S   M  Tu   W  Th   F   S
  #       1   2   3   4  15  16
  #  17  18  19  20  21  22  23
  #  24  25  26  27  28  29  30
  #  31

  it "returns true if it is a valid civil date" do
    Date.send(@method, 1582, 10, 15).should be_true
    Date.send(@method, 1582, 10, 14, Date::ENGLAND).should be_true
  end

  it "returns false if it is not a valid civil date" do
    Date.send(@method, 1582, 10, 14).should == false
  end

  it "handles negative months and days" do
    # October 1582 (the Gregorian calendar, Civil Date)
    #     S   M  Tu   W  Th   F   S
    #       -21 -20 -19 -18 -17 -16
    #   -15 -14 -13 -12 -11 -10  -9
    #    -8  -7  -6  -5  -4  -3  -2
    #    -1
    Date.send(@method, 1582, -3, -22).should be_false
    Date.send(@method, 1582, -3, -21).should be_true
    Date.send(@method, 1582, -3, -18).should be_true
    Date.send(@method, 1582, -3, -17).should be_true

    Date.send(@method, 2007, -11, -10).should be_true
    Date.send(@method, 2008, -11, -10).should be_true
  end

end
