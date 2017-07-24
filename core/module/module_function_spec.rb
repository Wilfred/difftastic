require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#module_function" do
  it "is a private method" do
    Module.should have_private_instance_method(:module_function)
  end

  describe "on Class" do
    it "is undefined" do
      Class.should_not have_private_instance_method(:module_function, true)
    end

    it "raises a TypeError if calling after rebinded to Class" do
      lambda {
        Module.instance_method(:module_function).bind(Class.new).call
      }.should raise_error(TypeError)

      lambda {
        Module.instance_method(:module_function).bind(Class.new).call :foo
      }.should raise_error(TypeError)
    end
  end
end

describe "Module#module_function with specific method names" do
  it "creates duplicates of the given instance methods on the Module object" do
    m = Module.new do
      def test()  end
      def test2() end
      def test3() end

      module_function :test, :test2
    end

    m.respond_to?(:test).should == true
    m.respond_to?(:test2).should == true
    m.respond_to?(:test3).should == false
  end

  it "returns the current module" do
    x = nil
    m = Module.new do
      def test()  end
      x = module_function :test
    end

    x.should == m
  end

  it "creates an independent copy of the method, not a redirect" do
    module Mixin
      def test
        "hello"
      end
      module_function :test
    end

    class BaseClass
      include Mixin
      def call_test
        test
      end
    end

    Mixin.test.should == "hello"
    c = BaseClass.new
    c.call_test.should == "hello"

    module Mixin
      def test
        "goodbye"
      end
    end

    Mixin.test.should == "hello"
    c.call_test.should == "goodbye"
  end

  it "makes the instance methods private" do
    m = Module.new do
      def test() "hello" end
      module_function :test
    end

    (o = mock('x')).extend(m)
    o.respond_to?(:test).should == false
    m.should have_private_instance_method(:test)
    o.send(:test).should == "hello"
    lambda { o.test }.should raise_error(NoMethodError)
  end

  it "makes the new Module methods public" do
    m = Module.new do
      def test() "hello" end
      module_function :test
    end

    m.public_methods.map {|me| me.to_s }.include?('test').should == true
  end

  it "tries to convert the given names to strings using to_str" do
    (o = mock('test')).should_receive(:to_str).any_number_of_times.and_return("test")
    (o2 = mock('test2')).should_receive(:to_str).any_number_of_times.and_return("test2")

    m = Module.new do
      def test() end
      def test2() end
      module_function o, o2
    end

    m.respond_to?(:test).should == true
    m.respond_to?(:test2).should == true
  end

  it "raises a TypeError when the given names can't be converted to string using to_str" do
    o = mock('123')

    lambda { Module.new { module_function(o) } }.should raise_error(TypeError)

    o.should_receive(:to_str).and_return(123)
    lambda { Module.new { module_function(o) } }.should raise_error(TypeError)
  end

  it "can make accessible private methods" do # JRUBY-4214
    m = Module.new do
      module_function :require
    end
    m.respond_to?(:require).should be_true
  end

  it "creates Module methods that super up the singleton class of the module" do
    super_m = Module.new do
      def foo
        "super_m"
      end
    end

    m = Module.new do
      extend super_m
      module_function
      def foo
        ["m", super]
      end
    end

    m.foo.should == ["m", "super_m"]
  end
end

describe "Module#module_function as a toggle (no arguments) in a Module body" do
  it "makes any subsequently defined methods module functions with the normal semantics" do
    m = Module.new {
      module_function
      def test1() end
      def test2() end
    }

    m.respond_to?(:test1).should == true
    m.respond_to?(:test2).should == true
  end

  it "returns the current module" do
    x = nil
    m = Module.new {
      x = module_function
    }

    x.should == m
  end

  it "stops creating module functions if the body encounters another toggle " \
     "like public/protected/private without arguments" do
    m = Module.new {
      module_function
      def test1() end
      def test2() end
      public
      def test3() end
    }

    m.respond_to?(:test1).should == true
    m.respond_to?(:test2).should == true
    m.respond_to?(:test3).should == false
  end

  it "does not stop creating module functions if the body encounters " \
     "public/protected/private WITH arguments" do
    m = Module.new {
      def foo() end
      module_function
      def test1() end
      def test2() end
      public :foo
      def test3() end
    }

    m.respond_to?(:test1).should == true
    m.respond_to?(:test2).should == true
    m.respond_to?(:test3).should == true
  end

  it "does not affect module_evaled method definitions also if outside the eval itself" do
    m = Module.new {
      module_function
      module_eval { def test1() end }
      module_eval " def test2() end "
    }

    m.respond_to?(:test1).should == false
    m.respond_to?(:test2).should == false
  end

  it "has no effect if inside a module_eval if the definitions are outside of it" do
    m = Module.new {
      module_eval { module_function }
      def test1() end
      def test2() end
    }

    m.respond_to?(:test1).should == false
    m.respond_to?(:test2).should == false
  end

  it "functions normally if both toggle and definitions inside a module_eval" do
    m = Module.new {
      module_eval {
        module_function
        def test1() end
        def test2() end
      }
    }

    m.respond_to?(:test1).should == true
    m.respond_to?(:test2).should == true
  end

  it "affects evaled method definitions also even when outside the eval itself" do
    m = Module.new {
      module_function
      eval "def test1() end"
    }

    m.respond_to?(:test1).should == true
  end

  it "doesn't affect definitions when inside an eval even if the definitions are outside of it" do
    m = Module.new {
      eval "module_function"
      def test1() end
    }

    m.respond_to?(:test1).should == false
  end

  it "functions normally if both toggle and definitions inside a eval" do
    m = Module.new {
      eval <<-CODE
        module_function

        def test1() end
        def test2() end
      CODE
    }

    m.respond_to?(:test1).should == true
    m.respond_to?(:test2).should == true
  end
end
