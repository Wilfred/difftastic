require File.expand_path('../../../spec_helper', __FILE__)

# TODO: put these in the right files.
describe "Process.setpgrp and Process.getpgrp" do
  platform_is_not :windows do
    it "sets and gets the process group ID of the calling process" do
      # there are two synchronization points here:
      # One for the child to let the parent know that it has finished
      #   setting its process group;
      # and another for the parent to let the child know that it's ok to die.
      read1, write1 = IO.pipe
      read2, write2 = IO.pipe
      pid = Process.fork do
        read1.close
        write2.close
        Process.setpgrp
        write1 << Process.getpgrp
        write1.close
        read2.read(1)
        read2.close
        Process.exit!
      end
      write1.close
      read2.close
      pgid = read1.read # wait for child to change process groups
      read1.close

      begin
        Process.getpgid(pid).should == pgid.to_i
      ensure
        write2 << "!"
        write2.close
        Process.wait pid
      end
    end
  end
end
