require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#hash" do
  it "returns the same value for equal dates" do
    Date.civil(2004, 7, 12).hash.should == Date.civil(2004, 7, 12).hash
  end
end
