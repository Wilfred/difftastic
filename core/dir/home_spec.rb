require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Dir.home" do
  it "returns the current user's home directory as a string if called without arguments" do
    home_directory = ENV['HOME']
    platform_is :windows do
      unless home_directory
        home_directory = ENV['HOMEDRIVE'] + ENV['HOMEPATH']
      end
      home_directory = home_directory.tr('\\', '/').chomp('/')
    end

    Dir.home.should == home_directory
  end

  platform_is_not :windows do
    it "returns the named user's home directory as a string if called with an argument" do
      Dir.home(ENV['USER']).should == ENV['HOME']
    end
  end

  it "raises an ArgumentError if the named user doesn't exist" do
    lambda { Dir.home('geuw2n288dh2k') }.should raise_error(ArgumentError)
  end
end
