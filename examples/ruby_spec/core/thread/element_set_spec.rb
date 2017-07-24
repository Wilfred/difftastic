require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread#[]=" do
  after :each do
    Thread.current[:value] = nil
  end

  it "raises a RuntimeError if the thread is frozen" do
    running = false
    t = Thread.new do
      Thread.pass until running
      t.freeze
      t[:foo] = "bar"
    end
    running = true
    lambda { t.join }.should raise_error(RuntimeError)
  end

  it "raises exceptions on the wrong type of keys" do
    lambda { Thread.current[nil] = true }.should raise_error(TypeError)
    lambda { Thread.current[5] = true }.should raise_error(TypeError)
  end

  it "is not shared across fibers" do
    fib = Fiber.new do
      Thread.current[:value] = 1
      Fiber.yield
      Thread.current[:value].should == 1
    end
    fib.resume
    Thread.current[:value].should be_nil
    Thread.current[:value] = 2
    fib.resume
    Thread.current[:value] = 2
  end

  it "stores a local in another thread when in a fiber" do
    fib = Fiber.new do
      t = Thread.new do
        sleep
        Thread.current[:value].should == 1
      end

      Thread.pass while t.status and t.status != "sleep"
      t[:value] = 1
      t.wakeup
      t.join
    end
    fib.resume
  end
end
