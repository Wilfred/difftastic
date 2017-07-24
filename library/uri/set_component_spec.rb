require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

#TODO: make this more BDD
describe "URI#select" do
  it "conforms to the MatzRuby tests" do
    uri = URI.parse('http://foo:bar@baz')
    (uri.user = 'oof').should == 'oof'
    uri.to_s.should == 'http://oof:bar@baz'
    (uri.password = 'rab').should == 'rab'
    uri.to_s.should == 'http://oof:rab@baz'
    (uri.userinfo = 'foo').should == 'foo'
    uri.to_s.should == 'http://foo:rab@baz'
    (uri.userinfo = ['foo', 'bar']).should == ['foo', 'bar']
    uri.to_s.should == 'http://foo:bar@baz'
    (uri.userinfo = ['foo']).should == ['foo']
    uri.to_s.should == 'http://foo:bar@baz'
    (uri.host = 'zab').should == 'zab'
    uri.to_s.should == 'http://foo:bar@zab'
    (uri.port = 8080).should == 8080
    uri.to_s.should == 'http://foo:bar@zab:8080'
    (uri.path = '/').should == '/'
    uri.to_s.should == 'http://foo:bar@zab:8080/'
    (uri.query = 'a=1').should == 'a=1'
    uri.to_s.should == 'http://foo:bar@zab:8080/?a=1'
    (uri.fragment = 'b123').should == 'b123'
    uri.to_s.should == 'http://foo:bar@zab:8080/?a=1#b123'

    uri = URI.parse('http://example.com')
    lambda { uri.password = 'bar' }.should raise_error(URI::InvalidURIError)
    uri.userinfo = 'foo:bar'
    uri.to_s.should == 'http://foo:bar@example.com'
    lambda { uri.registry = 'bar' }.should raise_error(URI::InvalidURIError)
    lambda { uri.opaque = 'bar' }.should raise_error(URI::InvalidURIError)

    uri = URI.parse('mailto:foo@example.com')
    lambda { uri.user = 'bar' }.should raise_error(URI::InvalidURIError)
    lambda { uri.password = 'bar' }.should raise_error(URI::InvalidURIError)
    lambda { uri.userinfo = ['bar', 'baz'] }.should raise_error(URI::InvalidURIError)
    lambda { uri.host = 'bar' }.should raise_error(URI::InvalidURIError)
    lambda { uri.port = 'bar' }.should raise_error(URI::InvalidURIError)
    lambda { uri.path = 'bar' }.should raise_error(URI::InvalidURIError)
    lambda { uri.query = 'bar' }.should raise_error(URI::InvalidURIError)
  end
end


