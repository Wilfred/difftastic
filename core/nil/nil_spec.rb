require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#nil?" do
  it "returns true" do
    nil.nil?.should == true
  end
end
