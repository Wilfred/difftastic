require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Proc.new with an associated block" do
  it "returns a proc that represents the block" do
    Proc.new { }.call.should == nil
    Proc.new { "hello" }.call.should == "hello"
  end

  describe "called on a subclass of Proc" do
    before :each do
      @subclass = Class.new(Proc) do
        attr_reader :ok
        def initialize
          @ok = true
          super
        end
      end
    end

    it "returns an instance of the subclass" do
      proc = @subclass.new {"hello"}

      proc.class.should == @subclass
      proc.call.should == "hello"
      proc.ok.should == true
    end

    # JRUBY-5026
    describe "using a reified block parameter" do
      it "returns an instance of the subclass" do
        cls = Class.new do
          def self.subclass=(subclass)
            @subclass = subclass
          end
          def self.foo(&block)
            @subclass.new(&block)
          end
        end
        cls.subclass = @subclass
        proc = cls.foo {"hello"}

        proc.class.should == @subclass
        proc.call.should == "hello"
        proc.ok.should == true
      end
    end
  end

  # JRUBY-5261; Proc sets up the block during .new, not in #initialize
  describe "called on a subclass of Proc that does not 'super' in 'initialize'" do
    before :each do
      @subclass = Class.new(Proc) do
        attr_reader :ok
        def initialize
          @ok = true
        end
      end
    end

    it "still constructs a functional proc" do
      proc = @subclass.new {'ok'}
      proc.call.should == 'ok'
      proc.ok.should == true
    end
  end

  it "raises a LocalJumpError when context of the block no longer exists" do
    def some_method
      Proc.new { return }
    end
    res = some_method()

    lambda { res.call }.should raise_error(LocalJumpError)
  end

  it "returns from within enclosing method when 'return' is used in the block" do
    # we essentially verify that the created instance behaves like proc,
    # not like lambda.
    def some_method
      Proc.new { return :proc_return_value }.call
      :method_return_value
    end
    some_method.should == :proc_return_value
  end

  it "returns a subclass of Proc" do
    obj = ProcSpecs::MyProc.new { }
    obj.should be_kind_of(ProcSpecs::MyProc)
  end

  it "calls initialize on the Proc object" do
    obj = ProcSpecs::MyProc2.new(:a, 2) { }
    obj.first.should == :a
    obj.second.should == 2
  end

  it "returns a new Proc instance from the block passed to the containing method" do
    prc = ProcSpecs.new_proc_in_method { "hello" }
    prc.should be_an_instance_of(Proc)
    prc.call.should == "hello"
  end

  it "returns a new Proc instance from the block passed to the containing method" do
    prc = ProcSpecs.new_proc_subclass_in_method { "hello" }
    prc.should be_an_instance_of(ProcSpecs::ProcSubclass)
    prc.call.should == "hello"
  end
end

describe "Proc.new with a block argument" do
  it "returns the passed proc created from a block" do
    passed_prc = Proc.new { "hello".size }
    prc = Proc.new(&passed_prc)

    prc.should equal(passed_prc)
    prc.call.should == 5
  end

  it "returns the passed proc created from a method" do
    method = "hello".method(:size)
    passed_prc = Proc.new(&method)
    prc = Proc.new(&passed_prc)

    prc.should equal(passed_prc)
    prc.call.should == 5
  end

  it "returns the passed proc created from a symbol" do
    passed_prc = Proc.new(&:size)
    prc = Proc.new(&passed_prc)

    prc.should equal(passed_prc)
    prc.call("hello").should == 5
  end
end

describe "Proc.new with a block argument called indirectly from a subclass" do
  it "returns the passed proc created from a block" do
    passed_prc = ProcSpecs::MyProc.new { "hello".size }
    passed_prc.class.should == ProcSpecs::MyProc
    prc = ProcSpecs::MyProc.new(&passed_prc)

    prc.should equal(passed_prc)
    prc.call.should == 5
  end

  it "returns the passed proc created from a method" do
    method = "hello".method(:size)
    passed_prc = ProcSpecs::MyProc.new(&method)
    passed_prc.class.should == ProcSpecs::MyProc
    prc = ProcSpecs::MyProc.new(&passed_prc)

    prc.should equal(passed_prc)
    prc.call.should == 5
  end

  it "returns the passed proc created from a symbol" do
    passed_prc = ProcSpecs::MyProc.new(&:size)
    passed_prc.class.should == ProcSpecs::MyProc
    prc = ProcSpecs::MyProc.new(&passed_prc)

    prc.should equal(passed_prc)
    prc.call("hello").should == 5
  end
end

describe "Proc.new without a block" do
  it "raises an ArgumentError" do
    lambda { Proc.new }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if invoked from within a method with no block" do
    lambda { ProcSpecs.new_proc_in_method }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if invoked on a subclass from within a method with no block" do
    lambda { ProcSpecs.new_proc_subclass_in_method }.should raise_error(ArgumentError)
  end

  it "uses the implicit block from an enclosing method" do
    def some_method
      Proc.new
    end

    prc = some_method { "hello" }

    prc.call.should == "hello"
  end
end
