require 'date'
require File.expand_path('../../../spec_helper', __FILE__)

describe "Date#<<" do

  it "substracts a number of months from a date" do
    d = Date.civil(2007,2,27) << 10
    d.should == Date.civil(2006, 4, 27)
  end

  it "returns the last day of a month if the day doesn't exist" do
    d = Date.civil(2008,3,31) << 1
    d.should == Date.civil(2008, 2, 29)
  end

  ruby_version_is ""..."2.3" do
    it "raises an error on non numeric parameters" do
      lambda { Date.civil(2007,2,27) << :hello }.should raise_error
      lambda { Date.civil(2007,2,27) << "hello" }.should raise_error
      lambda { Date.civil(2007,2,27) << Date.new }.should raise_error
      lambda { Date.civil(2007,2,27) << Object.new }.should raise_error
    end
  end

  ruby_version_is "2.3" do
    it "raises an error on non numeric parameters" do
      lambda { Date.civil(2007,2,27) << :hello }.should raise_error(TypeError)
      lambda { Date.civil(2007,2,27) << "hello" }.should raise_error(TypeError)
      lambda { Date.civil(2007,2,27) << Date.new }.should raise_error(TypeError)
      lambda { Date.civil(2007,2,27) << Object.new }.should raise_error(TypeError)
    end
  end

end
