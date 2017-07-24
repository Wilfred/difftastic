require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp#casefold?" do
  it "returns the value of the case-insensitive flag" do
    /abc/i.casefold?.should == true
    /xyz/.casefold?.should == false
  end
end
