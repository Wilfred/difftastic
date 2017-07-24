require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/rescue', __FILE__)

class SpecificExampleException < StandardError
end
class OtherCustomException < StandardError
end
class ArbitraryException < StandardError
end

exception_list = [SpecificExampleException, ArbitraryException]

describe "The rescue keyword" do
  before :each do
    ScratchPad.record []
  end

  it "can be used to handle a specific exception" do
    begin
      raise SpecificExampleException, "Raising this to be handled below"
    rescue SpecificExampleException
      :caught
    end.should == :caught
  end

  it "can capture the raised exception in a local variable" do
    begin
      raise SpecificExampleException, "some text"
    rescue SpecificExampleException => e
      e.message.should == "some text"
    end
  end

  it "can rescue multiple raised exceptions with a single rescue block" do
    [lambda{raise ArbitraryException}, lambda{raise SpecificExampleException}].map do |block|
      begin
        block.call
      rescue SpecificExampleException, ArbitraryException
        :caught
      end
    end.should == [:caught, :caught]
  end

  it "can rescue a splatted list of exceptions" do
    caught_it = false
    begin
      raise SpecificExampleException, "not important"
    rescue *exception_list
      caught_it = true
    end
    caught_it.should be_true
    caught = []
    [lambda{raise ArbitraryException}, lambda{raise SpecificExampleException}].each do |block|
      begin
        block.call
      rescue *exception_list
        caught << $!
      end
    end
    caught.size.should == 2
    exception_list.each do |exception_class|
      caught.map{|e| e.class}.should include(exception_class)
    end
  end

  it "can combine a splatted list of exceptions with a literal list of exceptions" do
    caught_it = false
    begin
      raise SpecificExampleException, "not important"
    rescue ArbitraryException, *exception_list
      caught_it = true
    end
    caught_it.should be_true
    caught = []
    [lambda{raise ArbitraryException}, lambda{raise SpecificExampleException}].each do |block|
      begin
        block.call
      rescue ArbitraryException, *exception_list
        caught << $!
      end
    end
    caught.size.should == 2
    exception_list.each do |exception_class|
      caught.map{|e| e.class}.should include(exception_class)
    end
  end

  it "will only rescue the specified exceptions when doing a splat rescue" do
    lambda do
      begin
        raise OtherCustomException, "not rescued!"
      rescue *exception_list
      end
    end.should raise_error(OtherCustomException)
  end

  it "will execute an else block only if no exceptions were raised" do
    result = begin
      ScratchPad << :one
    rescue
      ScratchPad << :does_not_run
    else
      ScratchPad << :two
      :val
    end
    result.should == :val
    ScratchPad.recorded.should == [:one, :two]
  end

  it "will execute an else block with ensure only if no exceptions were raised" do
    result = begin
      ScratchPad << :one
    rescue
      ScratchPad << :does_not_run
    else
      ScratchPad << :two
      :val
    ensure
      ScratchPad << :ensure
      :ensure_val
    end
    result.should == :val
    ScratchPad.recorded.should == [:one, :two, :ensure]
  end

  it "will execute an else block only if no exceptions were raised in a method" do
    result = RescueSpecs.begin_else(false)
    result.should == :val
    ScratchPad.recorded.should == [:one, :else_ran]
  end

  it "will execute an else block with ensure only if no exceptions were raised in a method" do
    result = RescueSpecs.begin_else_ensure(false)
    result.should == :val
    ScratchPad.recorded.should == [:one, :else_ran, :ensure_ran]
  end

  it "will execute an else block but use the outer scope return value in a method" do
    result = RescueSpecs.begin_else_return(false)
    result.should == :return_val
    ScratchPad.recorded.should == [:one, :else_ran, :outside_begin]
  end

  it "will execute an else block with ensure but use the outer scope return value in a method" do
    result = RescueSpecs.begin_else_return_ensure(false)
    result.should == :return_val
    ScratchPad.recorded.should == [:one, :else_ran, :ensure_ran, :outside_begin]
  end

  it "will not execute an else block if an exception was raised" do
    result = begin
      ScratchPad << :one
      raise "an error occurred"
    rescue
      ScratchPad << :two
      :val
    else
      ScratchPad << :does_not_run
    end
    result.should == :val
    ScratchPad.recorded.should == [:one, :two]
  end

  it "will not execute an else block with ensure if an exception was raised" do
    result = begin
      ScratchPad << :one
      raise "an error occurred"
    rescue
      ScratchPad << :two
      :val
    else
      ScratchPad << :does_not_run
    ensure
      ScratchPad << :ensure
      :ensure_val
    end
    result.should == :val
    ScratchPad.recorded.should == [:one, :two, :ensure]
  end

  it "will not execute an else block if an exception was raised in a method" do
    result = RescueSpecs.begin_else(true)
    result.should == :rescue_val
    ScratchPad.recorded.should == [:one, :rescue_ran]
  end

  it "will not execute an else block with ensure if an exception was raised in a method" do
    result = RescueSpecs.begin_else_ensure(true)
    result.should == :rescue_val
    ScratchPad.recorded.should == [:one, :rescue_ran, :ensure_ran]
  end

  it "will not execute an else block but use the outer scope return value in a method" do
    result = RescueSpecs.begin_else_return(true)
    result.should == :return_val
    ScratchPad.recorded.should == [:one, :rescue_ran, :outside_begin]
  end

  it "will not execute an else block with ensure but use the outer scope return value in a method" do
    result = RescueSpecs.begin_else_return_ensure(true)
    result.should == :return_val
    ScratchPad.recorded.should == [:one, :rescue_ran, :ensure_ran, :outside_begin]
  end

  it "will not rescue errors raised in an else block in the rescue block above it" do
    lambda do
      begin
        ScratchPad << :one
      rescue Exception
        ScratchPad << :does_not_run
      else
        ScratchPad << :two
        raise SpecificExampleException, "an error from else"
      end
    end.should raise_error(SpecificExampleException)
    ScratchPad.recorded.should == [:one, :two]
  end

  it "parses  'a += b rescue c' as 'a += (b rescue c)'" do
    a = 'a'
    c = 'c'
    a += b rescue c
    a.should == 'ac'
  end

  it "without classes will not rescue Exception" do
    lambda do
      begin
        raise Exception
      rescue
        'Exception wrongly rescued'
      end
    end.should raise_error(Exception)
  end

  it "uses === to compare against rescued classes" do
    rescuer = Class.new

    def rescuer.===(exception)
      true
    end

    begin
      raise Exception
    rescue rescuer
      rescued = :success
    rescue Exception
      rescued = :failure
    end

    rescued.should == :success
  end

  it "only accepts Module or Class in rescue clauses" do
    rescuer = 42
    lambda {
      begin
        raise "error"
      rescue rescuer
      end
    }.should raise_error(TypeError) { |e|
      e.message.should =~ /class or module required for rescue clause/
    }
  end

  it "only accepts Module or Class in splatted rescue clauses" do
    rescuer = [42]
    lambda {
      begin
        raise "error"
      rescue *rescuer
      end
    }.should raise_error(TypeError) { |e|
      e.message.should =~ /class or module required for rescue clause/
    }
  end

  it "evaluates rescue expressions only when needed" do
    invalid_rescuer = Object.new
    begin
      :foo
    rescue rescuer
    end.should == :foo
  end

  it "should splat the handling Error classes" do
    begin
      raise "raise"
    rescue *(RuntimeError) => e
      :expected
    end.should == :expected
  end
end
