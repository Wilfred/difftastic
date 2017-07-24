require File.expand_path('../../../spec_helper', __FILE__)
require 'etc'

describe "Struct::Passwd" do
  platform_is_not :windows do
    before :all do
      @pw = Etc.getpwuid(`id -u`.strip.to_i)
    end

    it "returns user name" do
      @pw.name.should == `id -un`.strip
    end

    it "returns user password" do
      @pw.passwd.is_a?(String).should == true
    end

    it "returns user id" do
      @pw.uid.should == `id -u`.strip.to_i
    end

    it "returns user group id" do
      @pw.gid.should == `id -g`.strip.to_i
    end

    it "returns user personal information (gecos field)" do
      @pw.gecos.is_a?(String).should == true
    end

    it "returns user home directory" do
      @pw.dir.is_a?(String).should == true
    end

    it "returns user shell" do
      @pw.shell.is_a?(String).should == true
    end

    it "can be compared to another object" do
      (@pw == nil).should == false
      (@pw == Object.new).should == false
    end
  end
end
