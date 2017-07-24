require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.detach" do
  platform_is_not :windows do
    it "returns a thread" do
      pid = Process.fork { Process.exit! }
      thr = Process.detach(pid)
      thr.should be_kind_of(Thread)
      thr.join
    end

    it "produces the exit Process::Status as the thread value" do
      pid = Process.fork { Process.exit! }
      thr = Process.detach(pid)
      thr.join

      status = thr.value
      status.should be_kind_of(Process::Status)
      status.pid.should == pid
    end

    platform_is_not :openbsd do
      it "reaps the child process's status automatically" do
        pid = Process.fork { Process.exit! }
        Process.detach(pid).join
        lambda { Process.waitpid(pid) }.should raise_error(Errno::ECHILD)
      end
    end

    it "sets the :pid thread-local to the PID" do
      pid = Process.fork { Process.exit! }
      thr = Process.detach(pid)
      thr.join

      thr[:pid].should == pid
    end

    it "provides a #pid method on the returned thread which returns the PID" do
      pid = Process.fork { Process.exit! }
      thr = Process.detach(pid)
      thr.join

      thr.pid.should == pid
    end
  end
end
