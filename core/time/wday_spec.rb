require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#wday" do
  it "returns an integer representing the day of the week, 0..6, with Sunday being 0" do
    with_timezone("GMT", 0) do
      Time.at(0).wday.should == 4
    end
  end
end
