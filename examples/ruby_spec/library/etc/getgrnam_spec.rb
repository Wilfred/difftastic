require File.expand_path('../../../spec_helper', __FILE__)
require 'etc'

platform_is :windows do
  describe "Etc.getgrnam" do
    it "returns nil" do
      Etc.getgrnam(1).should == nil
      Etc.getgrnam(nil).should == nil
      Etc.getgrnam('nil').should == nil
    end
  end
end

platform_is_not :windows do
  describe "Etc.getgrnam" do
    it "returns a Etc::Group struct instance for the given group" do
      gr_name = Etc.getgrent.name
      Etc.endgrent
      gr = Etc.getgrnam(gr_name)
      gr.is_a?(Etc::Group).should == true
    end

    it "only accepts strings as argument" do
      lambda {
        Etc.getgrnam(123)
        Etc.getgrnam(nil)
      }.should raise_error(TypeError)
    end
  end
end
