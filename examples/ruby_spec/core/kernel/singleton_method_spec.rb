require File.expand_path('../../../spec_helper', __FILE__)

describe "Kernel#singleton_method" do
  it "find a method defined on the singleton class" do
    obj = Object.new
    def obj.foo; end
    obj.singleton_method(:foo).should be_an_instance_of(Method)
  end

  it "returns a Method which can be called" do
    obj = Object.new
    def obj.foo; 42; end
    obj.singleton_method(:foo).call.should == 42
  end

  it "only looks at singleton methods and not at methods in the class" do
    klass = Class.new do
      def foo
        42
      end
    end
    obj = klass.new
    obj.foo.should == 42
    -> {
      obj.singleton_method(:foo)
    }.should raise_error(NameError) { |e|
      # a NameError and not a NoMethodError
      e.class.should == NameError
    }
  end

  it "raises a NameError if there is no such method" do
    obj = Object.new
    -> {
      obj.singleton_method(:not_existing)
    }.should raise_error(NameError) { |e|
      # a NameError and not a NoMethodError
      e.class.should == NameError
    }
  end
end
