require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

describe "URI#route_to" do

  #this could be split out a good bit better
  it "gives the minimal difference between the current URI and the target" do
    URI("http://example.com/a.html").route_to('http://example.com/a.html').to_s.should == ""
    URI("http://example.com/a.html").route_to('http://example.com/b.html').to_s.should == "b.html"
    URI("http://example.com/a/").route_to('http://example.com/b/').to_s.should == "../b/"
    URI("http://example.com/a/c").route_to('http://example.com/b/').to_s.should == "../b/"
    URI("http://example.com/a/b/").route_to('http://example.com/b/').to_s.should == "../../b/"
    URI("http://example.com/a/b/").route_to('http://EXAMPLE.cOm/b/').to_s.should == "../../b/"
    URI("http://example.com/a/b/").route_to('http://example.net/b/').to_s.should == "//example.net/b/"
    URI("mailto:foo@example.com").route_to('mailto:foo@example.com#bar').to_s.should == "#bar"

    #this was a little surprising to me
    URI("mailto:foo@example.com#bar").route_to('mailto:foo@example.com').to_s.should == ""
  end

  it "accepts a string-like argument" do
    str = mock('string-like')
    str.should_receive(:to_str).and_return("http://example.com/b.html")
    URI("http://example.com/a.html").route_to(str).to_s.should == "b.html"
  end
end
