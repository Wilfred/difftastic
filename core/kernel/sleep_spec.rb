require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#sleep" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:sleep)
  end

  it "accepts a Float" do
    sleep(0.1).should be_close(0, 2)
  end

  it "accepts a Fixnum" do
    sleep(0).should be_close(0, 2)
  end

  it "accepts a Rational" do
    sleep(Rational(1, 9)).should be_close(0, 2)
  end

  it "raises an ArgumentError when passed a negative duration" do
    lambda { sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { sleep(-1) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError when passed nil" do
    lambda { sleep(nil)   }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end

  it "pauses execution indefinitely if not given a duration" do
    running = false
    t = Thread.new do
      running = true
      sleep
      5
    end

    Thread.pass until running
    Thread.pass while t.status and t.status != "sleep"

    t.wakeup
    t.value.should == 5
  end
end

describe "Kernel.sleep" do
  it "needs to be reviewed for spec completeness"
end
