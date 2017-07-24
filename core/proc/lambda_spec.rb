require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Proc#lambda?" do
  it "returns true if the Proc was created from a block with the lambda keyword" do
    lambda {}.lambda?.should be_true
  end

  it "returns false if the Proc was created from a block with the proc keyword" do
    proc {}.lambda?.should be_false
  end

  it "returns false if the Proc was created from a block with Proc.new" do
    Proc.new {}.lambda?.should be_false
  end

  it "is preserved when passing a Proc with & to the lambda keyword" do
    lambda(&lambda{}).lambda?.should be_true
    lambda(&proc{}).lambda?.should be_false
  end

  it "is preserved when passing a Proc with & to the proc keyword" do
    proc(&lambda{}).lambda?.should be_true
    proc(&proc{}).lambda?.should be_false
  end

  it "is preserved when passing a Proc with & to Proc.new" do
    Proc.new(&lambda{}).lambda?.should be_true
    Proc.new(&proc{}).lambda?.should be_false
  end

  it "returns false if the Proc was created from a block with &" do
    ProcSpecs.new_proc_from_amp{}.lambda?.should be_false
  end

  it "is preserved when the Proc was passed using &" do
    ProcSpecs.new_proc_from_amp(&lambda{}).lambda?.should be_true
    ProcSpecs.new_proc_from_amp(&proc{}).lambda?.should be_false
    ProcSpecs.new_proc_from_amp(&Proc.new{}).lambda?.should be_false
  end

  it "returns true for a Method converted to a Proc" do
    m = :foo.method(:to_s)
    m.to_proc.lambda?.should be_true
    ProcSpecs.new_proc_from_amp(&m).lambda?.should be_true
  end

  # [ruby-core:24127]
  it "is preserved when a Proc is curried" do
    lambda{}.curry.lambda?.should be_true
    proc{}.curry.lambda?.should be_false
    Proc.new{}.curry.lambda?.should be_false
  end

  it "is preserved when a curried Proc is called without enough arguments" do
    lambda{|x,y|}.curry.call(42).lambda?.should be_true
    proc{|x,y|}.curry.call(42).lambda?.should be_false
    Proc.new{|x,y|}.curry.call(42).lambda?.should be_false
  end
end
