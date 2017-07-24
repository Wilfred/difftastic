require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread.pass" do
  it "returns nil" do
    Thread.pass.should == nil
  end
end
