require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.gid" do
  platform_is_not :windows do
    it "returns the correct gid for the user executing this process" do
       current_gid_according_to_unix = `id -gr`.to_i
       Process.gid.should == current_gid_according_to_unix
    end
  end

  it "also goes by Process::GID.rid" do
    Process::GID.rid.should == Process.gid
  end

  it "also goes by Process::Sys.getgid" do
    Process::Sys.getgid.should == Process.gid
  end
end

describe "Process.gid=" do
  it "needs to be reviewed for spec completeness"
end
