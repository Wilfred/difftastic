require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.waitall" do
  before :all do
    begin
      Process.waitall
    rescue NotImplementedError
    end
  end

  it "returns an empty array when there are no children" do
    Process.waitall.should == []
  end

  it "takes no arguments" do
    lambda { Process.waitall(0) }.should raise_error(ArgumentError)
  end

  platform_is_not :windows do
    it "waits for all children" do
      pids = []
      pids << Process.fork { Process.exit! 2 }
      pids << Process.fork { Process.exit! 1 }
      pids << Process.fork { Process.exit! 0 }
      Process.waitall
      pids.each { |pid|
        lambda { Process.kill(0, pid) }.should raise_error(Errno::ESRCH)
      }
    end

    it "returns an array of pid/status pairs" do
      pids = []
      pids << Process.fork { Process.exit! 2 }
      pids << Process.fork { Process.exit! 1 }
      pids << Process.fork { Process.exit! 0 }
      a = Process.waitall
      a.should be_kind_of(Array)
      a.size.should == 3
      pids.each { |pid|
        pid_status = a.assoc(pid)
        pid_status.should be_kind_of(Array)
        pid_status.size.should == 2
        pid_status.first.should == pid
        pid_status.last.should be_kind_of(Process::Status)
      }
    end
  end
end
