require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#eql?" do
  it "returns true if self is equal to another date" do
    Date.civil(2007, 10, 11).eql?(Date.civil(2007, 10, 11)).should be_true
  end

  it "returns false if self is not equal to another date" do
    Date.civil(2007, 10, 11).eql?(Date.civil(2007, 10, 12)).should be_false
  end
end
