require File.expand_path('../../../spec_helper', __FILE__)

with_feature :fiber_library do
  require 'fiber'

  describe "Fiber#alive?" do
    it "returns true for a Fiber that hasn't had #resume called" do
      fiber = Fiber.new { true }
      fiber.alive?.should be_true
    end

    # FIXME: Better description?
    it "returns true for a Fiber that's yielded to the caller" do
      fiber = Fiber.new { Fiber.yield }
      fiber.resume
      fiber.alive?.should be_true
    end

    it "returns true when called from its Fiber" do
      fiber = Fiber.new { fiber.alive?.should be_true }
      fiber.resume
    end

    it "doesn't invoke the block associated with the Fiber" do
      offthehook = mock('do not call')
      offthehook.should_not_receive(:ring)
      fiber = Fiber.new { offthehook.ring }
      fiber.alive?
    end

    it "returns false for a Fiber that's dead" do
      fiber = Fiber.new { true }
      fiber.resume
      lambda { fiber.resume }.should raise_error(FiberError)
      fiber.alive?.should be_false
    end

    it "always returns false for a dead Fiber" do
      fiber = Fiber.new { true }
      fiber.resume
      lambda { fiber.resume }.should raise_error(FiberError)
      fiber.alive?.should be_false
      lambda { fiber.resume }.should raise_error(FiberError)
      fiber.alive?.should be_false
      fiber.alive?.should be_false
    end
  end
end
