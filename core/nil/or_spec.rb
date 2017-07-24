require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#|" do
  it "returns false if other is nil or false, otherwise true" do
    (nil | nil).should == false
    (nil | true).should == true
    (nil | false).should == false
    (nil | "").should == true
    (nil | mock('x')).should == true
  end
end
