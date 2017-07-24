require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread#join" do
  it "returns the thread when it is finished" do
    t = Thread.new {}
    t.join.should equal(t)
  end

  it "returns the thread when it is finished when given a timeout" do
    t = Thread.new {}
    t.join
    t.join(0).should equal(t)
  end

  it "coerces timeout to a Float if it is not nil" do
    t = Thread.new {}
    t.join
    t.join(0).should equal(t)
    t.join(0.0).should equal(t)
    t.join(nil).should equal(t)
    lambda { t.join(:foo) }.should raise_error TypeError
    lambda { t.join("bar") }.should raise_error TypeError
  end

  it "returns nil if it is not finished when given a timeout" do
    c = Channel.new
    t = Thread.new { c.receive }
    begin
      t.join(0).should == nil
    ensure
      c << true
    end
    t.join.should == t
  end

  it "accepts a floating point timeout length" do
    c = Channel.new
    t = Thread.new { c.receive }
    begin
      t.join(0.01).should == nil
    ensure
      c << true
    end
    t.join.should == t
  end

  it "raises any exceptions encountered in the thread body" do
    t = Thread.new { raise NotImplementedError.new("Just kidding") }
    lambda { t.join }.should raise_error(NotImplementedError)
  end

  it "returns the dead thread" do
    t = Thread.new { Thread.current.kill }
    t.join.should equal(t)
  end

  it "raises any uncaught exception encountered in ensure block" do
    t = ThreadSpecs.dying_thread_ensures { raise NotImplementedError.new("Just kidding") }
    lambda { t.join }.should raise_error(NotImplementedError)
  end
end
