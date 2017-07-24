describe :time_gm, shared: true do
  it "creates a time based on given values, interpreted as UTC (GMT)" do
    Time.send(@method, 2000,"jan",1,20,15,1).inspect.should == "2000-01-01 20:15:01 UTC"
  end

  it "creates a time based on given C-style gmtime arguments, interpreted as UTC (GMT)" do
    time = Time.send(@method, 1, 15, 20, 1, 1, 2000, :ignored, :ignored, :ignored, :ignored)
    time.inspect.should == "2000-01-01 20:15:01 UTC"
  end

  it "interprets pre-Gregorian reform dates using Gregorian proleptic calendar" do
    Time.send(@method, 1582, 10, 4, 12).to_i.should == -12220200000 # 2299150j
  end

  it "interprets Julian-Gregorian gap dates using Gregorian proleptic calendar" do
    Time.send(@method, 1582, 10, 14, 12).to_i.should == -12219336000 # 2299160j
  end

  it "interprets post-Gregorian reform dates using Gregorian calendar" do
    Time.send(@method, 1582, 10, 15, 12).to_i.should == -12219249600 # 2299161j
  end
end
