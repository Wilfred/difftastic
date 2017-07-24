require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#sub" do

  it "replaces the pattern with rest" do
    Pathname.new('/usr/local/bin/').sub(/local/, 'fish').to_s.should == '/usr/fish/bin/'
  end

  it "returns a new object" do
    p = Pathname.new('/usr/local/bin/')
    p.sub(/local/, 'fish').should_not == p
  end

end

