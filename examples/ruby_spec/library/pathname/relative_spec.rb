require File.expand_path('../../../spec_helper', __FILE__)
require 'pathname'

describe "Pathname#relative?" do

  it "returns false for the root directory" do
    Pathname.new('/').relative?.should == false
  end

  it "returns false for a dir starting with a slash" do
    Pathname.new('/usr/local/bin').relative?.should == false
  end

  it "returns true for a dir not starting with a slash" do
    Pathname.new('fish').relative?.should == true
  end

  it "returns true for a dir not starting with a slash" do
    Pathname.new('fish/dog/cow').relative?.should == true
  end

end

