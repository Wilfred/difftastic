require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../shared/kernel/raise', __FILE__)

describe "Thread#raise" do
  it "ignores dead threads" do
    t = Thread.new { :dead }
    Thread.pass while t.alive?
    lambda {t.raise("Kill the thread")}.should_not raise_error
    lambda {t.value}.should_not raise_error
  end
end

describe "Thread#raise on a sleeping thread" do
  before :each do
    ScratchPad.clear
    @thr = ThreadSpecs.sleeping_thread
    Thread.pass while @thr.status and @thr.status != "sleep"
  end

  after :each do
    @thr.kill
    @thr.join
  end

  it "raises a RuntimeError if no exception class is given" do
    @thr.raise
    Thread.pass while @thr.status
    ScratchPad.recorded.should be_kind_of(RuntimeError)
  end

  it "raises the given exception" do
    @thr.raise Exception
    Thread.pass while @thr.status
    ScratchPad.recorded.should be_kind_of(Exception)
  end

  it "raises the given exception with the given message" do
    @thr.raise Exception, "get to work"
    Thread.pass while @thr.status
    ScratchPad.recorded.should be_kind_of(Exception)
    ScratchPad.recorded.message.should == "get to work"
  end

  it "raises the given exception and the backtrace is the one of the interrupted thread" do
    @thr.raise Exception
    Thread.pass while @thr.status
    ScratchPad.recorded.should be_kind_of(Exception)
    ScratchPad.recorded.backtrace[0].should include("sleep")
  end

  it "is captured and raised by Thread#value" do
    t = Thread.new do
      sleep
    end

    ThreadSpecs.spin_until_sleeping(t)

    t.raise
    lambda { t.value }.should raise_error(RuntimeError)
  end

  it "raises a RuntimeError when called with no arguments inside rescue" do
    t = Thread.new do
      begin
        1/0
      rescue ZeroDivisionError
        sleep
      end
    end
    begin
      raise RangeError
    rescue
      ThreadSpecs.spin_until_sleeping(t)
      t.raise
    end
    lambda {t.value}.should raise_error(RuntimeError)
  end
end

describe "Thread#raise on a running thread" do
  before :each do
    ScratchPad.clear
    ThreadSpecs.clear_state

    @thr = ThreadSpecs.running_thread
    Thread.pass until ThreadSpecs.state == :running
  end

  after :each do
    @thr.kill
    @thr.join
  end

  it "raises a RuntimeError if no exception class is given" do
    @thr.raise
    Thread.pass while @thr.status
    ScratchPad.recorded.should be_kind_of(RuntimeError)
  end

  it "raises the given exception" do
    @thr.raise Exception
    Thread.pass while @thr.status
    ScratchPad.recorded.should be_kind_of(Exception)
  end

  it "raises the given exception with the given message" do
    @thr.raise Exception, "get to work"
    Thread.pass while @thr.status
    ScratchPad.recorded.should be_kind_of(Exception)
    ScratchPad.recorded.message.should == "get to work"
  end

  it "can go unhandled" do
    t = Thread.new do
      loop { Thread.pass }
    end

    t.raise
    lambda {t.value}.should raise_error(RuntimeError)
  end

  it "raises the given argument even when there is an active exception" do
    raised = false
    t = Thread.new do
      begin
        1/0
      rescue ZeroDivisionError
        raised = true
        loop { Thread.pass }
      end
    end
    begin
      raise "Create an active exception for the current thread too"
    rescue
      Thread.pass until raised
      t.raise RangeError
      lambda {t.value}.should raise_error(RangeError)
    end
  end

  it "raises a RuntimeError when called with no arguments inside rescue" do
    raised = false
    t = Thread.new do
      begin
        1/0
      rescue ZeroDivisionError
        raised = true
        loop { }
      end
    end
    begin
      raise RangeError
    rescue
      Thread.pass until raised
      t.raise
    end
    lambda {t.value}.should raise_error(RuntimeError)
  end
end

describe "Thread#raise on same thread" do
  it_behaves_like :kernel_raise, :raise, Thread.current

  it "raises a RuntimeError when called with no arguments inside rescue" do
    t = Thread.new do
      begin
        1/0
      rescue ZeroDivisionError
        Thread.current.raise
      end
    end
    lambda {t.value}.should raise_error(RuntimeError)
  end
end
