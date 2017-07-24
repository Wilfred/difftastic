require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

#I'm more or less ok with these limited tests, as the more extensive extract tests
#use URI.regexp
describe "URI.regexp" do
  it "behaves according to the MatzRuby tests" do
    URI.regexp.should == URI.regexp
    'x http:// x'.slice(URI.regexp).should == 'http://'
    'x http:// x'.slice(URI.regexp(['http'])).should == 'http://'
    'x http:// x ftp://'.slice(URI.regexp(['http'])).should == 'http://'
    'http://'.slice(URI.regexp([])).should == nil
    ''.slice(URI.regexp).should == nil
    'xxxx'.slice(URI.regexp).should == nil
    ':'.slice(URI.regexp).should == nil
    'From:'.slice(URI.regexp).should == 'From:'
  end
end
