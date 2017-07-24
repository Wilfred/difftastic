require 'date'
require File.expand_path('../../../spec_helper', __FILE__)

describe "Date#===" do

  it "returns 0 when comparing two equal dates" do
    (Date.civil(2000, 04, 06) <=> Date.civil(2000, 04, 06)).should == 0
  end

  it "computes the difference between two dates" do
    (Date.civil(2000, 04, 05) <=> Date.civil(2000, 04, 06)).should == -1
    (Date.civil(2001, 04, 05) <=> Date.civil(2000, 04, 06)).should == 1
  end

  it "compares to another numeric" do
    (Date.civil(2000, 04, 05) <=> Date.civil(2000, 04, 06).jd).should == -1
    (Date.civil(2001, 04, 05) <=> Date.civil(2000, 04, 06).jd).should == 1
  end

end
