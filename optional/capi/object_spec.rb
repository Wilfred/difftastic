require File.expand_path('../spec_helper', __FILE__)

load_extension("object")

# TODO: fix all these specs

class CApiObjectSpecs
  class Alloc
    attr_reader :initialized, :arguments

    def initialize(*args)
      @initialized = true
      @arguments   = args
    end
  end

  class SubArray < ::Array
    def to_array
      self
    end
  end
end

describe "CApiObject" do

  before do
    @o = CApiObjectSpecs.new
  end

  class ObjectTest
    def initialize
      @foo = 7
    end

    def foo
    end

    def private_foo
    end
    private :private_foo
  end

  class AryChild < Array
  end

  class StrChild < String
  end

  class DescObjectTest < ObjectTest
  end

  class MethodArity
    def one;    end
    def two(a); end
    def three(*a);  end
    def four(a, b); end
    def five(a, b, *c);    end
    def six(a, b, *c, &d); end
  end

  describe "rb_obj_alloc" do
    it "allocates a new uninitialized object" do
      o = @o.rb_obj_alloc(CApiObjectSpecs::Alloc)
      o.class.should == CApiObjectSpecs::Alloc
      o.initialized.should be_nil
    end
  end

  describe "rb_obj_dup" do
    it "duplicates an object" do
      obj1 = ObjectTest.new
      obj2 = @o.rb_obj_dup(obj1)

      obj2.class.should == obj1.class

      obj2.foo.should == obj1.foo

      obj2.should_not equal(obj1)
    end
  end

  describe "rb_obj_call_init" do
    it "sends #initialize" do
      o = @o.rb_obj_alloc(CApiObjectSpecs::Alloc)
      o.initialized.should be_nil

      @o.rb_obj_call_init(o, 2, [:one, :two])
      o.initialized.should be_true
      o.arguments.should == [:one, :two]
    end
  end

  describe "rb_is_instance_of" do
    it "returns true if an object is an instance" do
      @o.rb_obj_is_instance_of(ObjectTest.new, ObjectTest).should == true
      @o.rb_obj_is_instance_of(DescObjectTest.new, ObjectTest).should == false
    end
  end

  describe "rb_is_kind_of" do
    it "returns true if an object is an instance or descendent" do
      @o.rb_obj_is_kind_of(ObjectTest.new, ObjectTest).should == true
      @o.rb_obj_is_kind_of(DescObjectTest.new, ObjectTest).should == true
      @o.rb_obj_is_kind_of(Object.new, ObjectTest).should == false
    end
  end

  describe "rb_respond_to" do
    it "returns 1 if respond_to? is true and 0 if respond_to? is false" do
      @o.rb_respond_to(ObjectTest.new, :foo).should == true
      @o.rb_respond_to(ObjectTest.new, :bar).should == false
    end
  end

  describe "rb_obj_respond_to" do
    it "returns true if respond_to? is true and false if respond_to? is false" do
      @o.rb_obj_respond_to(ObjectTest.new, :foo, true).should == true
      @o.rb_obj_respond_to(ObjectTest.new, :bar, true).should == false
      @o.rb_obj_respond_to(ObjectTest.new, :private_foo, false).should == false
      @o.rb_obj_respond_to(ObjectTest.new, :private_foo, true).should == true
    end
  end

  describe "rb_obj_method_arity" do
    before :each do
      @obj = MethodArity.new
    end

    it "returns 0 when the method takes no arguments" do
      @o.rb_obj_method_arity(@obj, :one).should == 0
    end

    it "returns 1 when the method takes a single, required argument" do
      @o.rb_obj_method_arity(@obj, :two).should == 1
    end

    it "returns -1 when the method takes a variable number of arguments" do
      @o.rb_obj_method_arity(@obj, :three).should == -1
    end

    it "returns 2 when the method takes two required arguments" do
      @o.rb_obj_method_arity(@obj, :four).should == 2
    end

    it "returns -N-1 when the method takes N required and variable additional arguments" do
      @o.rb_obj_method_arity(@obj, :five).should == -3
    end

    it "returns -N-1 when the method takes N required, variable additional, and a block argument" do
      @o.rb_obj_method_arity(@obj, :six).should == -3
    end
  end

  describe "rb_method_boundp" do
    it "returns true when the given method is bound" do
      @o.rb_method_boundp(Object, :class, true).should == true
      @o.rb_method_boundp(Object, :class, false).should == true
      @o.rb_method_boundp(Object, :initialize, true).should == false
      @o.rb_method_boundp(Object, :initialize, false).should == true
    end

    it "returns false when the given method is not bound" do
      @o.rb_method_boundp(Object, :foo, true).should == false
      @o.rb_method_boundp(Object, :foo, false).should == false
    end
  end

  describe "rb_to_id" do
    it "returns a symbol representation of the object" do
      @o.rb_to_id("foo").should == :foo
      @o.rb_to_id(:foo).should == :foo
    end
  end

  describe "rb_require" do
    before :each do
      @saved_loaded_features = $LOADED_FEATURES.dup
      $foo = nil
    end

    after :each do
      $foo = nil
      $LOADED_FEATURES.replace @saved_loaded_features
    end

    it "requires a ruby file" do
      $:.unshift File.dirname(__FILE__)
      @o.rb_require()
      $foo.should == 7
    end
  end

  describe "rb_attr_get" do
    it "gets an instance variable" do
      o = ObjectTest.new
      @o.rb_attr_get(o, :@foo).should == 7
    end
  end

  describe "rb_obj_instance_variables" do
    it "returns an array with instance variable names as symbols" do
      o = ObjectTest.new
      @o.rb_obj_instance_variables(o).should include(:@foo)
    end
  end

  describe "rb_check_convert_type" do
    it "returns the passed object and does not call the converting method if the object is the specified type" do
      ary = [1, 2]
      ary.should_not_receive(:to_ary)

      @o.rb_check_convert_type(ary, "Array", "to_ary").should equal(ary)
    end

    it "returns the passed object and does not call the converting method if the object is a subclass of the specified type" do
      obj = CApiObjectSpecs::SubArray.new
      obj.should_not_receive(:to_array)

      @o.rb_check_convert_type(obj, "Array", "to_array").should equal(obj)
    end

    it "returns nil if the converting method returns nil" do
      obj = mock("rb_check_convert_type")
      obj.should_receive(:to_array).and_return(nil)

      @o.rb_check_convert_type(obj, "Array", "to_array").should be_nil
    end

    it "raises a TypeError if the converting method returns an object that is not the specified type" do
      obj = mock("rb_check_convert_type")
      obj.should_receive(:to_array).and_return("string")

      lambda do
        @o.rb_check_convert_type(obj, "Array", "to_array")
      end.should raise_error(TypeError)
    end
  end

  describe "rb_convert_type" do
    it "returns the passed object and does not call the converting method if the object is the specified type" do
      ary = [1, 2]
      ary.should_not_receive(:to_ary)

      @o.rb_convert_type(ary, "Array", "to_ary").should equal(ary)
    end

    it "returns the passed object and does not call the converting method if the object is a subclass of the specified type" do
      obj = CApiObjectSpecs::SubArray.new
      obj.should_not_receive(:to_array)

      @o.rb_convert_type(obj, "Array", "to_array").should equal(obj)
    end

    it "raises a TypeError if the converting method returns nil" do
      obj = mock("rb_convert_type")
      obj.should_receive(:to_array).and_return(nil)

      lambda do
        @o.rb_convert_type(obj, "Array", "to_array")
      end.should raise_error(TypeError)
    end

    it "raises a TypeError if the converting method returns an object that is not the specified type" do
      obj = mock("rb_convert_type")
      obj.should_receive(:to_array).and_return("string")

      lambda do
        @o.rb_convert_type(obj, "Array", "to_array")
      end.should raise_error(TypeError)
    end
  end

  describe "rb_check_array_type" do
    it "returns the argument if it's an Array" do
      x = Array.new
      @o.rb_check_array_type(x).should equal(x)
    end

    it "returns the argument if it's a kind of Array" do
      x = AryChild.new
      @o.rb_check_array_type(x).should equal(x)
    end

    it "returns nil when the argument does not respond to #to_ary" do
      @o.rb_check_array_type(Object.new).should be_nil
    end

    it "sends #to_ary to the argument and returns the result if it's nil" do
      obj = mock("to_ary")
      obj.should_receive(:to_ary).and_return(nil)
      @o.rb_check_array_type(obj).should be_nil
    end

    it "sends #to_ary to the argument and returns the result if it's an Array" do
      x = Array.new
      obj = mock("to_ary")
      obj.should_receive(:to_ary).and_return(x)
      @o.rb_check_array_type(obj).should equal(x)
    end

    it "sends #to_ary to the argument and returns the result if it's a kind of Array" do
      x = AryChild.new
      obj = mock("to_ary")
      obj.should_receive(:to_ary).and_return(x)
      @o.rb_check_array_type(obj).should equal(x)
    end

    it "sends #to_ary to the argument and raises TypeError if it's not a kind of Array" do
      obj = mock("to_ary")
      obj.should_receive(:to_ary).and_return(Object.new)
      lambda { @o.rb_check_array_type obj }.should raise_error(TypeError)
    end

    it "does not rescue exceptions raised by #to_ary" do
      obj = mock("to_ary")
      obj.should_receive(:to_ary).and_raise(RuntimeError)
      lambda { @o.rb_check_array_type obj }.should raise_error(RuntimeError)
    end
  end

  describe "rb_check_string_type" do
    it "returns the argument if it's a String" do
      x = String.new
      @o.rb_check_string_type(x).should equal(x)
    end

    it "returns the argument if it's a kind of String" do
      x = StrChild.new
      @o.rb_check_string_type(x).should equal(x)
    end

    it "returns nil when the argument does not respond to #to_str" do
      @o.rb_check_string_type(Object.new).should be_nil
    end

    it "sends #to_str to the argument and returns the result if it's nil" do
      obj = mock("to_str")
      obj.should_receive(:to_str).and_return(nil)
      @o.rb_check_string_type(obj).should be_nil
    end

    it "sends #to_str to the argument and returns the result if it's a String" do
      x = String.new
      obj = mock("to_str")
      obj.should_receive(:to_str).and_return(x)
      @o.rb_check_string_type(obj).should equal(x)
    end

    it "sends #to_str to the argument and returns the result if it's a kind of String" do
      x = StrChild.new
      obj = mock("to_str")
      obj.should_receive(:to_str).and_return(x)
      @o.rb_check_string_type(obj).should equal(x)
    end

    it "sends #to_str to the argument and raises TypeError if it's not a kind of String" do
      obj = mock("to_str")
      obj.should_receive(:to_str).and_return(Object.new)
      lambda { @o.rb_check_string_type obj }.should raise_error(TypeError)
    end

    it "does not rescue exceptions raised by #to_str" do
      obj = mock("to_str")
      obj.should_receive(:to_str).and_raise(RuntimeError)
      lambda { @o.rb_check_string_type obj }.should raise_error(RuntimeError)
    end
  end

  describe "rb_check_to_integer" do
    it "returns the object when passed a Fixnum" do
      @o.rb_check_to_integer(5, "to_int").should equal(5)
    end

    it "returns the object when passed a Bignum" do
      @o.rb_check_to_integer(bignum_value, "to_int").should == bignum_value
    end

    it "calls the converting method and returns a Fixnum value" do
      obj = mock("rb_check_to_integer")
      obj.should_receive(:to_integer).and_return(10)

      @o.rb_check_to_integer(obj, "to_integer").should equal(10)
    end

    it "calls the converting method and returns a Bignum value" do
      obj = mock("rb_check_to_integer")
      obj.should_receive(:to_integer).and_return(bignum_value)

      @o.rb_check_to_integer(obj, "to_integer").should == bignum_value
    end

    it "returns nil when the converting method returns nil" do
      obj = mock("rb_check_to_integer")
      obj.should_receive(:to_integer).and_return(nil)

      @o.rb_check_to_integer(obj, "to_integer").should be_nil
    end

    it "returns nil when the converting method does not return an Integer" do
      obj = mock("rb_check_to_integer")
      obj.should_receive(:to_integer).and_return("string")

      @o.rb_check_to_integer(obj, "to_integer").should be_nil
    end
  end

  describe "rb_inspect" do
    it "returns a string with the inspect representation" do
      @o.rb_inspect(nil).should == "nil"
      @o.rb_inspect(0).should == '0'
      @o.rb_inspect([1,2,3]).should == '[1, 2, 3]'
      @o.rb_inspect("0").should == '"0"'
    end
  end

  describe "rb_class_of" do
    it "returns the class of an object" do
      @o.rb_class_of(nil).should == NilClass
      @o.rb_class_of(0).should == Fixnum
      @o.rb_class_of(0.1).should == Float
      @o.rb_class_of(ObjectTest.new).should == ObjectTest
    end
  end

  describe "rb_obj_classname" do
    it "returns the class name of an object" do
      @o.rb_obj_classname(nil).should == 'NilClass'
      @o.rb_obj_classname(0).should == Fixnum.to_s
      @o.rb_obj_classname(0.1).should == 'Float'
      @o.rb_obj_classname(ObjectTest.new).should == 'ObjectTest'
    end
  end

  describe "rb_type" do
    it "returns the type constant for the object" do
      class DescArray < Array
      end
      @o.rb_is_type_nil(nil).should == true
      @o.rb_is_type_object([]).should == false
      @o.rb_is_type_object(ObjectTest.new).should == true
      @o.rb_is_type_array([]).should == true
      @o.rb_is_type_array(DescArray.new).should == true
      @o.rb_is_type_module(ObjectTest).should == false
      @o.rb_is_type_class(ObjectTest).should == true
      @o.rb_is_type_data(Time.now).should == true
    end
  end

  describe "rb_type_p" do
    it "returns whether object is of the given type" do
      class DescArray < Array
      end
      @o.rb_is_rb_type_p_nil(nil).should == true
      @o.rb_is_rb_type_p_object([]).should == false
      @o.rb_is_rb_type_p_object(ObjectTest.new).should == true
      @o.rb_is_rb_type_p_array([]).should == true
      @o.rb_is_rb_type_p_array(DescArray.new).should == true
      @o.rb_is_rb_type_p_module(ObjectTest).should == false
      @o.rb_is_rb_type_p_class(ObjectTest).should == true
      @o.rb_is_rb_type_p_data(Time.now).should == true
    end
  end

  describe "BUILTIN_TYPE" do
    it "returns the type constant for the object" do
      class DescArray < Array
      end
      @o.rb_is_builtin_type_object([]).should == false
      @o.rb_is_builtin_type_object(ObjectTest.new).should == true
      @o.rb_is_builtin_type_array([]).should == true
      @o.rb_is_builtin_type_array(DescArray.new).should == true
      @o.rb_is_builtin_type_module(ObjectTest).should == false
      @o.rb_is_builtin_type_class(ObjectTest).should == true
      @o.rb_is_builtin_type_data(Time.now).should == true
    end
  end

  describe "RTEST" do
    it "returns C false if passed Qfalse" do
      @o.RTEST(false).should be_false
    end

    it "returns C false if passed Qnil" do
      @o.RTEST(nil).should be_false
    end

    it "returns C true if passed Qtrue" do
      @o.RTEST(true).should be_true
    end

    it "returns C true if passed a Symbol" do
      @o.RTEST(:test).should be_true
    end

    it "returns C true if passed an Object" do
      @o.RTEST(Object.new).should be_true
    end
  end

  describe "rb_special_const_p" do
    it "returns true if passed Qfalse" do
      @o.rb_special_const_p(false).should be_true
    end

    it "returns true if passed Qtrue" do
      @o.rb_special_const_p(true).should be_true
    end

    it "returns true if passed Qnil" do
      @o.rb_special_const_p(nil).should be_true
    end

    it "returns true if passed a Symbol" do
      @o.rb_special_const_p(:test).should be_true
    end

    it "returns true if passed a Fixnum" do
      @o.rb_special_const_p(10).should be_true
    end

    it "returns false if passed an Object" do
      @o.rb_special_const_p(Object.new).should be_false
    end
  end

  describe "rb_extend_object" do
    it "adds the module's instance methods to the object" do
      module CApiObjectSpecs::Extend
        def reach
          :extended
        end
      end

      obj = mock("extended object")
      @o.rb_extend_object(obj, CApiObjectSpecs::Extend)
      obj.reach.should == :extended
    end
  end

  describe "OBJ_TAINT" do
    it "taints the object" do
      obj = mock("tainted")
      @o.OBJ_TAINT(obj)
      obj.tainted?.should be_true
    end
  end

  describe "OBJ_TAINTED" do
    it "returns C true if the object is tainted" do
      obj = mock("tainted")
      obj.taint
      @o.OBJ_TAINTED(obj).should be_true
    end

    it "returns C false if the object is not tainted" do
      obj = mock("untainted")
      @o.OBJ_TAINTED(obj).should be_false
    end
  end

  describe "OBJ_INFECT" do
    it "does not taint the first argument if the second argument is not tainted" do
      host   = mock("host")
      source = mock("source")
      @o.OBJ_INFECT(host, source)
      host.tainted?.should be_false
    end

    it "taints the first argument if the second argument is tainted" do
      host   = mock("host")
      source = mock("source").taint
      @o.OBJ_INFECT(host, source)
      host.tainted?.should be_true
    end

    it "does not untrust the first argument if the second argument is trusted" do
      host   = mock("host")
      source = mock("source")
      @o.OBJ_INFECT(host, source)
      host.untrusted?.should be_false
    end

    it "untrusts the first argument if the second argument is untrusted" do
      host   = mock("host")
      source = mock("source").untrust
      @o.OBJ_INFECT(host, source)
      host.untrusted?.should be_true
    end

    it "propagates both taint and distrust" do
      host   = mock("host")
      source = mock("source").taint.untrust
      @o.OBJ_INFECT(host, source)
      host.tainted?.should be_true
      host.untrusted?.should be_true
    end
  end

  describe "rb_obj_freeze" do
    it "freezes the object passed to it" do
      obj = ""
      @o.rb_obj_freeze(obj).should == obj
      obj.frozen?.should be_true
    end
  end

  describe "rb_obj_instance_eval" do
    it "evaluates the block in the object context, that includes private methods" do
      obj = ObjectTest
      lambda do
        @o.rb_obj_instance_eval(obj) { include Kernel }
      end.should_not raise_error(NoMethodError)
    end
  end

  describe "rb_obj_frozen_p" do
    it "returns true if object passed to it is frozen" do
      obj = ""
      obj.freeze
      @o.rb_obj_frozen_p(obj).should == true
    end

    it "returns false if object passed to it is not frozen" do
      obj = ""
      @o.rb_obj_frozen_p(obj).should == false
    end
  end

  describe "rb_obj_taint" do
    it "marks the object passed as tainted" do
      obj = ""
      obj.tainted?.should == false
      @o.rb_obj_taint(obj)
      obj.tainted?.should == true
    end

    it "raises a RuntimeError if the object passed is frozen" do
      lambda { @o.rb_obj_taint("".freeze) }.should raise_error(RuntimeError)
    end
  end

  describe "rb_check_frozen" do
    it "raises a RuntimeError if the obj is frozen" do
      lambda { @o.rb_check_frozen("".freeze) }.should raise_error(RuntimeError)
    end

    it "does nothing when object isn't frozen" do
      obj = ""
      lambda { @o.rb_check_frozen(obj) }.should_not raise_error(TypeError)
    end
  end

  describe "rb_any_to_s" do
    it "converts an Integer to string" do
      obj = 1
      i = @o.rb_any_to_s(obj)
      i.should be_kind_of(String)
    end

    it "converts an Object to string" do
      obj = Object.new
      i = @o.rb_any_to_s(obj)
      i.should be_kind_of(String)
    end
  end

  describe "rb_to_int" do
    it "returns self when called on an Integer" do
      @o.rb_to_int(5).should == 5
    end

    it "returns self when called on a Bignum" do
      @o.rb_to_int(bignum_value).should == bignum_value
    end

    it "calls #to_int to convert and object to an integer" do
      x = mock("to_int")
      x.should_receive(:to_int).and_return(5)
      @o.rb_to_int(x).should == 5
    end

    it "converts a Float to an Integer by truncation" do
      @o.rb_to_int(1.35).should == 1
    end

    it "raises a TypeError if #to_int does not return an Integer" do
      x = mock("to_int")
      x.should_receive(:to_int).and_return("5")
      lambda { @o.rb_to_int(x) }.should raise_error(TypeError)
    end

    it "raises a TypeError if called with nil" do
      lambda { @o.rb_to_int(nil) }.should raise_error(TypeError)
    end

    it "raises a TypeError if called with true" do
      lambda { @o.rb_to_int(true) }.should raise_error(TypeError)
    end

    it "raises a TypeError if called with false" do
      lambda { @o.rb_to_int(false) }.should raise_error(TypeError)
    end

    it "raises a TypeError if called with a String" do
      lambda { @o.rb_to_int("1") }.should raise_error(TypeError)
    end
  end

  describe "rb_equal" do
    it "returns true if the arguments are the same exact object" do
      s = "hello"
      @o.rb_equal(s, s).should be_true
    end

    it "calls == to check equality and coerces to true/false" do
      m = mock("string")
      m.should_receive(:==).and_return(8)
      @o.rb_equal(m, "hello").should be_true

      m2 = mock("string")
      m2.should_receive(:==).and_return(nil)
      @o.rb_equal(m2, "hello").should be_false
    end
  end

  describe "rb_class_inherited_p" do

    it "returns true if mod equals arg" do
      @o.rb_class_inherited_p(Array, Array).should be_true
    end

    it "returns true if mod is a subclass of arg" do
      @o.rb_class_inherited_p(Array, Object).should be_true
    end

    it "returns nil if mod is not a subclass of arg" do
      @o.rb_class_inherited_p(Array, Hash).should be_nil
    end

    it "raises a TypeError if arg is no class or module" do
      lambda{
        @o.rb_class_inherited_p(1, 2)
      }.should raise_error(TypeError)
    end

  end

  describe "instance variable access" do
    before do
      @test = ObjectTest.new
    end

    describe "rb_iv_get" do
      it "returns the instance variable on an object" do
        @o.rb_iv_get(@test, "@foo").should == @test.instance_eval { @foo }
      end

      it "returns nil if the instance variable has not been initialized" do
        @o.rb_iv_get(@test, "@bar").should == nil
      end
    end

    describe "rb_iv_set" do
      it "sets and returns the instance variable on an object" do
        @o.rb_iv_set(@test, "@foo", 42).should == 42
        @test.instance_eval { @foo }.should == 42
      end

      it "sets and returns the instance variable with a bare name" do
        @o.rb_iv_set(@test, "foo", 42).should == 42
        @o.rb_iv_get(@test, "foo").should == 42
        @test.instance_eval { @foo }.should == 7
      end
    end

    describe "rb_ivar_get" do
      it "returns the instance variable on an object" do
        @o.rb_ivar_get(@test, :@foo).should == @test.instance_eval { @foo }
      end

      it "returns nil if the instance variable has not been initialized" do
        @o.rb_ivar_get(@test, :@bar).should == nil
      end
    end

    describe "rb_ivar_set" do
      it "sets and returns the instance variable on an object" do
        @o.rb_ivar_set(@test, :@foo, 42).should == 42
        @test.instance_eval { @foo }.should == 42
      end
    end

    describe "rb_ivar_defined" do
      it "returns true if the instance variable is defined" do
        @o.rb_ivar_defined(@test, :@foo).should == true
      end

      it "returns false if the instance variable is not defined" do
        @o.rb_ivar_defined(@test, :@bar).should == false
      end
    end
  end
end
