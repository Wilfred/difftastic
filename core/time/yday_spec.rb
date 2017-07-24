require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#yday" do
  it "returns an integer representing the day of the year, 1..366" do
    with_timezone("UTC") do
      Time.at(9999999).yday.should == 116
    end
  end

  it 'returns the correct value for each day of each month' do
    mdays = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

    yday = 1
    mdays.each_with_index do |days, month|
      days.times do |day|
        Time.new(2014, month+1, day+1).yday.should == yday
        yday += 1
      end
    end
  end
end
