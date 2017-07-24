require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/lambda', __FILE__)

# The functionality of lambdas is specified in core/proc

describe "Kernel.lambda" do
  it_behaves_like(:kernel_lambda, :lambda)

  it "is a private method" do
    Kernel.should have_private_instance_method(:lambda)
  end

  it "creates a lambda-style Proc if given a literal block" do
    l = lambda { 42 }
    l.lambda?.should be_true
  end

  it "returned the passed Proc if given an existing Proc" do
    some_proc = proc {}
    l = lambda(&some_proc)
    l.should equal(some_proc)
    l.lambda?.should be_false
  end

  it "checks the arity of the call when no args are specified" do
    l = lambda { :called }
    l.call.should == :called

    lambda { l.call(1) }.should raise_error(ArgumentError)
    lambda { l.call(1, 2) }.should raise_error(ArgumentError)
  end

  it "checks the arity when 1 arg is specified" do
    l = lambda { |a| :called }
    l.call(1).should == :called

    lambda { l.call }.should raise_error(ArgumentError)
    lambda { l.call(1, 2) }.should raise_error(ArgumentError)
  end

  it "does not check the arity when passing a Proc with &" do
    l = lambda { || :called }
    p = proc { || :called }

    lambda { l.call(1) }.should raise_error(ArgumentError)
    p.call(1).should == :called
  end

  it "accepts 0 arguments when used with ||" do
    lambda {
      lambda { || }.call(1)
    }.should raise_error(ArgumentError)
  end

  it "strictly checks the arity when 0 or 2..inf args are specified" do
    l = lambda { |a,b| }

    lambda {
      l.call
    }.should raise_error(ArgumentError)

    lambda {
      l.call(1)
    }.should raise_error(ArgumentError)

    lambda {
      l.call(1,2)
    }.should_not raise_error(ArgumentError)
  end

  it "returns from the lambda itself, not the creation site of the lambda" do
    @reached_end_of_method = nil
    def test
      send(:lambda) { return }.call
      @reached_end_of_method = true
    end
    test
    @reached_end_of_method.should be_true
  end

  it "allows long returns to flow through it" do
    KernelSpecs::Lambda.new.outer.should == :good
  end
end

