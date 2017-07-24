
describe "Process::Constants" do
  platform_is :darwin, :netbsd, :freebsd do
    it "has the correct constant values on BSD-like systems" do
      Process::WNOHANG.should == 1
      Process::WUNTRACED.should == 2
      Process::PRIO_PROCESS.should == 0
      Process::PRIO_PGRP.should == 1
      Process::PRIO_USER.should == 2
      Process::RLIM_INFINITY.should == 9223372036854775807
      Process::RLIMIT_CPU.should == 0
      Process::RLIMIT_FSIZE.should == 1
      Process::RLIMIT_DATA.should == 2
      Process::RLIMIT_STACK.should == 3
      Process::RLIMIT_CORE.should == 4
      Process::RLIMIT_RSS.should == 5
      Process::RLIMIT_MEMLOCK.should == 6
      Process::RLIMIT_NPROC.should == 7
      Process::RLIMIT_NOFILE.should == 8
    end
  end

  platform_is :darwin do
    it "has the correct constant values on Darwin" do
      Process::RLIM_SAVED_MAX.should == 9223372036854775807
      Process::RLIM_SAVED_CUR.should == 9223372036854775807
      Process::RLIMIT_AS.should == 5
    end
  end

  platform_is :linux do
    it "has the correct constant values on Linux" do
      Process::WNOHANG.should == 1
      Process::WUNTRACED.should == 2
      Process::PRIO_PROCESS.should == 0
      Process::PRIO_PGRP.should == 1
      Process::PRIO_USER.should == 2
      Process::RLIMIT_CPU.should == 0
      Process::RLIMIT_FSIZE.should == 1
      Process::RLIMIT_DATA.should == 2
      Process::RLIMIT_STACK.should == 3
      Process::RLIMIT_CORE.should == 4
      Process::RLIMIT_RSS.should == 5
      Process::RLIMIT_NPROC.should == 6
      Process::RLIMIT_NOFILE.should == 7
      Process::RLIMIT_MEMLOCK.should == 8
      Process::RLIMIT_AS.should == 9

      # These values appear to change according to the platform.
      values = [4294967295, 9223372036854775807, 18446744073709551615]
      values.include?(Process::RLIM_INFINITY).should be_true
      values.include?(Process::RLIM_SAVED_MAX).should be_true
      values.include?(Process::RLIM_SAVED_CUR).should be_true
    end
  end

  platform_is :netbsd, :freebsd do
    it "Process::RLIMIT_SBSIZE" do
      Process::RLIMIT_SBSIZE.should == 9 # FIXME: what's it equal?
      Process::RLIMIT_AS.should == 10
    end
  end
end
