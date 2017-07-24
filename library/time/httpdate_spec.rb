require File.expand_path('../../../spec_helper', __FILE__)
require 'time'

describe "Time.httpdate" do
  it "parses RFC-2616 strings" do
    t = Time.utc(1994, 11, 6, 8, 49, 37)
    t.should == Time.httpdate("Sun, 06 Nov 1994 08:49:37 GMT")

    # relies on Time.parse (not yet implemented)
    # t.should == Time.httpdate("Sunday, 06-Nov-94 08:49:37 GMT")

    t.should == Time.httpdate("Sun Nov  6 08:49:37 1994")
    Time.utc(1995, 11, 15, 6, 25, 24).should == Time.httpdate("Wed, 15 Nov 1995 06:25:24 GMT")
    Time.utc(1995, 11, 15, 4, 58, 8).should == Time.httpdate("Wed, 15 Nov 1995 04:58:08 GMT")
    Time.utc(1994, 11, 15, 8, 12, 31).should == Time.httpdate("Tue, 15 Nov 1994 08:12:31 GMT")
    Time.utc(1994, 12, 1, 16, 0, 0).should == Time.httpdate("Thu, 01 Dec 1994 16:00:00 GMT")
    Time.utc(1994, 10, 29, 19, 43, 31).should == Time.httpdate("Sat, 29 Oct 1994 19:43:31 GMT")
    Time.utc(1994, 11, 15, 12, 45, 26).should == Time.httpdate("Tue, 15 Nov 1994 12:45:26 GMT")
    Time.utc(1999, 12, 31, 23, 59, 59).should == Time.httpdate("Fri, 31 Dec 1999 23:59:59 GMT")
  end
end
