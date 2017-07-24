require File.expand_path('../../../spec_helper', __FILE__)
require 'ostruct'

describe "OpenStruct.new when passed [Hash]" do
  before :each do
    @os = OpenStruct.new(name: "John Smith", age: 70, pension: 300)
  end

  it "creates an attribute for each key of the passed Hash" do
    @os.age.should eql(70)
    @os.pension.should eql(300)
    @os.name.should == "John Smith"
  end
end

describe "OpenStruct.new when passed no arguments" do
  it "returns a new OpenStruct Object without any attributes" do
    OpenStruct.new.to_s.should == "#<OpenStruct>"
  end
end
