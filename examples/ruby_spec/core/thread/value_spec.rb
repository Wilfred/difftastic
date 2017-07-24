require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread#value" do
  it "returns the result of the block" do
    Thread.new { 3 }.value.should == 3
  end

  it "re-raises an error for an uncaught exception" do
    t = Thread.new { raise "Hello" }
    lambda { t.value }.should raise_error(RuntimeError, "Hello")
  end

  it "is nil for a killed thread" do
    t = Thread.new { Thread.current.exit }
    t.value.should == nil
  end
end
