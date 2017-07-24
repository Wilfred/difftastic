describe :time_gmt_offset, shared: true do
  it "returns the offset in seconds between the timezone of time and UTC" do
    with_timezone("AST", 3) do
      Time.new.send(@method).should == 10800
    end
  end

  platform_is_not :windows do
    it "returns the correct offset for US Eastern time zone around daylight savings time change" do
      # "2010-03-14 01:59:59 -0500" + 1 ==> "2010-03-14 03:00:00 -0400"
      with_timezone("EST5EDT") do
        t = Time.local(2010,3,14,1,59,59)
        t.send(@method).should == -5*60*60
        (t + 1).send(@method).should == -4*60*60
      end
    end

    it "returns the correct offset for Hawaii around daylight savings time change" do
      # "2010-03-14 01:59:59 -1000" + 1 ==> "2010-03-14 02:00:00 -1000"
      with_timezone("Pacific/Honolulu") do
        t = Time.local(2010,3,14,1,59,59)
        t.send(@method).should == -10*60*60
        (t + 1).send(@method).should == -10*60*60
      end
    end

    it "returns the correct offset for New Zealand around daylight savings time change" do
      # "2010-04-04 02:59:59 +1300" + 1 ==> "2010-04-04 02:00:00 +1200"
      with_timezone("Pacific/Auckland") do
        t = Time.local(2010,4,4,1,59,59) + (60 * 60)
        t.send(@method).should == 13*60*60
        (t + 1).send(@method).should == 12*60*60
      end
    end
  end

  it "returns offset as Rational" do
    Time.new(2010,4,4,1,59,59,7245).send(@method).should == 7245
    Time.new(2010,4,4,1,59,59,7245.5).send(@method).should == Rational(14491,2)
  end

  context 'given positive offset' do
    it 'returns a positive offset' do
      Time.new(2013,3,17,nil,nil,nil,"+03:00").send(@method).should == 10800
    end
  end

  context 'given negative offset' do
    it 'returns a negative offset' do
      Time.new(2013,3,17,nil,nil,nil,"-03:00").send(@method).should == -10800
    end
  end
end
