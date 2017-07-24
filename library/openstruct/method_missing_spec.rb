require File.expand_path('../../../spec_helper', __FILE__)
require "ostruct"

describe "OpenStruct#method_missing when called with a method name ending in '='" do
  before :each do
    @os = OpenStruct.new
  end

  it "raises an ArgumentError when not passed any additional arguments" do
    lambda { @os.method_missing(:test=) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError when self is frozen" do
    @os.freeze
    lambda { @os.method_missing(:test=, "test") }.should raise_error(RuntimeError)
  end

  it "creates accessor methods" do
    @os.method_missing(:test=, "test")
    @os.respond_to?(:test=).should be_true
    @os.respond_to?(:test).should be_true

    @os.test.should == "test"
    @os.test = "changed"
    @os.test.should == "changed"
  end

  it "updates the method/value table with the passed method/value" do
    @os.method_missing(:test=, "test")
    @os.send(:table)[:test].should == "test"
  end
end

describe "OpenStruct#method_missing when passed additional arguments" do
  it "raises a NoMethodError" do
    os = OpenStruct.new
    lambda { os.method_missing(:test, 1, 2, 3) }.should raise_error(NoMethodError)
  end
end

describe "OpenStruct#method_missing when not passed any additional arguments" do
  it "returns the value for the passed method from the method/value table" do
    os = OpenStruct.new(age: 20)
    os.method_missing(:age).should eql(20)
    os.method_missing(:name).should be_nil
  end
end
