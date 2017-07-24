require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#parent" do

  it "has parent of root as root" do
    Pathname.new('/').parent.to_s.should == '/'
  end

  it "has parent of /usr/ as root" do
    Pathname.new('/usr/').parent.to_s.should == '/'
  end

  it "has parent of /usr/local as root" do
    Pathname.new('/usr/local').parent.to_s.should == '/usr'
  end

end

