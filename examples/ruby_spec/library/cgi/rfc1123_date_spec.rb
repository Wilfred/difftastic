require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI.rfc1123_date when passsed Time" do
  it "returns the passed Time formatted in RFC1123 ('Sat, 01 Dec 2007 15:56:42 GMT')" do
    input = Time.at(1196524602)
    expected = 'Sat, 01 Dec 2007 15:56:42 GMT'
    CGI.rfc1123_date(input).should == expected
  end
end
