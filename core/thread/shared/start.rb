describe :thread_start, shared: true do
  before :each do
    ScratchPad.clear
  end

  it "raises an ArgumentError if not passed a block" do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end

  it "spawns a new Thread running the block" do
    run = false
    t = Thread.send(@method) { run = true }
    t.should be_kind_of(Thread)
    t.join

    run.should be_true
  end

  it "respects Thread subclasses" do
    c = Class.new(Thread)
    t = c.send(@method) { }
    t.should be_kind_of(c)

    t.join
  end

  it "does not call #initialize" do
    c = Class.new(Thread) do
      def initialize
        ScratchPad.record :bad
      end
    end

    t = c.send(@method) { }
    t.join

    ScratchPad.recorded.should == nil
  end
end
