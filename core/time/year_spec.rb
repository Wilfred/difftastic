require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#year" do
  it "returns the four digit year for a local Time as an Integer" do
    with_timezone("CET", 1) do
      Time.local(1970).year.should == 1970
    end
  end

  it "returns the four digit year for a UTC Time as an Integer" do
    Time.utc(1970).year.should == 1970
  end

  it "returns the four digit year for a Time with a fixed offset" do
    Time.new(2012, 1, 1, 0, 0, 0, -3600).year.should == 2012
  end
end
