require File.expand_path('../../../spec_helper', __FILE__)

platform_is_not :windows do
  describe "Process.setrlimit" do
    context "when passed an Object" do
      before do
        @resource = Process::RLIMIT_CORE
        @limit, @max = Process.getrlimit @resource
      end

      it "calls #to_int to convert resource to an Integer" do
        Process.setrlimit(mock_int(@resource), @limit, @max).should be_nil
      end

      it "raises a TypeError if #to_int for resource does not return an Integer" do
        obj = mock("process getrlimit integer")
        obj.should_receive(:to_int).and_return(nil)

        lambda { Process.setrlimit(obj, @limit, @max) }.should raise_error(TypeError)
      end

      it "calls #to_int to convert the soft limit to an Integer" do
        Process.setrlimit(@resource, mock_int(@limit), @max).should be_nil
      end

      it "raises a TypeError if #to_int for resource does not return an Integer" do
        obj = mock("process getrlimit integer")
        obj.should_receive(:to_int).and_return(nil)

        lambda { Process.setrlimit(@resource, obj, @max) }.should raise_error(TypeError)
      end

      it "calls #to_int to convert the hard limit to an Integer" do
        Process.setrlimit(@resource, @limit, mock_int(@max)).should be_nil
      end

      it "raises a TypeError if #to_int for resource does not return an Integer" do
        obj = mock("process getrlimit integer")
        obj.should_receive(:to_int).and_return(nil)

        lambda { Process.setrlimit(@resource, @limit, obj) }.should raise_error(TypeError)
      end
    end

    context "when passed a Symbol" do
      platform_is_not :openbsd do
        it "coerces :AS into RLIMIT_AS" do
          Process.setrlimit(:AS, *Process.getrlimit(Process::RLIMIT_AS)).should be_nil
        end
      end

      it "coerces :CORE into RLIMIT_CORE" do
        Process.setrlimit(:CORE, *Process.getrlimit(Process::RLIMIT_CORE)).should be_nil
      end

      it "coerces :CPU into RLIMIT_CPU" do
        Process.setrlimit(:CPU, *Process.getrlimit(Process::RLIMIT_CPU)).should be_nil
      end

      it "coerces :DATA into RLIMIT_DATA" do
        Process.setrlimit(:DATA, *Process.getrlimit(Process::RLIMIT_DATA)).should be_nil
      end

      it "coerces :FSIZE into RLIMIT_FSIZE" do
        Process.setrlimit(:FSIZE, *Process.getrlimit(Process::RLIMIT_FSIZE)).should be_nil
      end

      it "coerces :NOFILE into RLIMIT_NOFILE" do
        Process.setrlimit(:NOFILE, *Process.getrlimit(Process::RLIMIT_NOFILE)).should be_nil
      end

      it "coerces :STACK into RLIMIT_STACK" do
        Process.setrlimit(:STACK, *Process.getrlimit(Process::RLIMIT_STACK)).should be_nil
      end

      platform_is_not :solaris do
        platform_is_not :aix do
          it "coerces :MEMLOCK into RLIMIT_MEMLOCK" do
            Process.setrlimit(:MEMLOCK, *Process.getrlimit(Process::RLIMIT_MEMLOCK)).should be_nil
          end
        end

        it "coerces :NPROC into RLIMIT_NPROC" do
          Process.setrlimit(:NPROC, *Process.getrlimit(Process::RLIMIT_NPROC)).should be_nil
        end

        it "coerces :RSS into RLIMIT_RSS" do
          Process.setrlimit(:RSS, *Process.getrlimit(Process::RLIMIT_RSS)).should be_nil
        end
      end

      platform_is :netbsd, :freebsd do
        it "coerces :SBSIZE into RLIMIT_SBSIZE" do
          Process.setrlimit(:SBSIZE, *Process.getrlimit(Process::RLIMIT_SBSIZE)).should be_nil
        end
      end

      platform_is :linux do
        it "coerces :RTPRIO into RLIMIT_RTPRIO" do
          Process.setrlimit(:RTPRIO, *Process.getrlimit(Process::RLIMIT_RTPRIO)).should be_nil
        end

        if defined?(Process::RLIMIT_RTTIME)
          it "coerces :RTTIME into RLIMIT_RTTIME" do
            Process.setrlimit(:RTTIME, *Process.getrlimit(Process::RLIMIT_RTTIME)).should be_nil
          end
        end

        it "coerces :SIGPENDING into RLIMIT_SIGPENDING" do
          Process.setrlimit(:SIGPENDING, *Process.getrlimit(Process::RLIMIT_SIGPENDING)).should be_nil
        end

        it "coerces :MSGQUEUE into RLIMIT_MSGQUEUE" do
          Process.setrlimit(:MSGQUEUE, *Process.getrlimit(Process::RLIMIT_MSGQUEUE)).should be_nil
        end

        it "coerces :NICE into RLIMIT_NICE" do
          Process.setrlimit(:NICE, *Process.getrlimit(Process::RLIMIT_NICE)).should be_nil
        end
      end

      it "raises ArgumentError when passed an unknown resource" do
        lambda { Process.setrlimit(:FOO, 1, 1) }.should raise_error(ArgumentError)
      end
    end

    context "when passed a String" do
      platform_is_not :openbsd do
        it "coerces 'AS' into RLIMIT_AS" do
          Process.setrlimit("AS", *Process.getrlimit(Process::RLIMIT_AS)).should be_nil
        end
      end

      it "coerces 'CORE' into RLIMIT_CORE" do
        Process.setrlimit("CORE", *Process.getrlimit(Process::RLIMIT_CORE)).should be_nil
      end

      it "coerces 'CPU' into RLIMIT_CPU" do
        Process.setrlimit("CPU", *Process.getrlimit(Process::RLIMIT_CPU)).should be_nil
      end

      it "coerces 'DATA' into RLIMIT_DATA" do
        Process.setrlimit("DATA", *Process.getrlimit(Process::RLIMIT_DATA)).should be_nil
      end

      it "coerces 'FSIZE' into RLIMIT_FSIZE" do
        Process.setrlimit("FSIZE", *Process.getrlimit(Process::RLIMIT_FSIZE)).should be_nil
      end

      it "coerces 'NOFILE' into RLIMIT_NOFILE" do
        Process.setrlimit("NOFILE", *Process.getrlimit(Process::RLIMIT_NOFILE)).should be_nil
      end

      it "coerces 'STACK' into RLIMIT_STACK" do
        Process.setrlimit("STACK", *Process.getrlimit(Process::RLIMIT_STACK)).should be_nil
      end

      platform_is_not :solaris do
        platform_is_not :aix do
          it "coerces 'MEMLOCK' into RLIMIT_MEMLOCK" do
            Process.setrlimit("MEMLOCK", *Process.getrlimit(Process::RLIMIT_MEMLOCK)).should be_nil
          end
        end

        it "coerces 'NPROC' into RLIMIT_NPROC" do
          Process.setrlimit("NPROC", *Process.getrlimit(Process::RLIMIT_NPROC)).should be_nil
        end

        it "coerces 'RSS' into RLIMIT_RSS" do
          Process.setrlimit("RSS", *Process.getrlimit(Process::RLIMIT_RSS)).should be_nil
        end
      end

      platform_is :netbsd, :freebsd do
        it "coerces 'SBSIZE' into RLIMIT_SBSIZE" do
          Process.setrlimit("SBSIZE", *Process.getrlimit(Process::RLIMIT_SBSIZE)).should be_nil
        end
      end

      platform_is :linux do
        it "coerces 'RTPRIO' into RLIMIT_RTPRIO" do
          Process.setrlimit("RTPRIO", *Process.getrlimit(Process::RLIMIT_RTPRIO)).should be_nil
        end

        if defined?(Process::RLIMIT_RTTIME)
          it "coerces 'RTTIME' into RLIMIT_RTTIME" do
            Process.setrlimit("RTTIME", *Process.getrlimit(Process::RLIMIT_RTTIME)).should be_nil
          end
        end

        it "coerces 'SIGPENDING' into RLIMIT_SIGPENDING" do
          Process.setrlimit("SIGPENDING", *Process.getrlimit(Process::RLIMIT_SIGPENDING)).should be_nil
        end

        it "coerces 'MSGQUEUE' into RLIMIT_MSGQUEUE" do
          Process.setrlimit("MSGQUEUE", *Process.getrlimit(Process::RLIMIT_MSGQUEUE)).should be_nil
        end

        it "coerces 'NICE' into RLIMIT_NICE" do
          Process.setrlimit("NICE", *Process.getrlimit(Process::RLIMIT_NICE)).should be_nil
        end
      end

      it "raises ArgumentError when passed an unknown resource" do
        lambda { Process.setrlimit("FOO", 1, 1) }.should raise_error(ArgumentError)
      end
    end

    context "when passed on Object" do
      before do
        @resource = Process::RLIMIT_CORE
        @limit, @max = Process.getrlimit @resource
      end

      it "calls #to_str to convert to a String" do
        obj = mock("process getrlimit string")
        obj.should_receive(:to_str).and_return("CORE")
        obj.should_not_receive(:to_int)

        Process.setrlimit(obj, @limit, @max).should be_nil
      end

      it "calls #to_int if #to_str does not return a String" do
        obj = mock("process getrlimit string")
        obj.should_receive(:to_str).and_return(nil)
        obj.should_receive(:to_int).and_return(@resource)

        Process.setrlimit(obj, @limit, @max).should be_nil
      end
    end
  end
end
