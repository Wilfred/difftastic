require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#`" do
  before :each do
    @original_external = Encoding.default_external
  end

  after :each do
    Encoding.default_external = @original_external
  end

  it "is a private method" do
    Kernel.should have_private_instance_method(:`)
  end

  it "returns the standard output of the executed sub-process" do
    ip = 'world'
    `echo disc #{ip}`.should == "disc world\n"
  end

  it "lets the standard error stream pass through to the inherited stderr" do
    cmd = ruby_cmd('STDERR.print "error stream"')
    lambda {
      `#{cmd}`.should == ""
    }.should output_to_fd("error stream", STDERR)
  end

  it "produces a String in the default external encoding" do
    Encoding.default_external = Encoding::SHIFT_JIS
    `echo disc`.encoding.should equal(Encoding::SHIFT_JIS)
  end

  it "raises an Errno::ENOENT if the command is not executable" do
    lambda { `nonexistent_command` }.should raise_error(Errno::ENOENT)
  end

  platform_is_not :windows do
    it "sets $? to the exit status of the executed sub-process" do
      ip = 'world'
      `echo disc #{ip}`
      $?.should be_kind_of(Process::Status)
      $?.stopped?.should == false
      $?.exited?.should == true
      $?.exitstatus.should == 0
      $?.success?.should == true
      `echo disc #{ip}; exit 99`
      $?.should be_kind_of(Process::Status)
      $?.stopped?.should == false
      $?.exited?.should == true
      $?.exitstatus.should == 99
      $?.success?.should == false
    end
  end

  platform_is :windows do
    it "sets $? to the exit status of the executed sub-process" do
      ip = 'world'
      `echo disc #{ip}`
      $?.should be_kind_of(Process::Status)
      $?.stopped?.should == false
      $?.exited?.should == true
      $?.exitstatus.should == 0
      $?.success?.should == true
      `echo disc #{ip}& exit 99`
      $?.should be_kind_of(Process::Status)
      $?.stopped?.should == false
      $?.exited?.should == true
      $?.exitstatus.should == 99
      $?.success?.should == false
    end
  end
end

describe "Kernel.`" do
  it "tries to convert the given argument to String using #to_str" do
    (obj = mock('echo test')).should_receive(:to_str).and_return("echo test")
    Kernel.`(obj).should == "test\n"  #` fix vim syntax highlighting
  end
end
