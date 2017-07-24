require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPGenericRequest#set_body_internal when passed string" do
  before :each do
    @request = Net::HTTPGenericRequest.new("POST", true, true, "/some/path")
  end

  it "sets self's body to the passed string" do
    @request.set_body_internal("Some Content")
    @request.body.should == "Some Content"
  end

  it "raises an ArgumentError when the body or body_stream of self have already been set" do
    @request.body = "Some Content"
    lambda { @request.set_body_internal("Some other Content") }.should raise_error(ArgumentError)

    @request.body_stream = "Some Content"
    lambda { @request.set_body_internal("Some other Content") }.should raise_error(ArgumentError)
  end
end
