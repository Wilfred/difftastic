require File.expand_path('../../../spec_helper', __FILE__)

describe "Mutex#locked?" do
  it "returns true if locked" do
    m = Mutex.new
    m.lock
    m.locked?.should be_true
  end

  it "returns false if unlocked" do
    m = Mutex.new
    m.locked?.should be_false
  end

  it "returns the status of the lock" do
    m1 = Mutex.new
    m2 = Mutex.new

    m2.lock # hold th with only m1 locked
    m1_locked = false

    th = Thread.new do
      m1.lock
      m1_locked = true
      m2.lock
    end

    Thread.pass until m1_locked

    m1.locked?.should be_true
    m2.unlock # release th
    th.join
    # A Thread releases its locks upon termination
    m1.locked?.should be_false
  end
end
