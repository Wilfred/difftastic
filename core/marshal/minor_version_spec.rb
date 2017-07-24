require File.expand_path('../../../spec_helper', __FILE__)

describe "Marshal::MINOR_VERSION" do
  it "is 8" do
    Marshal::MINOR_VERSION.should == 8
  end
end
