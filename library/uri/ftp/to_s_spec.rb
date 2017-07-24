require File.expand_path('../../../../spec_helper', __FILE__)
require 'uri'


describe "URI::FTP#to_s" do
  before :each do
    @url = URI.parse('ftp://example.com')
  end

  it "escapes the leading /" do
    @url.path = '/foo'

    @url.to_s.should == 'ftp://example.com/%2Ffoo'
  end
end
