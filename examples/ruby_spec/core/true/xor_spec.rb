require File.expand_path('../../../spec_helper', __FILE__)

describe "TrueClass#^" do
  it "returns true if other is nil or false, otherwise false" do
    (true ^ true).should == false
    (true ^ false).should == true
    (true ^ nil).should == true
    (true ^ "").should == false
    (true ^ mock('x')).should == false
  end
end
