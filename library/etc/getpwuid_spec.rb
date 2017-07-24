require File.expand_path('../../../spec_helper', __FILE__)
require 'etc'

platform_is :windows do
  describe "Etc.getpwuid" do
    it "returns nil" do
      Etc.getpwuid(1).should == nil
      Etc.getpwuid(nil).should == nil
      Etc.getpwuid('nil').should == nil
    end
  end
end

platform_is_not :windows do
  describe "Etc.getpwuid" do
    before :all do
      @pw = Etc.getpwuid(`id -u`.strip.to_i)
    end

    it "returns a Etc::Passwd struct instance for the given user" do
      @pw.is_a?(Etc::Passwd).should == true
    end

    it "uses Process.uid as the default value for the argument" do
      pw = Etc.getpwuid
      pw.should == @pw
    end

    it "only accepts integers as argument" do
      lambda {
        Etc.getpwuid("foo")
        Etc.getpwuid(nil)
      }.should raise_error(TypeError)
    end
  end
end
