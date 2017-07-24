require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread.current" do
  it "returns a thread" do
    current = Thread.current
    current.should be_kind_of(Thread)
  end

  it "returns the current thread" do
    t = Thread.new { Thread.current }
    t.value.should equal(t)
    Thread.current.should_not equal(t.value)
  end
end
