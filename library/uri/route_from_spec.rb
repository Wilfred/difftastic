require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

describe "URI#route_from" do

  #this could be split out a good bit better
  it "gives the minimal difference between the current URI and the target" do
    URI("http://example.com/a.html").route_from('http://example.com/a.html').to_s.should == ""
    URI("http://example.com/a.html").route_from('http://example.com/b.html').to_s.should == "a.html"
    URI("http://example.com/a/").route_from('http://example.com/b/').to_s.should == "../a/"
    URI("http://example.com/b/").route_from('http://example.com/a/c').to_s.should == "../b/"
    URI("http://example.com/b/").route_from('http://example.com/a/b/').to_s.should == "../../b/"
    URI("http://example.com/b/").route_from('http://EXAMPLE.cOm/a/b/').to_s.should == "../../b/"
    URI("http://example.net/b/").route_from('http://example.com/a/b/').to_s.should == "//example.net/b/"
    URI("mailto:foo@example.com#bar").route_from('mailto:foo@example.com').to_s.should == "#bar"
  end

  it "accepts a string-like argument" do
    str = mock('string-like')
    str.should_receive(:to_str).and_return("http://example.com/b.html")
    URI("http://example.com/a.html").route_from(str).to_s.should == "a.html"
  end
end
