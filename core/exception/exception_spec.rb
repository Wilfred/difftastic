require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../shared/new', __FILE__)

describe "Exception.exception" do
  it_behaves_like(:exception_new, :exception)
end

describe "Exception" do
  it "is a Class" do
    Exception.should be_kind_of(Class)
  end

  it "is a superclass of NoMemoryError" do
    Exception.should be_ancestor_of(NoMemoryError)
  end

  it "is a superclass of ScriptError" do
    Exception.should be_ancestor_of(ScriptError)
  end

  it "is a superclass of SignalException" do
    Exception.should be_ancestor_of(SignalException)
  end

  it "is a superclass of Interrupt" do
    SignalException.should be_ancestor_of(Interrupt)
  end

  it "is a superclass of StandardError" do
    Exception.should be_ancestor_of(StandardError)
  end

  it "is a superclass of SystemExit" do
    Exception.should be_ancestor_of(SystemExit)
  end

  it "is a superclass of SystemStackError" do
    Exception.should be_ancestor_of(SystemStackError)
  end

  it "is a superclass of SecurityError" do
    Exception.should be_ancestor_of(SecurityError)
  end

  it "is a superclass of EncodingError" do
    Exception.should be_ancestor_of(EncodingError)
  end
end

describe "Exception#exception" do
  it "returns self when passed no argument" do
    e = RuntimeError.new
    e.should == e.exception
  end

  it "returns self when passed self as an argument" do
    e = RuntimeError.new
    e.should == e.exception(e)
  end

  it "returns an exception of the same class as self with the message given as argument" do
    e = RuntimeError.new
    e2 = e.exception("message")
    e2.should be_an_instance_of(RuntimeError)
    e2.message.should == "message"
  end

  class CustomArgumentError < StandardError
    attr_reader :val
    def initialize(val)
      @val = val
    end
  end

  it "returns an exception of the same class as self with the message given as argument, but without reinitializing" do
    e = CustomArgumentError.new(:boom)
    e2 = e.exception("message")
    e2.should be_an_instance_of(CustomArgumentError)
    e2.val.should == :boom
    e2.message.should == "message"
  end
end
