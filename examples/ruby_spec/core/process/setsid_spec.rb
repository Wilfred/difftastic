require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.setsid" do
  with_feature :fork do
    it "establishes this process as a new session and process group leader" do
      read, write = IO.pipe
      read2, write2 = IO.pipe
      pid = Process.fork {
        begin
          read.close
          write2.close
          pgid = Process.setsid
          write << pgid
          write.close
          read2.gets
        rescue Exception => e
          write << e << e.backtrace
        end
        Process.exit!
      }
      write.close
      read2.close
      pgid_child = Integer(read.gets)
      read.close
      platform_is_not :aix do
        # AIX does not allow Process.getsid(pid)
        # if pid is in a different session.
        pgid = Process.getsid(pid)
        pgid_child.should == pgid
      end
      write2.close
      Process.wait pid

      pgid_child.should_not == Process.getsid
    end
  end
end
