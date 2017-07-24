require File.expand_path('../../../spec_helper', __FILE__)
require 'ostruct'

describe "OpenStruct#delete_field" do
  before :each do
    @os = OpenStruct.new(name: "John Smith", age: 70, pension: 300)
  end

  it "removes the named field from self's method/value table" do
    @os.delete_field(:name)
    @os[:name].should be_nil
  end

  it "does remove the accessor methods" do
    @os.delete_field(:name)
    @os.respond_to?(:name).should be_false
    @os.respond_to?(:name=).should be_false
  end
end
