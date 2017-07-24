require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#warn" do
  before :each do
    @before_verbose = $VERBOSE
    @before_separator = $/
  end

  after :each do
    $VERBOSE = @before_verbose
    $/ = @before_separator
  end

  it "is a private method" do
    Kernel.should have_private_instance_method(:warn)
  end

  it "requires multiple arguments" do
    Kernel.method(:warn).arity.should < 0
  end

  it "does not append line-end if last character is line-end" do
    lambda {
      $VERBOSE = true
      warn("this is some simple text with line-end\n")
    }.should output(nil, "this is some simple text with line-end\n")
  end

  it "calls #write on $stderr if $VERBOSE is true" do
    lambda {
      $VERBOSE = true
      warn("this is some simple text")
    }.should output(nil, "this is some simple text\n")
  end

  it "calls #write on $stderr if $VERBOSE is false" do
    lambda {
      $VERBOSE = false
      warn("this is some simple text")
    }.should output(nil, "this is some simple text\n")
  end

  it "does not call #write on $stderr if $VERBOSE is nil" do
    lambda {
      $VERBOSE = nil
      warn("this is some simple text")
    }.should output(nil, "")
  end

  it "writes each argument on a line when passed multiple arguments" do
    lambda {
      $VERBOSE = true
      warn("line 1", "line 2")
    }.should output(nil, "line 1\nline 2\n")
  end

  it "writes each array element on a line when passes an array" do
    lambda {
      $VERBOSE = true
      warn(["line 1", "line 2"])
    }.should output(nil, "line 1\nline 2\n")
  end

  it "does not write strings when passed no arguments" do
    lambda {
      $VERBOSE = true
      warn
    }.should output("", "")
  end

  it "writes the default record separator and NOT $/ to $stderr after the warning message" do
    lambda {
      $VERBOSE = true
      $/ = 'rs'
      warn("")
    }.should output(nil, /\n/)
  end
end
