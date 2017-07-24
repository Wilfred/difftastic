require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/proc', __FILE__)

load_extension("proc")

describe "C-API Proc function" do
  before :each do
    @p = CApiProcSpecs.new
    @prc = @p.rb_proc_new
  end

  describe "rb_proc_new" do
    it "returns a new valid Proc" do
      @prc.kind_of?(Proc).should == true
    end

    it "calls the C function wrapped by the Proc instance when sent #call" do
      @prc.call(:foo_bar).should == ":foo_bar"
      @prc.call([:foo, :bar]).should == "[:foo, :bar]"
    end

    it "calls the C function wrapped by the Proc instance when sent #[]" do
      @prc[:foo_bar].should == ":foo_bar"
      @prc[[:foo, :bar]].should == "[:foo, :bar]"
    end

    it "returns a Proc instance correctly described in #inspect without source location" do
      @prc.inspect.should =~ /^#<Proc:([^ :@]*?)>$/
    end

    it "returns a Proc instance with #arity == -1" do
      @prc.arity.should == -1
    end

    it "shouldn't be equal to another one" do
      @prc.should_not == @p.rb_proc_new
    end

    it "returns a Proc instance with #source_location == nil" do
      @prc.source_location.should == nil
    end
  end
end

describe "C-API when calling Proc.new from a C function" do
  before :each do
    @p = CApiProcSpecs.new
  end

  # In the scenarios below: X -> Y means execution context X called to Y.
  # For example: Ruby -> C means a Ruby code called a C function.
  #
  # X -> Y <- X -> Z means exection context X called Y which returned to X,
  # then X called Z.
  # For example: C -> Ruby <- C -> Ruby means a C function called into Ruby
  # code which returned to C, then C called into Ruby code again.

  #   Ruby -> C -> rb_funcall(Proc.new)
  it "returns the Proc passed by the Ruby code calling the C function" do
    prc = @p.rb_Proc_new(0) { :called }
    prc.call.should == :called
  end

  #   Ruby -> C -> Ruby <- C -> rb_funcall(Proc.new)
  it "returns the Proc passed to the Ruby method when the C function calls other Ruby methods before calling Proc.new" do
    prc = @p.rb_Proc_new(1) { :called }
    prc.call.should == :called
  end

  # Ruby -> C -> Ruby -> Proc.new
  it "raises an ArgumentError when the C function calls a Ruby method that calls Proc.new" do
    def @p.Proc_new() Proc.new end
    lambda { @p.rb_Proc_new(2) { :called } }.should raise_error(ArgumentError)
  end

  # Ruby -> C -> Ruby -> C -> rb_funcall(Proc.new)
  it "raises an ArgumentError when the C function calls a Ruby method and that method calls a C function that calls Proc.new" do
    def @p.redispatch() rb_Proc_new(0) end
    lambda { @p.rb_Proc_new(3) { :called } }.should raise_error(ArgumentError)
  end

  # Ruby -> C -> Ruby -> C (with new block) -> rb_funcall(Proc.new)
  it "returns the most recent Proc passed when the Ruby method called the C function" do
    prc = @p.rb_Proc_new(4) { :called }
    prc.call.should == :calling_with_block
  end

  # Ruby -> C -> Ruby -> C (with new block) <- Ruby <- C -> # rb_funcall(Proc.new)
  it "returns the Proc passed from the original Ruby call to the C function" do
    prc = @p.rb_Proc_new(5) { :called }
    prc.call.should == :called
  end

  # Ruby -> C -> Ruby -> block_given?
  it "returns false from block_given? in a Ruby method called by the C function" do
    @p.rb_Proc_new(6).should be_false
  end
end
