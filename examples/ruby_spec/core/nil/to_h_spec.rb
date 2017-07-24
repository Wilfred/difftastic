require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#to_h" do
  it "returns an empty hash" do
    nil.to_h.should == {}
    nil.to_h.default.should == nil
  end
end
