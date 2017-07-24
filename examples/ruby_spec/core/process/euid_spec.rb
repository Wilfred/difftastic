require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.euid" do
  it "returns the effective user ID for this process" do
    Process.euid.should be_kind_of(Fixnum)
  end

  it "also goes by Process::UID.eid" do
    Process::UID.eid.should == Process.euid
  end

  it "also goes by Process::Sys.geteuid" do
    Process::Sys.geteuid.should == Process.euid
  end
end

describe "Process.euid=" do

  platform_is_not :windows do
    it "raises TypeError if not passed an Integer" do
      lambda { Process.euid = Object.new }.should raise_error(TypeError)
    end

    as_user do
      it "raises Errno::ERPERM if run by a non superuser trying to set the superuser id" do
        lambda { (Process.euid = 0)}.should raise_error(Errno::EPERM)
      end

      it "raises Errno::ERPERM if run by a non superuser trying to set the superuser id from username" do
        lambda { Process.euid = "root" }.should raise_error(Errno::EPERM)
      end
    end

    as_superuser do
      describe "if run by a superuser" do
        with_feature :fork do
          it "sets the effective user id for the current process if run by a superuser" do
            read, write = IO.pipe
            pid = Process.fork do
              begin
                read.close
                Process.euid = 1
                write << Process.euid
                write.close
              rescue Exception => e
                write << e << e.backtrace
              end
              Process.exit!
            end
            write.close
            euid = read.gets
            euid.should == "1"
            Process.wait pid
          end
        end
      end
    end
  end
end
