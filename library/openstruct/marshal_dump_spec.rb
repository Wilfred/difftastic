require File.expand_path('../../../spec_helper', __FILE__)
require "ostruct"

describe "OpenStruct#marshal_dump" do
  it "returns the method/value table" do
    os = OpenStruct.new("age" => 20, "name" => "John")
    os.marshal_dump.should == { age: 20, name: "John" }
  end
end
