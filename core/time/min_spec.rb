require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#min" do
  it "returns the minute of the hour (0..59) for a local Time" do
    with_timezone("CET", 1) do
      Time.local(1970, 1, 1, 0, 0).min.should == 0
    end
  end

  it "returns the minute of the hour for a UTC Time" do
    Time.utc(1970, 1, 1, 0, 0).min.should == 0
  end

  it "returns the minute of the hour for a Time with a fixed offset" do
    Time.new(2012, 1, 1, 0, 0, 0, -3600).min.should == 0
  end
end
