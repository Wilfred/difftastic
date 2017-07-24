require File.expand_path('../../../../spec_helper', __FILE__)
require 'uri'

describe "URI::FTP#path=" do
  before :each do
    @url = URI.parse('ftp://example.com')
  end

  it "does not require a leading /" do
    @url.path = 'foo'
    @url.path.should == 'foo'
  end

  it "does not strip the leading /" do
    @url.path = '/foo'
    @url.path.should == '/foo'
  end
end

describe "URI::FTP#path" do
  it "unescapes the leading /" do
    url = URI.parse('ftp://example.com/%2Ffoo')

    url.path.should == '/foo'
  end
end
