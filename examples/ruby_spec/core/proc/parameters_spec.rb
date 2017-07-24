require File.expand_path('../../../spec_helper', __FILE__)

describe "Proc#parameters" do
  it "returns an empty Array for a proc expecting no parameters" do
    proc {}.parameters.should == []
  end

  it "returns an Array of Arrays for a proc expecting parameters" do
    p = proc {|x| }
    p.parameters.should be_an_instance_of(Array)
    p.parameters.first.should be_an_instance_of(Array)
  end

  it "sets the first element of each sub-Array to :opt for optional arguments" do
    proc {|x| }.parameters.first.first.should == :opt
    proc {|y,*x| }.parameters.first.first.should == :opt
  end

  it "regards named parameters in procs as optional" do
    proc {|x| }.parameters.first.first.should == :opt
  end

  it "regards optional keyword parameters in procs as optional" do
    proc {|x: :y| }.parameters.first.first.should == :key
  end

  it "regards parameters with default values as optional" do
    lambda {|x=1| }.parameters.first.first.should == :opt
    proc {|x=1| }.parameters.first.first.should == :opt
  end

  it "sets the first element of each sub-Array to :req for required arguments" do
    lambda {|x,y=[]| }.parameters.first.first.should == :req
    lambda {|y,*x| }.parameters.first.first.should == :req
  end

  it "regards named parameters in lambdas as required" do
    lambda {|x| }.parameters.first.first.should == :req
  end

  it "regards keyword parameters in lambdas as required" do
    eval("lambda {|x:| }").parameters.first.first.should == :keyreq
  end

  it "sets the first element of each sub-Array to :rest for parameters prefixed with asterisks" do
    lambda {|*x| }.parameters.first.first.should == :rest
    lambda {|x,*y| }.parameters.last.first.should == :rest
    proc {|*x| }.parameters.first.first.should == :rest
    proc {|x,*y| }.parameters.last.first.should == :rest
  end

  it "sets the first element of each sub-Array to :keyrest for parameters prefixed with double asterisks" do
    lambda {|**x| }.parameters.first.first.should == :keyrest
    lambda {|x,**y| }.parameters.last.first.should == :keyrest
    proc {|**x| }.parameters.first.first.should == :keyrest
    proc {|x,**y| }.parameters.last.first.should == :keyrest
  end

  it "sets the first element of each sub-Array to :block for parameters prefixed with ampersands" do
    lambda {|&x| }.parameters.first.first.should == :block
    lambda {|x,&y| }.parameters.last.first.should == :block
    proc {|&x| }.parameters.first.first.should == :block
    proc {|x,&y| }.parameters.last.first.should == :block
  end

  it "sets the second element of each sub-Array to the name of the argument" do
    lambda {|x| }.parameters.first.last.should == :x
    lambda {|x=Math::PI| }.parameters.first.last.should == :x
    lambda {|an_argument, glark, &foo| }.parameters[1].last.should == :glark
    lambda {|*rest| }.parameters.first.last.should == :rest
    lambda {|&block| }.parameters.first.last.should == :block
    proc {|x| }.parameters.first.last.should == :x
    proc {|x=Math::PI| }.parameters.first.last.should == :x
    proc {|an_argument, glark, &foo| }.parameters[1].last.should == :glark
    proc {|*rest| }.parameters.first.last.should == :rest
    proc {|&block| }.parameters.first.last.should == :block
  end

  it "ignores unnamed rest args" do
    lambda {|x,|}.parameters.should == [[:req, :x]]
  end

  it "adds nameless rest arg for \"star\" argument" do
    lambda {|x,*|}.parameters.should == [[:req, :x], [:rest]]
  end

  it "does not add locals as block options with a block and splat" do
    lambda do |*args, &blk|
      local_is_not_parameter = {}
    end.parameters.should == [[:rest, :args], [:block, :blk]]
    proc do |*args, &blk|
      local_is_not_parameter = {}
    end.parameters.should == [[:rest, :args], [:block, :blk]]
  end
end
