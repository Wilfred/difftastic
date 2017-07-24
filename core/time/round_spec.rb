require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#round" do
  before do
    @time = Time.utc(2010, 3, 30, 5, 43, "25.123456789".to_r)
    @subclass = Class.new(Time).now
  end

  it "defaults to rounding to 0 places" do
    @time.round.should == Time.utc(2010, 3, 30, 5, 43, 25.to_r)
  end

  it "rounds to 0 decimal places with an explicit argument" do
    @time.round(0).should == Time.utc(2010, 3, 30, 5, 43, 25.to_r)
  end

  it "rounds to 7 decimal places with an explicit argument" do
    @time.round(7).should == Time.utc(2010, 3, 30, 5, 43, "25.1234568".to_r)
  end

  it "returns an instance of Time, even if #round is called on a subclass" do
    @subclass.round.should be_an_instance_of(Time)
  end

  it "copies own timezone to the returning value" do
    @time.zone.should == @time.round.zone

    with_timezone "JST-9" do
      time = Time.at 0, 1
      time.zone.should == time.round.zone
    end
  end
end
