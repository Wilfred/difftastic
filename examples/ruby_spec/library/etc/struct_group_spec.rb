require File.expand_path('../../../spec_helper', __FILE__)
require 'etc'

describe "Struct::Group" do
  platform_is_not :windows do
    before :all do
      @g = Etc.getgrgid(`id -g`.strip.to_i)
    end

    it "returns group name" do
      @g.name.should == `id -gn`.strip
    end

    it "returns group password" do
      @g.passwd.is_a?(String).should == true
    end

    it "returns group id" do
      @g.gid.should == `id -g`.strip.to_i
    end

    it "returns an array of users belonging to the group" do
      @g.mem.is_a?(Array).should == true
    end

    it "can be compared to another object" do
      (@g == nil).should == false
      (@g == Object.new).should == false
    end
  end
end
