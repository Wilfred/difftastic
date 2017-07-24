require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/break', __FILE__)

describe "The break statement in a block" do
  before :each do
    ScratchPad.record []
    @program = BreakSpecs::Block.new
  end

  it "returns nil to method invoking the method yielding to the block when not passed an argument" do
    @program.break_nil
    ScratchPad.recorded.should == [:a, :aa, :b, nil, :d]
  end

  it "returns a value to the method invoking the method yielding to the block" do
    @program.break_value
    ScratchPad.recorded.should == [:a, :aa, :b, :break, :d]
  end

  describe "yielded inside a while" do
    it "breaks out of the block" do
      value = @program.break_in_block_in_while
      ScratchPad.recorded.should == [:aa, :break]
      value.should == :value
    end
  end
end

describe "The break statement in a captured block" do
  before :each do
    ScratchPad.record []
    @program = BreakSpecs::Block.new
  end

  describe "when the invocation of the scope creating the block is still active" do
    it "raises a LocalJumpError when invoking the block from the scope creating the block" do
      lambda { @program.break_in_method }.should raise_error(LocalJumpError)
      ScratchPad.recorded.should == [:a, :xa, :d, :b]
    end

    it "raises a LocalJumpError when invoking the block from a method" do
      lambda { @program.break_in_nested_method }.should raise_error(LocalJumpError)
      ScratchPad.recorded.should == [:a, :xa, :cc, :aa, :b]
    end

    it "raises a LocalJumpError when yielding to the block" do
      lambda { @program.break_in_yielding_method }.should raise_error(LocalJumpError)
      ScratchPad.recorded.should == [:a, :xa, :cc, :aa, :b]
    end
  end

  describe "from a scope that has returned" do
    it "raises a LocalJumpError when calling the block from a method" do
      lambda { @program.break_in_method_captured }.should raise_error(LocalJumpError)
      ScratchPad.recorded.should == [:a, :za, :xa, :zd, :zb]
    end

    it "raises a LocalJumpError when yielding to the block" do
      lambda { @program.break_in_yield_captured }.should raise_error(LocalJumpError)
      ScratchPad.recorded.should == [:a, :za, :xa, :zd, :aa, :zb]
    end
  end

  describe "from another thread" do
    it "raises a LocalJumpError when getting the value from another thread" do
      ScratchPad << :a
      thread_with_break = Thread.new do
        ScratchPad << :b
        break :break
        ScratchPad << :c
      end

      lambda { thread_with_break.value }.should raise_error(LocalJumpError)
      ScratchPad.recorded.should == [:a, :b]
    end
  end
end

describe "The break statement in a lambda" do
  before :each do
    ScratchPad.record []
    @program = BreakSpecs::Lambda.new
  end

  it "returns from the lambda" do
    l = lambda {
      ScratchPad << :before
      break :foo
      ScratchPad << :after
    }
    l.call.should == :foo
    ScratchPad.recorded.should == [:before]
  end

  it "returns from the call site if the lambda is passed as a block" do
    def mid(&b)
      lambda {
        ScratchPad << :before
        b.call
        ScratchPad << :unreachable1
      }.call
      ScratchPad << :unreachable2
    end

    result = [1].each do |e|
      mid {
        break # This breaks from mid
        ScratchPad << :unreachable3
      }
      ScratchPad << :after
    end
    result.should == [1]
    ScratchPad.recorded.should == [:before, :after]
  end

  describe "when the invocation of the scope creating the lambda is still active" do
    it "returns nil when not passed an argument" do
      @program.break_in_defining_scope false
      ScratchPad.recorded.should == [:a, :b, nil, :d]
    end

    it "returns a value to the scope creating and calling the lambda" do
      @program.break_in_defining_scope
      ScratchPad.recorded.should == [:a, :b, :break, :d]
    end

    it "returns a value to the method scope below invoking the lambda" do
      @program.break_in_nested_scope
      ScratchPad.recorded.should == [:a, :d, :aa, :b, :break, :bb, :e]
    end

    it "returns a value to a block scope invoking the lambda in a method below" do
      @program.break_in_nested_scope_block
      ScratchPad.recorded.should == [:a, :d, :aa, :aaa, :bb, :b, :break, :cc, :bbb, :dd, :e]
    end

    it "returns from the lambda" do
      @program.break_in_nested_scope_yield
      ScratchPad.recorded.should == [:a, :d, :aaa, :b, :bbb, :e]
    end
  end

  describe "created at the toplevel" do
    it "returns a value when invoking from the toplevel" do
      code = fixture __FILE__, "break_lambda_toplevel.rb"
      ruby_exe(code).chomp.should == "a,b,break,d"
    end

    it "returns a value when invoking from a method" do
      code = fixture __FILE__, "break_lambda_toplevel_method.rb"
      ruby_exe(code).chomp.should == "a,d,b,break,e,f"
    end

    it "returns a value when invoking from a block" do
      code = fixture __FILE__, "break_lambda_toplevel_block.rb"
      ruby_exe(code).chomp.should == "a,d,f,b,break,g,e,h"
    end
  end

  describe "from a scope that has returned" do
    it "returns a value to the method scope invoking the lambda" do
      @program.break_in_method
      ScratchPad.recorded.should == [:a, :la, :ld, :lb, :break, :b]
    end

    it "returns a value to the block scope invoking the lambda in a method" do
      @program.break_in_block_in_method
      ScratchPad.recorded.should == [:a, :aaa, :b, :la, :ld, :lb, :break, :c, :bbb, :d]
    end

    # By passing a lambda as a block argument, the user is requesting to treat
    # the lambda as a block, which in this case means breaking to a scope that
    # has returned. This is a subtle and confusing semantic where a block pass
    # is removing the lambda-ness of a lambda.
    it "raises a LocalJumpError when yielding to a lambda passed as a block argument" do
      @program.break_in_method_yield
      ScratchPad.recorded.should == [:a, :la, :ld, :aaa, :lb, :bbb, :b]
    end
  end
