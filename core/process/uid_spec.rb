require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.uid" do
  platform_is_not :windows do
    it "returns the correct uid for the user executing this process" do
      current_uid_according_to_unix = `id -ur`.to_i
      Process.uid.should == current_uid_according_to_unix
    end
  end

  it "also goes by Process::UID.rid" do
    Process::UID.rid.should == Process.uid
  end

  it "also goes by Process::Sys.getuid" do
    Process::Sys.getuid.should == Process.uid
  end
end

describe "Process.uid=" do

  platform_is_not :windows do
    it "raises TypeError if not passed an Integer" do
      lambda { Process.uid = Object.new }.should raise_error(TypeError)
    end

    as_user do
      it "raises Errno::ERPERM if run by a non privileged user trying to set the superuser id" do
        lambda { (Process.uid = 0)}.should raise_error(Errno::EPERM)
      end

      it "raises Errno::ERPERM if run by a non privileged user trying to set the superuser id from username" do
        lambda { Process.uid = "root" }.should raise_error(Errno::EPERM)
      end
    end

    as_superuser do
      describe "if run by a superuser" do
        with_feature :fork do
          it "sets the real user id for the current process" do
            read, write = IO.pipe
            pid = Process.fork do
              begin
                read.close
                Process.uid = 1
                write << Process.uid
                write.close
              rescue Exception => e
                write << e << e.backtrace
              end
              Process.exit!
            end
            write.close
            uid = read.gets
            uid.should == "1"
            Process.wait pid
          end

          it "sets the real user id if preceded by Process.euid=id" do
            read, write = IO.pipe
            pid = Process.fork do
              begin
                read.close
                Process.euid = 1
                Process.uid = 1
                write << Process.uid
                write.close
              rescue Exception => e
                write << e << e.backtrace
              end
              Process.exit!
            end
            write.close
            uid = read.gets
            uid.should == "1"
            Process.wait pid
          end
        end
      end
    end
  end

  it "needs to be reviewed for spec completeness"
end
