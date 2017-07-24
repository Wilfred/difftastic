require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI.parse when passed String" do
  it "parses a HTTP Query String into a Hash" do
    CGI.parse("test=test&a=b").should == { "a" => ["b"], "test" => ["test"] }
    CGI.parse("test=1,2,3").should == { "test" => ["1,2,3"] }
    CGI.parse("test=a&a=&b=").should == { "test" => ["a"], "a" => [""], "b" => [""] }
  end

  it "parses query strings with semicolons in place of ampersands" do
    CGI.parse("test=test;a=b").should == { "a" => ["b"], "test" => ["test"] }
    CGI.parse("test=a;a=;b=").should == { "test" => ["a"], "a" => [""], "b" => [""] }
  end

  it "allows passing multiple values for one key" do
    CGI.parse("test=1&test=2&test=3").should == { "test" => ["1", "2", "3"] }
    CGI.parse("test[]=1&test[]=2&test[]=3").should == { "test[]" => [ "1", "2", "3" ] }
  end

  it "unescapes keys and values" do
    CGI.parse("hello%3F=hello%21").should == { "hello?" => ["hello!"] }
  end
end
