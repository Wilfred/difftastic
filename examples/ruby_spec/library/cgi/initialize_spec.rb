require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI#initialize" do
  it "is private" do
    CGI.should have_private_instance_method(:initialize)
  end
end

describe "CGI#initialize when passed no arguments" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.allocate
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "extends self with CGI::QueryExtension" do
    @cgi.send(:initialize)
    @cgi.should be_kind_of(CGI::QueryExtension)
  end

  it "does not extend self with CGI::HtmlExtension" do
    @cgi.send(:initialize)
    @cgi.should_not be_kind_of(CGI::HtmlExtension)
  end

  it "does not extend self with any of the other HTML modules" do
    @cgi.send(:initialize)
    @cgi.should_not be_kind_of(CGI::Html3)
    @cgi.should_not be_kind_of(CGI::HtmlExtension)
    @cgi.should_not be_kind_of(CGI::Html4)
    @cgi.should_not be_kind_of(CGI::Html4Tr)
    @cgi.should_not be_kind_of(CGI::Html4Fr)
  end

  it "sets #cookies based on ENV['HTTP_COOKIE']" do
    begin
      old_env, ENV["HTTP_COOKIE"] = ENV["HTTP_COOKIE"], "test=test yay"
      @cgi.send(:initialize)
      @cgi.cookies.should == { "test"=>[ "test yay" ] }
    ensure
      ENV["HTTP_COOKIE"] = old_env
    end
  end

  it "sets #params based on ENV['QUERY_STRING'] when ENV['REQUEST_METHOD'] is GET" do
    begin
      old_env_query, ENV["QUERY_STRING"] = ENV["QUERY_STRING"], "?test=a&test2=b"
      old_env_method, ENV["REQUEST_METHOD"] = ENV["REQUEST_METHOD"], "GET"
      @cgi.send(:initialize)
      @cgi.params.should == { "test2" => ["b"], "?test" => ["a"] }
    ensure
      ENV["QUERY_STRING"] = old_env_query
      ENV["REQUEST_METHOD"] = old_env_method
    end
  end

  it "sets #params based on ENV['QUERY_STRING'] when ENV['REQUEST_METHOD'] is HEAD" do
    begin
      old_env_query, ENV["QUERY_STRING"] = ENV["QUERY_STRING"], "?test=a&test2=b"
      old_env_method, ENV["REQUEST_METHOD"] = ENV["REQUEST_METHOD"], "HEAD"
      @cgi.send(:initialize)
      @cgi.params.should == { "test2" => ["b"], "?test" => ["a"] }
    ensure
      ENV["QUERY_STRING"] = old_env_query
      ENV["REQUEST_METHOD"] = old_env_method
    end
  end
end

describe "CGI#initialize when passed type" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.allocate
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end


  it "extends self with CGI::QueryExtension" do
    @cgi.send(:initialize, "test")
    @cgi.should be_kind_of(CGI::QueryExtension)
  end

  it "extends self with CGI::QueryExtension, CGI::Html3 and CGI::HtmlExtension when the passed type is 'html3'" do
    @cgi.send(:initialize, "html3")
    @cgi.should be_kind_of(CGI::Html3)
    @cgi.should be_kind_of(CGI::HtmlExtension)
    @cgi.should be_kind_of(CGI::QueryExtension)

    @cgi.should_not be_kind_of(CGI::Html4)
    @cgi.should_not be_kind_of(CGI::Html4Tr)
    @cgi.should_not be_kind_of(CGI::Html4Fr)
  end

  it "extends self with CGI::QueryExtension, CGI::Html4 and CGI::HtmlExtension when the passed type is 'html4'" do
    @cgi.send(:initialize, "html4")
    @cgi.should be_kind_of(CGI::Html4)
    @cgi.should be_kind_of(CGI::HtmlExtension)
    @cgi.should be_kind_of(CGI::QueryExtension)

    @cgi.should_not be_kind_of(CGI::Html3)
    @cgi.should_not be_kind_of(CGI::Html4Tr)
    @cgi.should_not be_kind_of(CGI::Html4Fr)
  end

  it "extends self with CGI::QueryExtension, CGI::Html4Tr and CGI::HtmlExtension when the passed type is 'html4Tr'" do
    @cgi.send(:initialize, "html4Tr")
    @cgi.should be_kind_of(CGI::Html4Tr)
    @cgi.should be_kind_of(CGI::HtmlExtension)
    @cgi.should be_kind_of(CGI::QueryExtension)

    @cgi.should_not be_kind_of(CGI::Html3)
    @cgi.should_not be_kind_of(CGI::Html4)
    @cgi.should_not be_kind_of(CGI::Html4Fr)
  end

  it "extends self with CGI::QueryExtension, CGI::Html4Tr, CGI::Html4Fr and CGI::HtmlExtension when the passed type is 'html4Fr'" do
    @cgi.send(:initialize, "html4Fr")
    @cgi.should be_kind_of(CGI::Html4Tr)
    @cgi.should be_kind_of(CGI::Html4Fr)
    @cgi.should be_kind_of(CGI::HtmlExtension)
    @cgi.should be_kind_of(CGI::QueryExtension)

    @cgi.should_not be_kind_of(CGI::Html3)
    @cgi.should_not be_kind_of(CGI::Html4)
  end
end
