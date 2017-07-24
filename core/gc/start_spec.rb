require File.expand_path('../../../spec_helper', __FILE__)

describe "GC.start" do
  it "always returns nil" do
    GC.start.should == nil
    GC.start.should == nil
  end
end
