require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#+" do
  it "adds the number of days to a Date" do
    d = Date.civil(2007,2,27) + 10
    d.should == Date.civil(2007, 3, 9)
  end

  it "adds a negative number of days to a Date" do
    d = Date.civil(2007,2,27).+(-10)
    d.should == Date.civil(2007, 2, 17)
  end

  it "raises a TypeError when passed a Symbol" do
    lambda { Date.civil(2007,2,27) + :hello }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { Date.civil(2007,2,27) + "hello" }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a Date" do
    lambda { Date.civil(2007,2,27) + Date.new }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed an Object" do
    lambda { Date.civil(2007,2,27) + Object.new }.should raise_error(TypeError)
  end
end
