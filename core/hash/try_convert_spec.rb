require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash.try_convert" do
  it "returns the argument if it's a Hash" do
    x = Hash.new
    Hash.try_convert(x).should equal(x)
  end

  it "returns the argument if it's a kind of Hash" do
    x = HashSpecs::MyHash.new
    Hash.try_convert(x).should equal(x)
  end

  it "returns nil when the argument does not respond to #to_hash" do
    Hash.try_convert(Object.new).should be_nil
  end

  it "sends #to_hash to the argument and returns the result if it's nil" do
    obj = mock("to_hash")
    obj.should_receive(:to_hash).and_return(nil)
    Hash.try_convert(obj).should be_nil
  end

  it "sends #to_hash to the argument and returns the result if it's a Hash" do
    x = Hash.new
    obj = mock("to_hash")
    obj.should_receive(:to_hash).and_return(x)
    Hash.try_convert(obj).should equal(x)
  end

  it "sends #to_hash to the argument and returns the result if it's a kind of Hash" do
    x = HashSpecs::MyHash.new
    obj = mock("to_hash")
    obj.should_receive(:to_hash).and_return(x)
    Hash.try_convert(obj).should equal(x)
  end

  it "sends #to_hash to the argument and raises TypeError if it's not a kind of Hash" do
    obj = mock("to_hash")
    obj.should_receive(:to_hash).and_return(Object.new)
    lambda { Hash.try_convert obj }.should raise_error(TypeError)
  end

  it "does not rescue exceptions raised by #to_hash" do
    obj = mock("to_hash")
    obj.should_receive(:to_hash).and_raise(RuntimeError)
    lambda { Hash.try_convert obj }.should raise_error(RuntimeError)
  end
end
