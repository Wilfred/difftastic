require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/lambda', __FILE__)

# The functionality of Proc objects is specified in core/proc

describe "Kernel.proc" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:proc)
  end

  it "creates a proc-style Proc if given a literal block" do
    l = proc { 42 }
    l.lambda?.should be_false
  end

  it "returned the passed Proc if given an existing Proc" do
    some_lambda = lambda {}
    some_lambda.lambda?.should be_true
    l = proc(&some_lambda)
    l.should equal(some_lambda)
    l.lambda?.should be_true
  end

  it_behaves_like(:kernel_lambda, :proc)

  it "returns from the creation site of the proc, not just the proc itself" do
    @reached_end_of_method = nil
    def test
      proc { return }.call
      @reached_end_of_method = true
    end
    test
    @reached_end_of_method.should be_nil
  end
end

describe "Kernel#proc" do
  it "uses the implicit block from an enclosing method" do
    def some_method
      proc
    end

    prc = some_method { "hello" }

    prc.call.should == "hello"
  end

  it "needs to be reviewed for spec completeness"
end
