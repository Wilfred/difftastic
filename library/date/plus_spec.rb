require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#+" do
  before :all do
    @date = Date.civil(2000, 1, 1)
  end

  it "returns a new Date object that is n days later than the current one" do
    (@date + 31).should == Date.civil(2000, 2, 1)
  end

  it "accepts a negative argument and returns a new Date that is earlier than the current one" do
    (@date + -1).should == Date.civil(1999, 12, 31)
  end

  it "raises TypeError if argument is not Numeric" do
    lambda { Date.today + Date.today }.should raise_error(TypeError)
  end
end
