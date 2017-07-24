require File.expand_path('../../../spec_helper', __FILE__)

describe "TrueClass#|" do
  it "returns true" do
    (true | true).should == true
    (true | false).should == true
    (true | nil).should == true
    (true | "").should == true
    (true | mock('x')).should == true
  end
end
