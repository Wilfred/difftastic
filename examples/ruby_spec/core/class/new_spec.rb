require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Class.new with a block given" do
  it "yields the new class as self in the block" do
    self_in_block = nil
    klass = Class.new do
      self_in_block = self
    end
    self_in_block.should equal klass
  end

  it "uses the given block as the class' body" do
    klass = Class.new do
      def self.message
        "text"
      end

      def hello
        "hello again"
      end
    end

    klass.message.should == "text"
    klass.new.hello.should == "hello again"
  end

  it "creates a subclass of the given superclass" do
    sc = Class.new do
      def self.body
        @body
      end
      @body = self
      def message; "text"; end
    end
    klass = Class.new(sc) do
      def self.body
        @body
      end
      @body = self
      def message2; "hello"; end
    end

    klass.body.should == klass
    sc.body.should == sc
    klass.superclass.should == sc
    klass.new.message.should == "text"
    klass.new.message2.should == "hello"
  end

  it "runs the inherited hook after yielding the block" do
    ScratchPad.record []
    klass = Class.new(CoreClassSpecs::Inherited::D) do
      ScratchPad << self
    end

    ScratchPad.recorded.should == [CoreClassSpecs::Inherited::D, klass]
  end
end

describe "Class.new" do
  it "creates a new anonymous class" do
    klass = Class.new
    klass.is_a?(Class).should == true

    klass_instance = klass.new
    klass_instance.is_a?(klass).should == true
  end

  it "raises a TypeError if passed a metaclass" do
    obj = mock("Class.new metaclass")
    meta = obj.singleton_class
    lambda { Class.new meta }.should raise_error(TypeError)
  end

  it "creates a class without a name" do
    Class.new.name.should be_nil
  end

  it "creates a class that can be given a name by assigning it to a constant" do
    ::MyClass = Class.new
    ::MyClass.name.should == "MyClass"
    a = Class.new
    MyClass::NestedClass = a
    MyClass::NestedClass.name.should == "MyClass::NestedClass"
  end

  it "sets the new class' superclass to the given class" do
    top = Class.new
    Class.new(top).superclass.should == top
  end

  it "sets the new class' superclass to Object when no class given" do
    Class.new.superclass.should == Object
  end

  it "raises a TypeError when given a non-Class" do
    error_msg = /superclass must be a Class/
    lambda { Class.new("")         }.should raise_error(TypeError, error_msg)
    lambda { Class.new(1)          }.should raise_error(TypeError, error_msg)
    lambda { Class.new(:symbol)    }.should raise_error(TypeError, error_msg)
    lambda { Class.new(mock('o'))  }.should raise_error(TypeError, error_msg)
    lambda { Class.new(Module.new) }.should raise_error(TypeError, error_msg)
  end
end

describe "Class#new" do
  it "returns a new instance of self" do
    klass = Class.new
    klass.new.is_a?(klass).should == true
  end

  it "invokes #initialize on the new instance with the given args" do
    klass = Class.new do
      def initialize(*args)
        @initialized = true
        @args = args
      end

      def args
        @args
      end

      def initialized?
        @initialized || false
      end
    end

    klass.new.initialized?.should == true
    klass.new(1, 2, 3).args.should == [1, 2, 3]
  end

  it "uses the internal allocator and does not call #allocate" do
    klass = Class.new do
      def self.allocate
        raise "allocate should not be called"
      end
    end

    instance = klass.new
    instance.should be_kind_of klass
    instance.class.should equal klass
  end

  it "passes the block to #initialize" do
    klass = Class.new do
      def initialize
        yield
      end
    end

    klass.new { break 42 }.should == 42
  end
end
