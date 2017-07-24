require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread#abort_on_exception" do
  before do
    ThreadSpecs.clear_state
    @thread = Thread.new { Thread.pass until ThreadSpecs.state == :exit }
  end

  after do
    ThreadSpecs.state = :exit
    @thread.join
  end

  it "is false by default" do
    @thread.abort_on_exception.should be_false
  end

  it "returns true when #abort_on_exception= is passed true" do
    @thread.abort_on_exception = true
    @thread.abort_on_exception.should be_true
  end
end

describe :thread_abort_on_exception, shared: true do
  before do
    @thread = Thread.new do
      Thread.pass until ThreadSpecs.state == :run
      raise RuntimeError, "Thread#abort_on_exception= specs"
    end
  end

  it "causes the main thread to raise the exception raised in the thread" do
    begin
      ScratchPad << :before

      @thread.abort_on_exception = true if @object
      lambda do
        ThreadSpecs.state = :run
        # Wait for the main thread to be interrupted
        sleep
      end.should raise_error(RuntimeError, "Thread#abort_on_exception= specs")

      ScratchPad << :after
    rescue Exception => e
      ScratchPad << [:rescue, e]
    end

    ScratchPad.recorded.should == [:before, :after]
  end
end

describe "Thread#abort_on_exception=" do
  describe "when enabled and the thread dies due to an exception" do
    before do
      ScratchPad.record []
      ThreadSpecs.clear_state
      @stderr, $stderr = $stderr, IOStub.new
    end

    after do
      $stderr = @stderr
    end

    it_behaves_like :thread_abort_on_exception, nil, true
  end
end

describe "Thread.abort_on_exception" do
  before do
    @abort_on_exception = Thread.abort_on_exception
  end

  after do
     Thread.abort_on_exception = @abort_on_exception
  end

  it "is false by default" do
    Thread.abort_on_exception.should == false
  end

  it "returns true when .abort_on_exception= is passed true" do
    Thread.abort_on_exception = true
    Thread.abort_on_exception.should be_true
  end
end

describe "Thread.abort_on_exception=" do
  describe "when enabled and a non-main thread dies due to an exception" do
    before :each do
      ScratchPad.record []
      ThreadSpecs.clear_state
      @stderr, $stderr = $stderr, IOStub.new

      @abort_on_exception = Thread.abort_on_exception
      Thread.abort_on_exception = true
    end

    after :each do
      Thread.abort_on_exception = @abort_on_exception
      $stderr = @stderr
    end

    it_behaves_like :thread_abort_on_exception, nil, false
  end
end
