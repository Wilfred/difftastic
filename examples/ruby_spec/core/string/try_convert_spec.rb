require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "String.try_convert" do
  it "returns the argument if it's a String" do
    x = String.new
    String.try_convert(x).should equal(x)
  end

  it "returns the argument if it's a kind of String" do
    x = StringSpecs::MyString.new
    String.try_convert(x).should equal(x)
  end

  it "returns nil when the argument does not respond to #to_str" do
    String.try_convert(Object.new).should be_nil
  end

  it "sends #to_str to the argument and returns the result if it's nil" do
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return(nil)
    String.try_convert(obj).should be_nil
  end

  it "sends #to_str to the argument and returns the result if it's a String" do
    x = String.new
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return(x)
    String.try_convert(obj).should equal(x)
  end

  it "sends #to_str to the argument and returns the result if it's a kind of String" do
    x = StringSpecs::MyString.new
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return(x)
    String.try_convert(obj).should equal(x)
  end

  it "sends #to_str to the argument and raises TypeError if it's not a kind of String" do
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return(Object.new)
    lambda { String.try_convert obj }.should raise_error(TypeError)
  end

  it "does not rescue exceptions raised by #to_str" do
    obj = mock("to_str")
    obj.should_receive(:to_str).and_raise(RuntimeError)
    lambda { String.try_convert obj }.should raise_error(RuntimeError)
  end
end
