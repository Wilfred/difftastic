require File.expand_path('../../../spec_helper', __FILE__)
require 'date'

describe "DateTime.now" do
  it "creates an instance of DateTime" do
    DateTime.now.should be_an_instance_of(DateTime)
  end
end
