require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel.fail" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:fail)
  end

  it "raises a RuntimeError" do
    lambda { fail }.should raise_error(RuntimeError)
  end

  it "accepts an Object with an exception method returning an Exception" do
    class Boring
      def self.exception(msg)
        StandardError.new msg
      end
    end
    lambda { fail Boring, "..." }.should raise_error(StandardError)
  end

  it "instantiates the specified exception class" do
    class LittleBunnyFooFoo < RuntimeError; end
    lambda { fail LittleBunnyFooFoo }.should raise_error(LittleBunnyFooFoo)
  end

  it "uses the specified message" do
    lambda {
      begin
        fail "the duck is not irish."
      rescue => e
        e.message.should == "the duck is not irish."
        raise
      else
        raise Exception
      end
    }.should raise_error(RuntimeError)
  end
end

describe "Kernel#fail" do
  it "needs to be reviewed for spec completeness"
end
