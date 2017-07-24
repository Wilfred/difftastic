require File.expand_path('../../../spec_helper', __FILE__)
require "ostruct"

describe "OpenStruct#marshal_load when passed [Hash]" do
  it "defines methods based on the passed Hash" do
    os = OpenStruct.new
    os.marshal_load(age: 20, name: "John")

    os.age.should eql(20)
    os.name.should == "John"
  end
end
