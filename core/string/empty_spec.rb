require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#empty?" do
  it "returns true if the string has a length of zero" do
    "hello".empty?.should == false
    " ".empty?.should == false
    "\x00".empty?.should == false
    "".empty?.should == true
    StringSpecs::MyString.new("").empty?.should == true
  end
end
