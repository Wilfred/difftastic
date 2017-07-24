require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#hash" do

  it "is equal to the hash of the pathname" do
    Pathname.new('/usr/local/bin/').hash.should == '/usr/local/bin/'.hash
  end

  it "is not equal the hash of a different pathname" do
    Pathname.new('/usr/local/bin/').hash.should_not == '/usr/bin/'.hash
  end

end

