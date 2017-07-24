require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

platform_is_not :windows do
  describe :process_daemon_keep_stdio_open_false, shared: true do
    it "redirects stdout to /dev/null" do
      @daemon.invoke("keep_stdio_open_false_stdout", @object).should == ""
    end

    it "redirects stderr to /dev/null" do
      @daemon.invoke("keep_stdio_open_false_stderr", @object).should == ""
    end

    it "redirects stdin to /dev/null" do
      @daemon.invoke("keep_stdio_open_false_stdin", @object).should == ""
    end

    it "does not close open files" do
      @daemon.invoke("keep_stdio_open_files", @object).should == "false"
    end
  end

  describe :process_daemon_keep_stdio_open_true, shared: true do
    it "does not redirect stdout to /dev/null" do
      @daemon.invoke("keep_stdio_open_true_stdout", @object).should == "writing to stdout"
    end

    it "does not redirect stderr to /dev/null" do
      @daemon.invoke("keep_stdio_open_true_stderr", @object).should == "writing to stderr"
    end

    it "does not redirect stdin to /dev/null" do
      @daemon.invoke("keep_stdio_open_true_stdin", @object).should == "reading from stdin"
    end

    it "does not close open files" do
      @daemon.invoke("keep_stdio_open_files", @object).should == "false"
    end
  end

  describe "Process.daemon" do
    before :each do
      @invoke_dir = Dir.pwd
      @daemon = ProcessSpecs::Daemonizer.new
    end

    after :each do
      rm_r @daemon.input, @daemon.data if @daemon
    end

    it "returns 0" do
      @daemon.invoke("return_value").should == "0"
    end

    it "has a different PID after daemonizing" do
      parent, daemon = @daemon.invoke("pid").split(":")
      parent.should_not == daemon
    end

    it "has a different process group after daemonizing" do
      parent, daemon = @daemon.invoke("process_group").split(":")
      parent.should_not == daemon
    end

    it "does not run existing at_exit handlers when daemonizing" do
      @daemon.invoke("daemonizing_at_exit").should == "not running at_exit"
    end

    it "runs at_exit handlers when the daemon exits" do
      @daemon.invoke("daemon_at_exit").should == "running at_exit"
    end

    it "changes directory to the root directory if the first argument is not given" do
      @daemon.invoke("stay_in_dir").should == "/"
    end

    it "changes directory to the root directory if the first argument is false" do
      @daemon.invoke("stay_in_dir", [false]).should == "/"
    end

    it "changes directory to the root directory if the first argument is nil" do
      @daemon.invoke("stay_in_dir", [nil]).should == "/"
    end

    it "does not change to the root directory if the first argument is true" do
      @daemon.invoke("stay_in_dir", [true]).should == @invoke_dir
    end

    it "does not change to the root directory if the first argument is non-false" do
      @daemon.invoke("stay_in_dir", [:yes]).should == @invoke_dir
    end

    describe "when the second argument is not given" do
      it_behaves_like :process_daemon_keep_stdio_open_false, nil, [false]
    end

    describe "when the second argument is false" do
      it_behaves_like :process_daemon_keep_stdio_open_false, nil, [false, false]
    end

    describe "when the second argument is nil" do
      it_behaves_like :process_daemon_keep_stdio_open_false, nil, [false, nil]
    end

    describe "when the second argument is true" do
      it_behaves_like :process_daemon_keep_stdio_open_true, nil, [false, true]
    end

    describe "when the second argument is non-false" do
      it_behaves_like :process_daemon_keep_stdio_open_true, nil, [false, :yes]
    end
  end
end

platform_is :windows do
  describe "Process.daemon" do
    it "raises a NotImplementedError" do
      lambda {
        Process.daemon
      }.should raise_error(NotImplementedError)
    end
  end
end
