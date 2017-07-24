require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#<=>" do
  it "returns 0 when two dates are equal" do
    (Date.civil(2000, 04, 06) <=> Date.civil(2000, 04, 06)).should == 0
  end

  it "returns -1 when self is less than another date" do
    (Date.civil(2000, 04, 05) <=> Date.civil(2000, 04, 06)).should == -1
  end

  it "returns -1 when self is less than a Numeric" do
    (Date.civil(2000, 04, 05) <=> Date.civil(2000, 04, 06).jd).should == -1
  end

  it "returns 1 when self is greater than another date" do
    (Date.civil(2001, 04, 05) <=> Date.civil(2000, 04, 06)).should == 1
  end

  it "returns 1 when self is greater than a Numeric" do
    (Date.civil(2001, 04, 05) <=> Date.civil(2000, 04, 06).jd).should == 1
  end
end
