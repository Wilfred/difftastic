require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI#print" do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
  end

  it "passes all arguments to $stdout.print" do
    $stdout.should_receive(:print).with("test")
    @cgi.print("test")

    $stdout.should_receive(:print).with("one", "two", "three", ["four", "five"])
    @cgi.print("one", "two", "three", ["four", "five"])
  end

  it "returns the result of calling $stdout.print" do
    $stdout.should_receive(:print).with("test").and_return(:expected)
    @cgi.print("test").should == :expected
  end
end
