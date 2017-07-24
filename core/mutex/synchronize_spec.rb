require File.expand_path('../../../spec_helper', __FILE__)

describe "Mutex#synchronize" do
  it "wraps the lock/unlock pair in an ensure" do
    m1 = Mutex.new
    m2 = Mutex.new
    m2.lock
    synchronized = false

    th = Thread.new do
      lambda do
        m1.synchronize do
          synchronized = true
          m2.lock
          raise Exception
        end
      end.should raise_error(Exception)
    end

    Thread.pass until synchronized

    m1.locked?.should be_true
    m2.unlock
    th.join
    m1.locked?.should be_false
  end
end
