require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread#keys" do
  it "returns an array of the names of the thread-local variables as symbols" do
    th = Thread.new do
      Thread.current["cat"] = 'woof'
      Thread.current[:cat] = 'meow'
      Thread.current[:dog] = 'woof'
    end
    th.join
    th.keys.sort_by {|x| x.to_s}.should == [:cat,:dog]
  end

  it "is not shared across fibers" do
    fib = Fiber.new do
      Thread.current[:val1] = 1
      Fiber.yield
      Thread.current.keys.should include(:val1)
      Thread.current.keys.should_not include(:val2)
    end
    Thread.current.keys.should_not include(:val1)
    fib.resume
    Thread.current[:val2] = 2
    fib.resume
    Thread.current.keys.should include(:val2)
    Thread.current.keys.should_not include(:val1)
  end

  it "stores a local in another thread when in a fiber" do
    fib = Fiber.new do
      t = Thread.new do
        sleep
        Thread.current.keys.should include(:value)
      end

      Thread.pass while t.status and t.status != "sleep"
      t[:value] = 1
      t.wakeup
      t.join
    end
    fib.resume
  end
end
