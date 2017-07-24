require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "Date#upto" do
  it "returns future dates for the default step value" do
    ds    = Date.civil(2008, 10, 11)
    de    = Date.civil(2008,  9, 29)
    count = 0
    de.upto(ds) do |d|
      d.should <= ds
      d.should >= de
      count += 1
    end
    count.should == 13
  end
end
