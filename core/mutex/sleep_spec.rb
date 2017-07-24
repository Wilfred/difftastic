require File.expand_path('../../../spec_helper', __FILE__)

describe "Mutex#sleep" do
  describe "when not locked by the current thread" do
    it "raises a ThreadError" do
      m = Mutex.new
      lambda { m.sleep }.should raise_error(ThreadError)
    end

    it "raises an ArgumentError if passed a negative duration" do
      m = Mutex.new
      lambda { m.sleep(-0.1) }.should raise_error(ArgumentError)
      lambda { m.sleep(-1) }.should raise_error(ArgumentError)
    end
  end

  it "raises an ArgumentError if passed a negative duration" do
    m = Mutex.new
    m.lock
    lambda { m.sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { m.sleep(-1) }.should raise_error(ArgumentError)
  end

  it "pauses execution for approximately the duration requested" do
    m = Mutex.new
    m.lock
    duration = 0.1
    start = Time.now
    m.sleep duration
    (Time.now - start).should be_close(duration, 0.2)
  end

  it "unlocks the mutex while sleeping" do
    m = Mutex.new
    locked = false
    th = Thread.new { m.lock; locked = true; m.sleep }
    Thread.pass until locked
    Thread.pass while th.status and th.status != "sleep"
    m.locked?.should be_false
    th.run
    th.join
  end

  it "relocks the mutex when woken" do
    m = Mutex.new
    m.lock
    m.sleep(0.01)
    m.locked?.should be_true
  end

  it "relocks the mutex when woken by an exception being raised" do
    m = Mutex.new
    locked = false
    th = Thread.new do
      m.lock
      locked = true
      begin
        m.sleep
      rescue Exception
        m.locked?
      end
    end
    Thread.pass until locked
    Thread.pass while th.status and th.status != "sleep"
    th.raise(Exception)
    th.value.should be_true
  end

  it "returns the rounded number of seconds asleep" do
    m = Mutex.new
    m.lock
    m.sleep(0.01).should be_kind_of(Integer)
  end
end
