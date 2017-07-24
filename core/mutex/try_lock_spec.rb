require File.expand_path('../../../spec_helper', __FILE__)

describe "Mutex#try_lock" do
  describe "when unlocked" do
    it "returns true" do
      m = Mutex.new
      m.try_lock.should be_true
    end

    it "locks the mutex" do
      m = Mutex.new
      m.try_lock
      m.locked?.should be_true
    end
  end

  describe "when locked by the current thread" do
    it "returns false" do
      m = Mutex.new
      m.lock
      m.try_lock.should be_false
    end
  end

  describe "when locked by another thread" do
    it "returns false" do
      m = Mutex.new
      m.lock
      Thread.new { m.try_lock }.value.should be_false
    end
  end
end
