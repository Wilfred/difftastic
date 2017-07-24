require File.expand_path('../../../spec_helper', __FILE__)

describe "TrueClass#&" do
  it "returns false if other is nil or false, otherwise true" do
    (true & true).should == true
    (true & false).should == false
    (true & nil).should == false
    (true & "").should == true
    (true & mock('x')).should == true
  end
end
