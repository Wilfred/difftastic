require File.expand_path('../../../spec_helper', __FILE__)
require 'uri'

#the testing is light here as this is an alias for URI.parse

#we're just testing that the method ends up in the right place
describe "the URI method" do
  it "parses a given URI, returning a URI object" do
    result = URI.parse("http://ruby-lang.org")
    URI("http://ruby-lang.org").should == result
    Kernel::URI("http://ruby-lang.org").should == result
  end

  it "converts its argument with to_str" do
    str = mock('string-like')
    str.should_receive(:to_str).and_return("http://ruby-lang.org")
    URI(str).should == URI.parse("http://ruby-lang.org")
  end

  it "returns the argument if it is a URI object" do
    result = URI.parse("http://ruby-lang.org")
    URI(result).should equal(result)
  end

  #apparently this was a concern?  imported from MRI tests
  it "does not add a URI method to Object instances" do
    lambda {Object.new.URI("http://ruby-lang.org/")}.should raise_error(NoMethodError)
  end
end
