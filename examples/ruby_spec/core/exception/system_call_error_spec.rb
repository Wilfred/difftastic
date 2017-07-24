require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "SystemCallError" do
  before :each do
    ScratchPad.clear
  end

  it "can be subclassed" do
    ExceptionSpecs::SCESub = Class.new(SystemCallError) do
      def initialize
        ScratchPad.record :initialize
      end
    end

    exc = ExceptionSpecs::SCESub.new
    ScratchPad.recorded.should equal(:initialize)
    exc.should be_an_instance_of(ExceptionSpecs::SCESub)
  end
end

describe "SystemCallError.new" do
  it "requires at least one argument" do
    lambda { SystemCallError.new }.should raise_error(ArgumentError)
  end

  it "accepts single Fixnum argument as errno" do
    SystemCallError.new(-2**24).errno.should == -2**24
    SystemCallError.new(42).errno.should == 42
    SystemCallError.new(2**24).errno.should == 2**24
  end

  it "constructs the appropriate Errno class" do
    # EINVAL should be more or less mortable across the platforms,
    # so let's use it then.
    SystemCallError.new(22).should be_kind_of(SystemCallError)
    SystemCallError.new(22).should be_an_instance_of(Errno::EINVAL)
    SystemCallError.new(2**28).should be_an_instance_of(SystemCallError)
  end

  it "accepts an optional custom message preceding the errno" do
    exc = SystemCallError.new("custom message", 22)
    exc.should be_an_instance_of(Errno::EINVAL)
    exc.errno.should == 22
    exc.message.should == "Invalid argument - custom message"
  end

  it "accepts an optional third argument specifying the location" do
    exc = SystemCallError.new("custom message", 22, "location")
    exc.should be_an_instance_of(Errno::EINVAL)
    exc.errno.should == 22
    exc.message.should == "Invalid argument @ location - custom message"
  end

  it "returns an arity of -1 for the initialize method" do
    SystemCallError.instance_method(:initialize).arity.should == -1
  end
end

describe "SystemCallError#errno" do
  it "returns nil when no errno given" do
    SystemCallError.new("message").errno.should == nil
  end

  it "returns the errno given as optional argument to new" do
    SystemCallError.new("message", -2**20).errno.should == -2**20
    SystemCallError.new("message", -1).errno.should == -1
    SystemCallError.new("message", 0).errno.should == 0
    SystemCallError.new("message", 1).errno.should == 1
    SystemCallError.new("message", 42).errno.should == 42
    SystemCallError.new("message", 2**20).errno.should == 2**20
  end
end

describe "SystemCallError#message" do
  it "returns the default message when no message is given" do
    platform_is :aix do
      SystemCallError.new(2**28).message.should =~ /Error .*occurred/i
    end
    platform_is_not :aix do
      SystemCallError.new(2**28).message.should =~ /Unknown error/i
    end
  end

  it "returns the message given as an argument to new" do
    SystemCallError.new("message", 1).message.should =~ /message/
    SystemCallError.new("XXX").message.should =~ /XXX/
  end
end
