require File.expand_path('../../../spec_helper', __FILE__)

with_feature :fiber_library do
  require 'fiber'

  describe "Fiber#resume" do
    it "raises a FiberError if the Fiber has transfered control to another Fiber" do
      fiber1 = Fiber.new { true }
      fiber2 = Fiber.new { fiber1.transfer; Fiber.yield }
      fiber2.resume
      lambda { fiber2.resume }.should raise_error(FiberError)
    end
  end
end
