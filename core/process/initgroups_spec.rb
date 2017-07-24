require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.initgroups" do
  platform_is_not :windows do
    it "initializes the supplemental group access list" do
      name = `id -un`.strip
      groups = Process.groups
      gid = groups.max.to_i + 1
      augmented_groups = `id -G`.scan(/\d+/).map {|i| i.to_i} << gid
      if Process.uid == 0
        Process.groups = []
        Process.initgroups(name, gid).sort.should == augmented_groups.sort
        Process.groups.sort.should == augmented_groups.sort
        Process.groups = groups
      else
        lambda { Process.initgroups(name, gid) }.should raise_error(Errno::EPERM)
      end
    end
  end
end
