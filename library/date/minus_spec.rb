require 'date'
require File.expand_path('../../../spec_helper', __FILE__)

describe "Date#-" do

  it "substracts a number of days from a Date" do
    d = Date.civil(2007, 5 ,2) - 13
    d.should == Date.civil(2007, 4, 19)
  end

  it "substracts a negative number of days from a Date" do
    d = Date.civil(2007, 4, 19).-(-13)
    d.should == Date.civil(2007, 5 ,2)
  end

  it "computes the difference between two dates" do
    (Date.civil(2007,2,27) - Date.civil(2007,2,27)).should == 0
    (Date.civil(2007,2,27) - Date.civil(2007,2,26)).should == 1
    (Date.civil(2006,2,27) - Date.civil(2007,2,27)).should == -365
    (Date.civil(2008,2,27) - Date.civil(2007,2,27)).should == 365

  end

  it "raises an error for non Numeric arguments" do
    lambda { Date.civil(2007,2,27) - :hello }.should raise_error(TypeError)
    lambda { Date.civil(2007,2,27) - "hello" }.should raise_error(TypeError)
    lambda { Date.civil(2007,2,27) - Object.new }.should raise_error(TypeError)
  end

end
