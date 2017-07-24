require File.expand_path('../../../spec_helper', __FILE__)

with_feature :fiber do
  describe "Fiber.yield" do
    it "passes control to the Fiber's caller" do
      step = 0
      fiber = Fiber.new { step = 1; Fiber.yield; step = 2; Fiber.yield; step = 3 }
      fiber.resume
      step.should == 1
      fiber.resume
      step.should == 2
    end

    it "returns its arguments to the caller" do
      fiber = Fiber.new { true; Fiber.yield :glark; true }
      fiber.resume.should == :glark
      fiber.resume
    end

    it "returns nil to the caller if given no arguments" do
      fiber = Fiber.new { true; Fiber.yield; true }
      fiber.resume.should be_nil
      fiber.resume
    end

    it "returns to the Fiber the value of the #resume call that invoked it" do
      fiber = Fiber.new { Fiber.yield.should == :caller }
      fiber.resume
      fiber.resume :caller
    end

    it "does not propagate or reraise a rescued exception" do
      fiber = Fiber.new do
        begin
          raise "an error in a Fiber"
        rescue
          Fiber.yield :first
        end

        :second
      end

      fiber.resume.should == :first
      fiber.resume.should == :second
    end

    it "raises a FiberError if called from the root Fiber" do
      lambda{ Fiber.yield }.should raise_error(FiberError)
    end
  end
end
