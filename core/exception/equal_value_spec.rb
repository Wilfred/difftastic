require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Exception#==" do
  it "returns true if both exceptions are the same object" do
    e = ArgumentError.new
    e.should == e
  end

  it "returns true if one exception is the dup'd copy of the other" do
    e = ArgumentError.new
    e.should == e.dup
  end

  it "returns true if both exceptions have the same class, no message, and no backtrace" do
    RuntimeError.new.should == RuntimeError.new
  end

  it "returns true if both exceptions have the same class, the same message, and no backtrace" do
    TypeError.new("message").should == TypeError.new("message")
  end

  it "returns true if both exceptions have the same class, the same message, and the same backtrace" do
    one = TypeError.new("message")
    one.set_backtrace [File.dirname(__FILE__)]
    two = TypeError.new("message")
    two.set_backtrace [File.dirname(__FILE__)]
    one.should == two
  end

  it "returns false if the two exceptions inherit from Exception but have different classes" do
    one = RuntimeError.new("message")
    one.set_backtrace [File.dirname(__FILE__)]
    one.should be_kind_of(Exception)
    two = TypeError.new("message")
    two.set_backtrace [File.dirname(__FILE__)]
    two.should be_kind_of(Exception)
    one.should_not == two
  end

  it "returns true if the two objects subclass Exception and have the same message and backtrace" do
    one = ExceptionSpecs::UnExceptional.new
    two = ExceptionSpecs::UnExceptional.new
    one.message.should == two.message
    two.backtrace.should == two.backtrace
    one.should == two
  end

  it "returns false if the argument is not an Exception" do
    ArgumentError.new.should_not == String.new
  end

  it "returns false if the two exceptions differ only in their backtrace" do
    one = RuntimeError.new("message")
    one.set_backtrace [File.dirname(__FILE__)]
    two = RuntimeError.new("message")
    two.set_backtrace nil
    one.should_not == two
  end

  it "returns false if the two exceptions differ only in their message" do
    one = RuntimeError.new("message")
    one.set_backtrace [File.dirname(__FILE__)]
    two = RuntimeError.new("message2")
    two.set_backtrace [File.dirname(__FILE__)]
    one.should_not == two
  end
end
