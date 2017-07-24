require File.expand_path('../../../spec_helper', __FILE__)
require "ostruct"

describe "OpenStruct#[]" do
  before :each do
    @os = OpenStruct.new
  end

  it "returns the associated value" do
    @os.foo = 42
    @os[:foo].should == 42
  end
end
