require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#to_a" do
  it "returns an empty array" do
    nil.to_a.should == []
  end
end
