require File.expand_path('../../../spec_helper', __FILE__)
require "ostruct"
require File.expand_path('../fixtures/classes', __FILE__)

describe "OpenStruct#==" do
  before :each do
    @os = OpenStruct.new(name: "John")
  end

  it "returns false when the passed argument is no OpenStruct" do
    (@os == Object.new).should be_false
    (@os == "Test").should be_false
    (@os == 10).should be_false
    (@os == :sym).should be_false
  end

  it "returns true when self and other are equal method/value wise" do
    (@os == @os).should be_true
    (@os == OpenStruct.new(name: "John")).should be_true
    (@os == OpenStructSpecs::OpenStructSub.new(name: "John")).should be_true

    (@os == OpenStruct.new(name: "Jonny")).should be_false
    (@os == OpenStructSpecs::OpenStructSub.new(name: "Jonny")).should be_false

    (@os == OpenStruct.new(name: "John", age: 20)).should be_false
    (@os == OpenStructSpecs::OpenStructSub.new(name: "John", age: 20)).should be_false
  end
end
