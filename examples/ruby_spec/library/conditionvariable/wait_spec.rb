require File.expand_path('../../../spec_helper', __FILE__)
require 'thread'

describe "ConditionVariable#wait" do
  it "returns self" do
    m = Mutex.new
    cv = ConditionVariable.new
    in_synchronize = false

    th = Thread.new do
      m.synchronize do
        in_synchronize = true
        cv.wait(m).should == cv
      end
    end

    # wait for m to acquire the mutex
    Thread.pass until in_synchronize
    # wait until th is sleeping (ie waiting)
    Thread.pass while th.status and th.status != "sleep"

    m.synchronize { cv.signal }
    th.join
  end
end