end

describe "Break inside a while loop" do
  describe "with a value" do
    it "exits the loop and returns the value" do
      a = while true; break; end;          a.should == nil
      a = while true; break nil; end;      a.should == nil
      a = while true; break 1; end;        a.should == 1
      a = while true; break []; end;       a.should == []
      a = while true; break [1]; end;      a.should == [1]
    end

    it "passes the value returned by a method with omitted parenthesis and passed block" do
      obj = BreakSpecs::Block.new
      lambda { break obj.method :value do |x| x end }.call.should == :value
    end
  end

  describe "with a splat" do
    it "exits the loop and makes the splat an Array" do
      a = while true; break *[1,2]; end;    a.should == [1,2]
    end

    it "treats nil as an empty array" do
      a = while true; break *nil; end;      a.should == []
    end

    it "preserves an array as is" do
      a = while true; break *[]; end;       a.should == []
      a = while true; break *[1,2]; end;    a.should == [1,2]
      a = while true; break *[nil]; end;    a.should == [nil]
      a = while true; break *[[]]; end;     a.should == [[]]
    end

    it "wraps a non-Array in an Array" do
      a = while true; break *1; end;        a.should == [1]
    end
  end

  it "stops a while loop when run" do
    i = 0
    while true
      break if i == 2
      i+=1
    end
    i.should == 2
  end

  it "causes a call with a block to return when run" do
    at = 0
    0.upto(5) do |i|
      at = i
      break i if i == 2
    end.should == 2
    at.should == 2
  end
end


# TODO: Rewrite all the specs from here to the end of the file in the style
# above.
describe "Executing break from within a block" do

  before :each do
    ScratchPad.clear
  end

  # Discovered in JRuby (see JRUBY-2756)
  it "returns from the original invoking method even in case of chained calls" do
    class BreakTest
      # case #1: yield
      def self.meth_with_yield(&b)
        yield
        fail("break returned from yield to wrong place")
      end
      def self.invoking_method(&b)
        meth_with_yield(&b)
        fail("break returned from 'meth_with_yield' method to wrong place")
      end

      # case #2: block.call
      def self.meth_with_block_call(&b)
        b.call
        fail("break returned from b.call to wrong place")
      end
      def self.invoking_method2(&b)
        meth_with_block_call(&b)
        fail("break returned from 'meth_with_block_call' method to wrong place")
      end
    end

    # this calls a method that calls another method that yields to the block
    BreakTest.invoking_method do
      break
      fail("break didn't, well, break")
    end

    # this calls a method that calls another method that calls the block
    BreakTest.invoking_method2 do
      break
      fail("break didn't, well, break")
    end

    res = BreakTest.invoking_method do
      break :return_value
      fail("break didn't, well, break")
    end
    res.should == :return_value

    res = BreakTest.invoking_method2 do
      break :return_value
      fail("break didn't, well, break")
    end
    res.should == :return_value

  end

  class BreakTest2
    def one
      two { yield }
    end

    def two
      yield
    ensure
      ScratchPad << :two_ensure
    end

    def three
      begin
        one { break }
        ScratchPad << :three_post
      ensure
        ScratchPad << :three_ensure
      end
    end
  end

  it "runs ensures when continuing upward" do
    ScratchPad.record []

    bt2 = BreakTest2.new
    bt2.one { break }
    ScratchPad.recorded.should == [:two_ensure]
  end

  it "runs ensures when breaking from a loop" do
    ScratchPad.record []

    while true
      begin
        ScratchPad << :begin
        break if true
      ensure
        ScratchPad << :ensure
      end
    end

    ScratchPad.recorded.should == [:begin, :ensure]
  end

  it "doesn't run ensures in the destination method" do
    ScratchPad.record []

    bt2 = BreakTest2.new
    bt2.three
    ScratchPad.recorded.should == [:two_ensure, :three_post, :three_ensure]
  end
end
