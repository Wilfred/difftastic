require File.expand_path('../../../spec_helper', __FILE__)

describe "FalseClass#^" do
  it "returns false if other is nil or false, otherwise true" do
    (false ^ false).should == false
    (false ^ true).should == true
    (false ^ nil).should == false
    (false ^ "").should == true
    (false ^ mock('x')).should == true
  end
end
