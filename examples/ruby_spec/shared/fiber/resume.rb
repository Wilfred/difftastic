describe :fiber_resume, shared: true do
  it "can be invoked from the root Fiber" do
   fiber = Fiber.new { :fiber }
   fiber.send(@method).should == :fiber
  end

  it "raises a FiberError if invoked from a different Thread" do
    fiber = Fiber.new { }
    lambda do
      Thread.new do
        fiber.resume
      end.join
    end.should raise_error(FiberError)
    fiber.resume
  end

  it "passes control to the beginning of the block on first invocation" do
    invoked = false
    fiber = Fiber.new { invoked = true }
    fiber.send(@method)
    invoked.should be_true
  end

  it "returns the last value encountered on first invocation" do
    fiber = Fiber.new { 1+1; true }
    fiber.send(@method).should be_true
  end

  it "runs until the end of the block" do
    obj = mock('obj')
    obj.should_receive(:do).once
    fiber = Fiber.new { 1 + 2; a = "glark"; obj.do }
    fiber.send(@method)
  end

  it "runs until Fiber.yield" do
    obj = mock('obj')
    obj.should_not_receive(:do)
    fiber = Fiber.new { 1 + 2; Fiber.yield; obj.do }
    fiber.send(@method)
  end

  it "resumes from the last call to Fiber.yield on subsequent invocations" do
    fiber = Fiber.new { Fiber.yield :first; :second }
    fiber.send(@method).should == :first
    fiber.send(@method).should == :second
  end

  it "accepts any number of arguments" do
    fiber = Fiber.new { |a| }
    lambda { fiber.send(@method, *(1..10).to_a) }.should_not raise_error
  end

  it "sets the block parameters to its arguments on the first invocation" do
    first = mock('first')
    first.should_receive(:arg).with(:first).twice
    fiber = Fiber.new { |arg| first.arg arg; Fiber.yield; first.arg arg; }
    fiber.send(@method, :first)
    fiber.send(@method, :second)
  end

  it "raises a FiberError if the Fiber is dead" do
    fiber = Fiber.new { true }
    fiber.send(@method)
    lambda { fiber.send(@method) }.should raise_error(FiberError)
  end

  it "raises a LocalJumpError if the block includes a return statement" do
    fiber = Fiber.new { return; }
    lambda { fiber.send(@method) }.should raise_error(LocalJumpError)
  end

  it "raises a LocalJumpError if the block includes a break statement" do
    fiber = Fiber.new { break; }
    lambda { fiber.send(@method) }.should raise_error(LocalJumpError)
  end
end
