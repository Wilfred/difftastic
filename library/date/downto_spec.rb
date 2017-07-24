require 'date'
require File.expand_path('../../../spec_helper', __FILE__)

describe "Date#downto" do

  it "creates earlier dates when passed a negative step" do
    ds    = Date.civil(2000, 4, 14)
    de    = Date.civil(2000, 3, 29)
    count = 0
    ds.step(de, -1) do |d|
      d.should <= ds
      d.should >= de
      count += 1
    end
    count.should == 17
  end

end
