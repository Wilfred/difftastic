require File.expand_path('../../../spec_helper', __FILE__)

describe "Mutex#owned?" do
  describe "when unlocked" do
    it "returns false" do
      m = Mutex.new
      m.owned?.should be_false
    end
  end

  describe "when locked by the current thread" do
    it "returns true" do
      m = Mutex.new
      m.lock
      m.owned?.should be_true
    end
  end

  describe "when locked by another thread" do
    before :each do
      @checked = false
    end

    after :each do
      @checked = true
      @th.join
    end

    it "returns false" do
      m = Mutex.new
      locked = false

      @th = Thread.new do
        m.lock
        locked = true
        Thread.pass until @checked
      end

      Thread.pass until locked
      m.owned?.should be_false
    end
  end
end
