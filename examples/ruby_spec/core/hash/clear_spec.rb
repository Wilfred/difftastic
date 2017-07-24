require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#clear" do
  it "removes all key, value pairs" do
    h = { 1 => 2, 3 => 4 }
    h.clear.should equal(h)
    h.should == {}
  end

  it "does not remove default values" do
    h = Hash.new(5)
    h.clear
    h.default.should == 5

    h = { "a" => 100, "b" => 200 }
    h.default = "Go fish"
    h.clear
    h["z"].should == "Go fish"
  end

  it "does not remove default procs" do
    h = Hash.new { 5 }
    h.clear
    h.default_proc.should_not == nil
  end

  it "raises a RuntimeError if called on a frozen instance" do
    lambda { HashSpecs.frozen_hash.clear  }.should raise_error(RuntimeError)
    lambda { HashSpecs.empty_frozen_hash.clear }.should raise_error(RuntimeError)
  end
end
