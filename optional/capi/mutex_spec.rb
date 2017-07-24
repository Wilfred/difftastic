require File.expand_path('../spec_helper', __FILE__)

load_extension("mutex")

describe "C-API Mutex functions" do
  before :each do
    @s = CApiMutexSpecs.new
    @m = Mutex.new
  end

  describe "rb_mutex_new" do
    it "creates a new mutex" do
      @s.rb_mutex_new.should be_an_instance_of(Mutex)
    end
  end

  describe "rb_mutex_locked_p" do
    it "returns false if the mutex is not locked" do
      @s.rb_mutex_locked_p(@m).should be_false
    end

    it "returns true if the mutex is locked" do
      @m.lock
      @s.rb_mutex_locked_p(@m).should be_true
    end
  end

  describe "rb_mutex_trylock" do
    it "locks the mutex if not locked" do
      @s.rb_mutex_trylock(@m).should be_true
      @m.locked?.should be_true
    end

    it "returns false if the mutex is already locked" do
      @m.lock
      @s.rb_mutex_trylock(@m).should be_false
      @m.locked?.should be_true
    end
  end

  describe "rb_mutex_lock" do
    it "returns when the mutex isn't locked" do
      @s.rb_mutex_lock(@m).should == @m
      @m.locked?.should be_true
    end

    it "throws an exception when already locked in the same thread" do
      @m.lock
      lambda { @s.rb_mutex_lock(@m) }.should raise_error(ThreadError)
      @m.locked?.should be_true
    end
  end

  describe "rb_mutex_unlock" do
    it "raises an exception when not locked" do
      lambda { @s.rb_mutex_unlock(@m) }.should raise_error(ThreadError)
      @m.locked?.should be_false
    end

    it "unlocks the mutex when locked" do
      @m.lock
      @s.rb_mutex_unlock(@m).should == @m
      @m.locked?.should be_false
    end
  end

  describe "rb_mutex_sleep" do
    it "throws an exception when the mutex is not locked" do
      lambda { @s.rb_mutex_sleep(@m, 0.1) }.should raise_error(ThreadError)
      @m.locked?.should be_false
    end

    it "sleeps when the mutex is locked" do
      @m.lock
      start = Time.now
      @s.rb_mutex_sleep(@m, 0.1)
      (Time.now - start).should be_close(0.1, 0.2)
      @m.locked?.should be_true
    end
  end

  describe "rb_mutex_synchronize" do
    it "calls the function while the mutex is locked" do
      callback = lambda { @m.locked?.should be_true }
      @s.rb_mutex_synchronize(@m, callback)
    end
  end
end
