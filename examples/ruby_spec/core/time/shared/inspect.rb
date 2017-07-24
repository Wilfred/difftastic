# -*- encoding: us-ascii -*-

describe :inspect, shared: true do
  it "formats the local time following the pattern 'yyyy-MM-dd HH:mm:ss Z'" do
    with_timezone("PST", +1) do
      Time.local(2000, 1, 1, 20, 15, 1).send(@method).should == "2000-01-01 20:15:01 +0100"
    end
  end

  it "formats the UTC time following the pattern 'yyyy-MM-dd HH:mm:ss UTC'" do
    Time.utc(2000, 1, 1, 20, 15, 1).send(@method).should == "2000-01-01 20:15:01 UTC"
  end

  it "formats the fixed offset time following the pattern 'yyyy-MM-dd HH:mm:ss +/-HHMM'" do
    Time.new(2000, 1, 1, 20, 15, 01, 3600).send(@method).should == "2000-01-01 20:15:01 +0100"
  end

  with_feature :encoding do
    it "returns a US-ASCII encoded string" do
      Time.now.send(@method).encoding.should equal(Encoding::US_ASCII)
    end
  end
end
