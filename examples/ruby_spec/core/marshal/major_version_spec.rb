require File.expand_path('../../../spec_helper', __FILE__)

describe "Marshal::MAJOR_VERSION" do
  it "is 4" do
    Marshal::MAJOR_VERSION.should == 4
  end
end
