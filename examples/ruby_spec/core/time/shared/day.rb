describe :time_day, shared: true do
  it "returns the day of the month (1..n) for a local Time" do
    with_timezone("CET", 1) do
      Time.local(1970, 1, 1).send(@method).should == 1
    end
  end

  it "returns the day of the month for a UTC Time" do
    Time.utc(1970, 1, 1).send(@method).should == 1
  end

  it "returns the day of the month for a Time with a fixed offset" do
    Time.new(2012, 1, 1, 0, 0, 0, -3600).send(@method).should == 1
  end
end
