require File.expand_path('../../../spec_helper', __FILE__)

describe "Range#exclude_end?" do
  it "returns false if the range does not exclude the end value" do
    (-2..2).exclude_end?.should == false
    ('A'..'B').exclude_end?.should == false
    (0.5..2.4).exclude_end?.should == false
    (0xfffd..0xffff).exclude_end?.should == false
    Range.new(0, 1).exclude_end?.should == false
  end

  it "returns true if the range excludes the end value" do
    (0...5).exclude_end?.should == true
    ('A'...'B').exclude_end?.should == true
    (0.5...2.4).exclude_end?.should == true
    (0xfffd...0xffff).exclude_end?.should == true
    Range.new(0, 1, true).exclude_end?.should == true
  end
end
