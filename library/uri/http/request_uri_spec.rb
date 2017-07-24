require File.expand_path('../../../../spec_helper', __FILE__)
require 'uri'

describe "URI::HTTP.request_uri" do
  it "returns a string of the path + query" do
    URI("http://reddit.com/r/ruby/").request_uri.should == "/r/ruby/"
    URI("http://reddit.com/r/ruby/search?q=rubinius").request_uri.should == "/r/ruby/search?q=rubinius"
  end

  it "returns '/' if the path of the URI is blank" do
    URI("http://ruby.reddit.com").request_uri.should == "/"
  end
end
describe "URI::HTTP#request_uri" do
  it "needs to be reviewed for spec completeness"
end
