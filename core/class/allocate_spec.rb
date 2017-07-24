require File.expand_path('../../../spec_helper', __FILE__)

describe "Class#allocate" do
  it "returns an instance of self" do
    klass = Class.new
    klass.allocate.should be_an_instance_of(klass)
  end

  it "returns a fully-formed instance of Module" do
    klass = Class.allocate
    klass.constants.should_not == nil
    klass.methods.should_not == nil
  end

  it "throws an exception when calling a method on a new instance" do
    klass = Class.allocate
    lambda do
      klass.new
    end.should raise_error(Exception)
  end

  it "does not call initialize on the new instance" do
    klass = Class.new do
      def initialize(*args)
        @initialized = true
      end

      def initialized?
        @initialized || false
      end
    end

    klass.allocate.initialized?.should == false
  end

  it "raises TypeError for #superclass" do
    lambda do
      Class.allocate.superclass
    end.should raise_error(TypeError)
  end
end
