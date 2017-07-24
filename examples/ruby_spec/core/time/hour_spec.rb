require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#hour" do
  it "returns the hour of the day (0..23) for a local Time" do
    with_timezone("CET", 1) do
      Time.local(1970, 1, 1, 1).hour.should == 1
    end
  end

  it "returns the hour of the day for a UTC Time" do
    Time.utc(1970, 1, 1, 0).hour.should == 0
  end

  it "returns the hour of the day for a Time with a fixed offset" do
    Time.new(2012, 1, 1, 0, 0, 0, -3600).hour.should == 0
  end
end
