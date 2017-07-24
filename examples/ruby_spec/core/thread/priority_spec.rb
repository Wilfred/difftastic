require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread#priority" do
  before do
    @current_priority = Thread.current.priority
    ThreadSpecs.clear_state
    @thread = Thread.new { Thread.pass until ThreadSpecs.state == :exit }
  end

  after do
    ThreadSpecs.state = :exit
    @thread.join
  end

  it "inherits the priority of the current thread while running" do
    @thread.alive?.should be_true
    @thread.priority.should == @current_priority
  end

  it "maintain the priority of the current thread after death" do
    ThreadSpecs.state = :exit
    @thread.join
    @thread.alive?.should be_false
    @thread.priority.should == @current_priority
  end

  it "returns an integer" do
    @thread.priority.should be_kind_of(Integer)
  end
end

describe "Thread#priority=" do
  before do
    ThreadSpecs.clear_state
    @thread = Thread.new {}
  end

  after do
    @thread.join
  end

  describe "when set with an integer" do
    it "returns an integer" do
      value = (@thread.priority = 3)
      value.should == 3
    end

    it "clamps the priority to -3..3" do
      @thread.priority = 42
      @thread.priority.should == 3
      @thread.priority = -42
      @thread.priority.should == -3
    end
  end

  describe "when set with a non-integer" do
    it "raises a type error" do
      lambda{ @thread.priority = Object.new }.should raise_error(TypeError)
    end
  end

  it "sets priority even when the thread has died" do
    @thread.join
    @thread.priority = 3
    @thread.priority.should == 3
  end
end
