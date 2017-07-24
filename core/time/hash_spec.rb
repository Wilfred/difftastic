require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#hash" do
  it "returns a Fixnum" do
    Time.at(100).hash.should be_an_instance_of(Fixnum)
  end

  it "is stable" do
    Time.at(1234).hash.should == Time.at(1234).hash
  end
end
