require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#absolute?" do

  it "returns true for the root directory" do
    Pathname.new('/').absolute?.should == true
  end

  it "returns true for a dir starting with a slash" do
    Pathname.new('/usr/local/bin').absolute?.should == true
  end

  it "returns false for a dir not starting with a slash" do
    Pathname.new('fish').absolute?.should == false
  end

  it "returns false for a dir not starting with a slash" do
    Pathname.new('fish/dog/cow').absolute?.should == false
  end

end

