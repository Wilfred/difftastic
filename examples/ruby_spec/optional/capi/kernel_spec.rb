require File.expand_path('../spec_helper', __FILE__)

load_extension("kernel")

describe "C-API Kernel function" do
  before :each do
    @s = CApiKernelSpecs.new
  end

  describe "rb_block_given_p" do
    it "returns false if no block is passed" do
      @s.rb_block_given_p.should == false
    end

    it "returns true if a block is passed" do
      (@s.rb_block_given_p { puts "FOO" } ).should == true
    end
  end

  describe "rb_need_block" do
    it "raises a LocalJumpError if no block is given" do
      lambda { @s.rb_need_block }.should raise_error(LocalJumpError)
    end

    it "does not raise a LocalJumpError if a block is given" do
      @s.rb_need_block { }.should == nil
    end
  end

  describe "rb_block_call" do
    before :each do
      ScratchPad.record []
    end

    it "calls the block with a single argument" do
      ary = [1, 3, 5]
      @s.rb_block_call(ary).should == [2, 4, 6]
    end

    it "calls the block with multiple arguments in argc / argv" do
      ary = [1, 3, 5]
      @s.rb_block_call_multi_arg(ary).should == 9
    end

    it "calls the method with no function callback and no block" do
      ary = [1, 3, 5]
      @s.rb_block_call_no_func(ary).should be_kind_of(Enumerator)
    end

    it "calls the method with no function callback and a block" do
      ary = [1, 3, 5]
      @s.rb_block_call_no_func(ary) do |i|
        i + 1
      end.should == [2, 4, 6]
    end
  end

  describe "rb_raise" do
    it "raises an exception" do
      lambda { @s.rb_raise({}) }.should raise_error(TypeError)
    end

    it "terminates the function at the point it was called" do
      h = {}
      lambda { @s.rb_raise(h) }.should raise_error(TypeError)
      h[:stage].should == :before
    end
  end

  describe "rb_throw" do
    before :each do
      ScratchPad.record []
    end

    it "sets the return value of the catch block to the specified value" do
      catch(:foo) do
        @s.rb_throw(:return_value)
      end.should == :return_value
    end

    it "terminates the function at the point it was called" do
      catch(:foo) do
        ScratchPad << :before_throw
        @s.rb_throw(:thrown_value)
        ScratchPad << :after_throw
      end.should == :thrown_value
      ScratchPad.recorded.should == [:before_throw]
    end

    it "raises an ArgumentError if there is no catch block for the symbol" do
      lambda { @s.rb_throw(nil) }.should raise_error(ArgumentError)
    end
  end

  describe "rb_throw_obj" do
    before :each do
      ScratchPad.record []
      @tag = Object.new
    end

    it "sets the return value of the catch block to the specified value" do
      catch(@tag) do
        @s.rb_throw_obj(@tag, :thrown_value)
      end.should == :thrown_value
    end

    it "terminates the function at the point it was called" do
      catch(@tag) do
        ScratchPad << :before_throw
        @s.rb_throw_obj(@tag, :thrown_value)
        ScratchPad << :after_throw
      end.should == :thrown_value
      ScratchPad.recorded.should == [:before_throw]
    end

    it "raises an ArgumentError if there is no catch block for the symbol" do
      lambda { @s.rb_throw(nil) }.should raise_error(ArgumentError)
    end
  end

  describe "rb_warn" do
    before :each do
      @stderr, $stderr = $stderr, IOStub.new
      @verbose = $VERBOSE
    end

    after :each do
      $stderr = @stderr
      $VERBOSE = @verbose
    end

    it "prints a message to $stderr if $VERBOSE evaluates to true" do
      $VERBOSE = true
      @s.rb_warn("This is a warning")
      $stderr.should =~ /This is a warning/
    end

    it "prints a message to $stderr if $VERBOSE evaluates to false" do
      $VERBOSE = false
      @s.rb_warn("This is a warning")
      $stderr.should =~ /This is a warning/
    end
  end

  describe "rb_sys_fail" do
    it "raises an exception from the value of errno" do
      lambda do
        @s.rb_sys_fail("additional info")
      end.should raise_error(SystemCallError, /additional info/)
    end

    it "can take a NULL message" do
      lambda do
        @s.rb_sys_fail(nil)
      end.should raise_error(Errno::EPERM)
    end
  end

  describe "rb_syserr_fail" do
    it "raises an exception from the given error" do
      lambda do
        @s.rb_syserr_fail(Errno::EINVAL::Errno, "additional info")
      end.should raise_error(Errno::EINVAL, /additional info/)
    end

    it "can take a NULL message" do
      lambda do
        @s.rb_syserr_fail(Errno::EINVAL::Errno, nil)
      end.should raise_error(Errno::EINVAL)
    end
  end

  describe "rb_yield" do
    it "yields passed argument" do
      ret = nil
      @s.rb_yield(1) { |z| ret = z }
      ret.should == 1
    end

    it "returns the result from block evaluation" do
      @s.rb_yield(1) { |z| z * 1000 }.should == 1000
    end

    it "raises LocalJumpError when no block is given" do
      lambda { @s.rb_yield(1) }.should raise_error(LocalJumpError)
    end

    it "rb_yield to a block that breaks does not raise an error" do
      @s.rb_yield(1) { break }.should == nil
    end

    it "rb_yield to a block that breaks with a value returns the value" do
      @s.rb_yield(1) { break 73 }.should == 73
    end

    platform_is_not :"solaris2.10" do # NOTE: i386-pc-solaris2.10
      it "rb_yield through a callback to a block that breaks with a value returns the value" do
        @s.rb_yield_indirected(1) { break 73 }.should == 73
      end
    end
  end

  describe "rb_yield_values" do
    it "yields passed arguments" do
      ret = nil
      @s.rb_yield_values(1, 2) { |x, y| ret = x + y }
      ret.should == 3
    end

    it "returns the result from block evaluation" do
      @s.rb_yield_values(1, 2) { |x, y| x + y }.should == 3
    end

    it "raises LocalJumpError when no block is given" do
      lambda { @s.rb_yield_splat([1, 2]) }.should raise_error(LocalJumpError)
    end
  end

  describe "rb_yield_splat" do
    it "yields with passed array's contents" do
      ret = nil
      @s.rb_yield_splat([1, 2]) { |x, y| ret = x + y }
      ret.should == 3
    end

    it "returns the result from block evaluation" do
      @s.rb_yield_splat([1, 2]) { |x, y| x + y }.should == 3
    end

    it "raises LocalJumpError when no block is given" do
      lambda { @s.rb_yield_splat([1, 2]) }.should raise_error(LocalJumpError)
    end
  end

  describe "rb_protect" do
    it "will run a function with an argument" do
      proof = [] # Hold proof of work performed after the yield.
      res = @s.rb_protect_yield(7, proof) { |x| x + 1 }
      res.should == 8
      proof[0].should == 23
    end

    it "will allow cleanup code to run after break" do
      proof = [] # Hold proof of work performed after the yield.
      @s.rb_protect_yield(7, proof) { |x| break }
      proof[0].should == 23
    end

    it "will allow cleanup code to run after break with value" do
      proof = [] # Hold proof of work performed after the yield.
      res = @s.rb_protect_yield(7, proof) { |x| break x + 1 }
      res.should == 8
      proof[0].should == 23
    end

    it "will allow cleanup code to run after a raise" do
      proof = [] # Hold proof of work performed after the yield.
      lambda do
        @s.rb_protect_yield(7, proof) { |x| raise NameError}
      end.should raise_error(NameError)
      proof[0].should == 23
    end
  end

  describe "rb_rescue" do
    before :each do
      @proc = lambda { |x| x }
      @raise_proc_returns_sentinel = lambda {|*_| :raise_proc_executed }
      @raise_proc_returns_arg = lambda {|*a| a }
      @arg_error_proc = lambda { |*_| raise ArgumentError, '' }
      @std_error_proc = lambda { |*_| raise StandardError, '' }
      @exc_error_proc = lambda { |*_| raise Exception, '' }
    end

    it "executes passed function" do
      @s.rb_rescue(@proc, :no_exc, @raise_proc_returns_arg, :exc).should == :no_exc
    end

    it "executes passed 'raise function' if a StandardError exception is raised" do
      @s.rb_rescue(@arg_error_proc, nil, @raise_proc_returns_sentinel, :exc).should == :raise_proc_executed
      @s.rb_rescue(@std_error_proc, nil, @raise_proc_returns_sentinel, :exc).should == :raise_proc_executed
    end

    it "passes the user supplied argument to the 'raise function' if a StandardError exception is raised" do
      arg1, _ = @s.rb_rescue(@arg_error_proc, nil, @raise_proc_returns_arg, :exc1)
      arg1.should == :exc1

      arg2, _ = @s.rb_rescue(@std_error_proc, nil, @raise_proc_returns_arg, :exc2)
      arg2.should == :exc2
    end

    it "passes the raised exception to the 'raise function' if a StandardError exception is raised" do
      _, exc1 = @s.rb_rescue(@arg_error_proc, nil, @raise_proc_returns_arg, :exc)
      exc1.class.should == ArgumentError

      _, exc2 = @s.rb_rescue(@std_error_proc, nil, @raise_proc_returns_arg, :exc)
      exc2.class.should == StandardError
    end

    it "raises an exception if passed function raises an exception other than StandardError" do
      lambda { @s.rb_rescue(@exc_error_proc, nil, @raise_proc_returns_arg, nil) }.should raise_error(Exception)
    end

    it "raises an exception if any exception is raised inside 'raise function'" do
      lambda { @s.rb_rescue(@std_error_proc, nil, @std_error_proc, nil) }.should raise_error(StandardError)
    end

    it "makes $! available only during 'raise function' execution" do
      @s.rb_rescue(@std_error_proc, nil, lambda { |*_| $! }, nil).class.should == StandardError
      $!.should == nil
    end

    it "returns the break value if the passed function yields to a block with a break" do
      def proc_caller
        @s.rb_rescue(lambda { |*_| yield }, nil, @proc, nil)
      end

      proc_caller { break :value }.should == :value
    end
  end

  describe "rb_rescue2" do
    it "only rescues if one of the passed exceptions is raised" do
      proc = lambda { |x| x }
      arg_error_proc = lambda { |*_| raise ArgumentError, '' }
      run_error_proc = lambda { |*_| raise RuntimeError, '' }
      type_error_proc = lambda { |*_| raise TypeError, '' }
      @s.rb_rescue2(arg_error_proc, :no_exc, proc, :exc, ArgumentError, RuntimeError).should == :exc
      @s.rb_rescue2(run_error_proc, :no_exc, proc, :exc, ArgumentError, RuntimeError).should == :exc
      lambda {
        @s.rb_rescue2(type_error_proc, :no_exc, proc, :exc, ArgumentError, RuntimeError)
      }.should raise_error(TypeError)
    end
  end

  describe "rb_catch" do
    before :each do
      ScratchPad.record []
    end

    it "executes passed function" do
      @s.rb_catch("foo", lambda { 1 }).should == 1
    end

    it "terminates the function at the point it was called" do
      proc = lambda do
        ScratchPad << :before_throw
        throw :thrown_value
        ScratchPad << :after_throw
      end
      @s.rb_catch("thrown_value", proc).should be_nil
      ScratchPad.recorded.should == [:before_throw]
    end

    it "raises an ArgumentError if the throw symbol isn't caught" do
      lambda { @s.rb_catch("foo", lambda { throw :bar }) }.should raise_error(ArgumentError)
    end
  end

  describe "rb_catch_obj" do

    before :each do
      ScratchPad.record []
      @tag = Object.new
    end

    it "executes passed function" do
      @s.rb_catch_obj(@tag, lambda { 1 }).should == 1
    end

    it "terminates the function at the point it was called" do
      proc = lambda do
        ScratchPad << :before_throw
        throw @tag
        ScratchPad << :after_throw
      end
      @s.rb_catch_obj(@tag, proc).should be_nil
      ScratchPad.recorded.should == [:before_throw]
    end

    it "raises an ArgumentError if the throw symbol isn't caught" do
      lambda { @s.rb_catch("foo", lambda { throw :bar }) }.should raise_error(ArgumentError)
    end
  end

  describe "rb_ensure" do
    it "executes passed function and returns its value" do
      proc = lambda { |x| x }
      @s.rb_ensure(proc, :proc, proc, :ensure_proc).should == :proc
    end

    it "executes passed 'ensure function' when no exception is raised" do
      foo = nil
      proc = lambda { |*_| }
      ensure_proc = lambda { |x| foo = x }
      @s.rb_ensure(proc, nil, ensure_proc, :foo)
      foo.should == :foo
    end

    it "executes passed 'ensure function' when an exception is raised" do
      foo = nil
      raise_proc = lambda { raise '' }
      ensure_proc = lambda { |x| foo = x }
      @s.rb_ensure(raise_proc, nil, ensure_proc, :foo) rescue nil
      foo.should == :foo
    end

    it "raises the same exception raised inside passed function" do
      raise_proc = lambda { |*_| raise RuntimeError, 'foo' }
      proc = lambda { |*_| }
      lambda { @s.rb_ensure(raise_proc, nil, proc, nil) }.should raise_error(RuntimeError, 'foo')
    end
  end

  describe "rb_eval_string" do
    it "evaluates a string of ruby code" do
      @s.rb_eval_string("1+1").should == 2
    end
  end

  describe "rb_block_proc" do
    it "converts the implicit block into a proc" do
      proc = @s.rb_block_proc() { 1+1 }
      proc.should be_kind_of(Proc)
      proc.call.should == 2
    end
  end

  describe "rb_exec_recursive" do
    it "detects recursive invocations of a method and indicates as such" do
      s = "hello"
      @s.rb_exec_recursive(s).should == s
    end
  end

  platform_is_not :windows do
    describe "rb_set_end_proc" do
      before :each do
        @r, @w = IO.pipe
      end

      after :each do
        @r.close
        @w.close
        Process.wait @pid
      end

      it "runs a C function on shutdown" do
        @pid = fork {
          @s.rb_set_end_proc(@w)
        }

        @r.read(1).should == "e"
      end
    end
  end

  describe "rb_f_sprintf" do
    it "returns a string according to format and arguments" do
      @s.rb_f_sprintf(["%d %f %s", 10, 2.5, "test"]).should == "10 2.500000 test"
    end
  end

  describe "rb_make_backtrace" do
    it "returns a caller backtrace" do
      backtrace = @s.rb_make_backtrace
      lines = backtrace.select {|l| l =~ /#{__FILE__}/ }
      lines.should_not be_empty
    end
  end

  describe "rb_obj_method" do
    it "returns the method object for a symbol" do
      method = @s.rb_obj_method("test", :size)
      method.owner.should == String
      method.name.to_sym.should == :size
    end

    it "returns the method object for a string" do
      method = @s.rb_obj_method("test", "size")
      method.owner.should == String
      method.name.to_sym.should == :size
    end
  end

  describe "rb_funcall3" do
    before :each do
      @obj = Object.new
      class << @obj
        def method_public; :method_public end
        def method_private; :method_private end
        private :method_private
      end
    end

    it "calls a public method" do
      @s.rb_funcall3(@obj, :method_public).should == :method_public
    end
    it "does not call a private method" do
      lambda { @s.rb_funcall3(@obj, :method_private) }.should raise_error(NoMethodError, /private/)
    end
  end

  describe 'rb_funcall_with_block' do
    before :each do
      @obj = Object.new
      class << @obj
        def method_public; yield end
        def method_private; yield end
        private :method_private
      end
    end

    it "calls a method with block" do
      @s.rb_funcall_with_block(@obj, :method_public, proc { :result }).should == :result
    end

    it "does not call a private method" do
      lambda { @s.rb_funcall_with_block(@obj, :method_private, proc { :result }) }.should raise_error(NoMethodError, /private/)
    end
  end
end
