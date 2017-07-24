require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Exception#set_backtrace" do
  it "accepts an Array of Strings" do
    err = RuntimeError.new
    err.set_backtrace ["unhappy"]
    err.backtrace.should == ["unhappy"]
  end

  it "allows the user to set the backtrace from a rescued exception" do
    bt  = ExceptionSpecs::Backtrace.backtrace
    err = RuntimeError.new

    err.set_backtrace bt
    err.backtrace.should == bt
  end

  it "accepts an empty Array" do
    err = RuntimeError.new
    err.set_backtrace []
    err.backtrace.should == []
  end

  it "accepts a String" do
    err = RuntimeError.new
    err.set_backtrace "unhappy"
    err.backtrace.should == ["unhappy"]
  end

  it "accepts nil" do
    err = RuntimeError.new
    err.set_backtrace nil
    err.backtrace.should be_nil
  end

  it "raises a TypeError when passed a Symbol" do
    err = RuntimeError.new
    lambda { err.set_backtrace :unhappy }.should raise_error(TypeError)
  end

  it "raises a TypeError when the Array contains a Symbol" do
    err = RuntimeError.new
    lambda { err.set_backtrace ["String", :unhappy] }.should raise_error(TypeError)
  end

  it "raises a TypeError when the array contains nil" do
    err = Exception.new
    lambda { err.set_backtrace ["String", nil] }.should raise_error(TypeError)
  end

  it "raises a TypeError when the argument is a nested array" do
    err = Exception.new
    lambda { err.set_backtrace ["String", ["String"]] }.should raise_error(TypeError)
  end
end
