require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe :proc_equal, shared: true do
  it "is a public method" do
    Proc.should have_public_instance_method(@method, false)
  end

  it "returns true if self and other are the same object" do
    p = proc { :foo }
    p.send(@method, p).should be_true

    p = Proc.new { :foo }
    p.send(@method, p).should be_true

    p = lambda { :foo }
    p.send(@method, p).should be_true
  end

  it "returns true if other is a dup of the original" do
    p = proc { :foo }
    p.send(@method, p.dup).should be_true

    p = Proc.new { :foo }
    p.send(@method, p.dup).should be_true

    p = lambda { :foo }
    p.send(@method, p.dup).should be_true
  end

  # identical here means the same method invocation.
  it "returns false when bodies are the same but capture env is not identical" do
    a = ProcSpecs.proc_for_1
    b = ProcSpecs.proc_for_1

    a.send(@method, b).should be_false
  end

  it "returns true if both procs have the same body and environment" do
    p = proc { :foo }
    p2 = proc { :foo }
    p.send(@method, p2).should be_true
  end

  it "returns true if both lambdas with the same body and environment" do
    x = lambda { :foo }
    x2 = lambda { :foo }
    x.send(@method, x2).should be_true
  end

  it "returns true if both different kinds of procs with the same body and env" do
    p = lambda { :foo }
    p2 = proc { :foo }
    p.send(@method, p2).should be_true

    x = proc { :bar }
    x2 = lambda { :bar }
    x.send(@method, x2).should be_true
  end

  it "returns false if other is not a Proc" do
    p = proc { :foo }
    p.send(@method, []).should be_false

    p = Proc.new { :foo }
    p.send(@method, Object.new).should be_false

    p = lambda { :foo }
    p.send(@method, :foo).should be_false
  end

  it "returns false if self and other are both procs but have different bodies" do
    p = proc { :bar }
    p2 = proc { :foo }
    p.send(@method, p2).should be_false
  end

  it "returns false if self and other are both lambdas but have different bodies" do
    p = lambda { :foo }
    p2 = lambda { :bar }
    p.send(@method, p2).should be_false
  end
end

describe :proc_equal_undefined, shared: true do
  it "is not defined" do
    Proc.should_not have_instance_method(@method, false)
  end

  it "returns false if other is a dup of the original" do
    p = proc { :foo }
    p.send(@method, p.dup).should be_false

    p = Proc.new { :foo }
    p.send(@method, p.dup).should be_false

    p = lambda { :foo }
    p.send(@method, p.dup).should be_false
  end
end
