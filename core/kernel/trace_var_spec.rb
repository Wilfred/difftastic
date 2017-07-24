require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#trace_var" do
  before :each do
    $Kernel_trace_var_global = nil
  end

  after :each do
    untrace_var :$Kernel_trace_var_global

    $Kernel_trace_var_global = nil
    $Kernel_trace_var_extra  = nil
  end

  it "is a private method" do
    Kernel.should have_private_instance_method(:trace_var)
  end

  it "hooks assignments to a global variable" do
    captured = nil

    trace_var :$Kernel_trace_var_global do |value|
      captured = value
    end

    $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end

  it "accepts a proc argument instead of a block" do
    captured = nil

    trace_var :$Kernel_trace_var_global, proc {|value| captured = value}

    $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end

  # String arguments should be evaluated in the context of the caller.
  it "accepts a String argument instead of a Proc or block" do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'

    $Kernel_trace_var_global = 'foo'

    $Kernel_trace_var_extra.should == true
  end

  it "raises ArgumentError if no block or proc is provided" do
    lambda do
      trace_var :$Kernel_trace_var_global
    end.should raise_error(ArgumentError)
  end
end
