require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/module', __FILE__)

load_extension('module')

describe "CApiModule" do

  before :each do
    @m = CApiModuleSpecs.new
  end

  describe "rb_define_global_const" do
    it "defines a constant on Object" do
      @m.rb_define_global_const("CApiModuleSpecsGlobalConst", 7)
      ::CApiModuleSpecsGlobalConst.should == 7
      Object.send :remove_const, :CApiModuleSpecsGlobalConst
    end
  end

  describe "rb_const_set given a symbol name and a value" do
    it "sets a new constant on a module" do
      @m.rb_const_set(CApiModuleSpecs::C, :W, 7)
      CApiModuleSpecs::C::W.should == 7
    end

    it "sets an existing constant's value" do
      -> {
        @m.rb_const_set(CApiModuleSpecs::C, :Z, 8)
      }.should complain(/already initialized constant/)
      CApiModuleSpecs::C::Z.should == 8
    end
  end

  describe "rb_define_module" do
    it "returns the module if it is already defined" do
      mod = @m.rb_define_module("CApiModuleSpecsModuleA")
      mod.const_get(:X).should == 1
    end

    it "raises a TypeError if the constant is not a module" do
      ::CApiModuleSpecsGlobalConst = 7
      lambda { @m.rb_define_module("CApiModuleSpecsGlobalConst") }.should raise_error(TypeError)
      Object.send :remove_const, :CApiModuleSpecsGlobalConst
    end

    it "defines a new module at toplevel" do
      mod = @m.rb_define_module("CApiModuleSpecsModuleB")
      mod.should be_kind_of(Module)
      mod.name.should == "CApiModuleSpecsModuleB"
      ::CApiModuleSpecsModuleB.should be_kind_of(Module)
      Object.send :remove_const, :CApiModuleSpecsModuleB
    end
  end

  describe "rb_define_module_under" do
    it "creates a new module inside the inner class" do
      mod = @m.rb_define_module_under(CApiModuleSpecs, "ModuleSpecsModuleUnder1")
      mod.should be_kind_of(Module)
    end

    it "sets the module name" do
      mod = @m.rb_define_module_under(CApiModuleSpecs, "ModuleSpecsModuleUnder2")
      mod.name.should == "CApiModuleSpecs::ModuleSpecsModuleUnder2"
    end
  end

  describe "rb_define_module_under" do
    before :each do
      compile_extension("module_under_autoload")
    end

    it "defines a module for an existing Autoload with an extension" do
      CApiModuleSpecs::ModuleUnderAutoload.name.should == "CApiModuleSpecs::ModuleUnderAutoload"
    end

    it "defines a module for an existing Autoload with a ruby object" do
      CApiModuleSpecs::RubyUnderAutoload.name.should == "CApiModuleSpecs::RubyUnderAutoload"
    end
  end

  describe "rb_define_const given a String name and a value" do
    it "defines a new constant on a module" do
      @m.rb_define_const(CApiModuleSpecs::C, "V", 7)
      CApiModuleSpecs::C::V.should == 7
    end

    it "sets an existing constant's value" do
      -> {
        @m.rb_define_const(CApiModuleSpecs::C, "Z", 9)
      }.should complain(/already initialized constant/)
      CApiModuleSpecs::C::Z.should == 9
    end
  end

  describe "rb_const_defined" do
    # The fixture converts C boolean test to Ruby 'true' / 'false'
    it "returns C non-zero if a constant is defined" do
      @m.rb_const_defined(CApiModuleSpecs::A, :X).should be_true
    end

    it "returns C non-zero if a constant is defined in Object" do
      @m.rb_const_defined(CApiModuleSpecs::A, :Module).should be_true
    end
  end

  describe "rb_const_defined_at" do
    # The fixture converts C boolean test to Ruby 'true' / 'false'
    it "returns C non-zero if a constant is defined" do
      @m.rb_const_defined_at(CApiModuleSpecs::A, :X).should be_true
    end

    it "does not search in ancestors for the constant" do
      @m.rb_const_defined_at(CApiModuleSpecs::B, :X).should be_false
    end

    it "does not search in Object" do
      @m.rb_const_defined_at(CApiModuleSpecs::A, :Module).should be_false
    end
  end

  describe "rb_const_get" do
    it "returns a constant defined in the module" do
      @m.rb_const_get(CApiModuleSpecs::A, :X).should == 1
    end

    it "returns a constant defined at toplevel" do
      @m.rb_const_get(CApiModuleSpecs::A, :Fixnum).should == Fixnum
    end

    it "returns a constant defined in a superclass" do
      @m.rb_const_get(CApiModuleSpecs::B, :X).should == 1
    end

    it "calls #const_missing if the constant is not defined in the class or ancestors" do
      CApiModuleSpecs::A.should_receive(:const_missing).with(:CApiModuleSpecsUndefined)
      @m.rb_const_get(CApiModuleSpecs::A, :CApiModuleSpecsUndefined)
    end

    it "resolves autoload constants in classes" do
      @m.rb_const_get(CApiModuleSpecs::A, :D).should == 123
    end

    it "resolves autoload constants in Object" do
      @m.rb_const_get(Object, :CApiModuleSpecsAutoload).should == 123
    end
  end

  describe "rb_const_get_from" do
    it "returns a constant defined in the module" do
      @m.rb_const_get_from(CApiModuleSpecs::B, :Y).should == 2
    end

    it "returns a constant defined in a superclass" do
      @m.rb_const_get_from(CApiModuleSpecs::B, :X).should == 1
    end

    it "calls #const_missing if the constant is not defined in the class or ancestors" do
      CApiModuleSpecs::M.should_receive(:const_missing).with(:Fixnum)
      @m.rb_const_get_from(CApiModuleSpecs::M, :Fixnum)
    end

    it "resolves autoload constants" do
      @m.rb_const_get_from(CApiModuleSpecs::A, :C).should == 123
    end
  end

  describe "rb_const_get_at" do
    it "returns a constant defined in the module" do
      @m.rb_const_get_at(CApiModuleSpecs::B, :Y).should == 2
    end

    it "resolves autoload constants" do
      @m.rb_const_get_at(CApiModuleSpecs::A, :B).should == 123
    end

    it "calls #const_missing if the constant is not defined in the module" do
      CApiModuleSpecs::B.should_receive(:const_missing).with(:X)
      @m.rb_const_get_at(CApiModuleSpecs::B, :X)
    end
  end

  describe "rb_define_alias" do
    it "defines an alias for an existing method" do
      cls = Class.new do
        def method_to_be_aliased
          :method_to_be_aliased
        end
      end

      @m.rb_define_alias cls, "method_alias", "method_to_be_aliased"
      cls.new.method_alias.should == :method_to_be_aliased
    end
  end

  describe "rb_alias" do
    it "defines an alias for an existing method" do
      cls = Class.new do
        def method_to_be_aliased
          :method_to_be_aliased
        end
      end

      @m.rb_alias cls, :method_alias, :method_to_be_aliased
      cls.new.method_alias.should == :method_to_be_aliased
    end
  end

  describe "rb_define_global_function" do
    it "defines a method on Kernel" do
      @m.rb_define_global_function("module_specs_global_function")
      Kernel.should have_method(:module_specs_global_function)
      module_specs_global_function.should == :test_method
    end
  end

  describe "rb_define_method" do
    it "defines a method on a class" do
      cls = Class.new
      @m.rb_define_method(cls, "test_method")
      cls.should have_instance_method(:test_method)
      cls.new.test_method.should == :test_method
    end

    it "defines a method on a module" do
      mod = Module.new
      @m.rb_define_method(mod, "test_method")
      mod.should have_instance_method(:test_method)
    end
  end

  describe "rb_define_module_function" do
    before :each do
      @mod = Module.new
      @m.rb_define_module_function @mod, "test_module_function"
    end

    it "defines a module function" do
      @mod.test_module_function.should == :test_method
    end

    it "defines a private instance method" do
      cls = Class.new
      cls.include(@mod)

      cls.should have_private_instance_method(:test_module_function)
    end
  end

  describe "rb_define_private_method" do
    it "defines a private method on a class" do
      cls = Class.new
      @m.rb_define_private_method(cls, "test_method")
      cls.should have_private_instance_method(:test_method)
      cls.new.send(:test_method).should == :test_method
    end

    it "defines a private method on a module" do
      mod = Module.new
      @m.rb_define_private_method(mod, "test_method")
      mod.should have_private_instance_method(:test_method)
    end
  end

  describe "rb_define_protected_method" do
    it "defines a protected method on a class" do
      cls = Class.new
      @m.rb_define_protected_method(cls, "test_method")
      cls.should have_protected_instance_method(:test_method)
      cls.new.send(:test_method).should == :test_method
    end

    it "defines a protected method on a module" do
      mod = Module.new
      @m.rb_define_protected_method(mod, "test_method")
      mod.should have_protected_instance_method(:test_method)
    end
  end

  describe "rb_define_singleton_method" do
    it "defines a method on the singleton class" do
      cls = Class.new
      a = cls.new
      @m.rb_define_singleton_method a, "module_specs_singleton_method"
      a.module_specs_singleton_method.should == :test_method
      lambda { cls.new.module_specs_singleton_method }.should raise_error(NoMethodError)
    end
  end

  describe "rb_undef_method" do
    before :each do
      @class = Class.new do
        def ruby_test_method
          :ruby_test_method
        end
      end
    end

    it "undef'ines a method on a class" do
      @class.new.ruby_test_method.should == :ruby_test_method
      @m.rb_undef_method @class, "ruby_test_method"
      @class.should_not have_instance_method(:ruby_test_method)
    end

    it "does not raise exceptions when passed a missing name" do
      lambda { @m.rb_undef_method @class, "not_exist" }.should_not raise_error
    end

    describe "when given a frozen Class" do
      before :each do
        @frozen = @class.dup.freeze
      end

      it "raises a RuntimeError when passed a name" do
        lambda { @m.rb_undef_method @frozen, "ruby_test_method" }.should raise_error(RuntimeError)
      end

      it "raises a RuntimeError when passed a missing name" do
        lambda { @m.rb_undef_method @frozen, "not_exist" }.should raise_error(RuntimeError)
      end
    end
  end

  describe "rb_undef" do
    it "undef'ines a method on a class" do
      cls = Class.new do
        def ruby_test_method
          :ruby_test_method
        end
      end

      cls.new.ruby_test_method.should == :ruby_test_method
      @m.rb_undef cls, :ruby_test_method
      cls.should_not have_instance_method(:ruby_test_method)
    end
  end

  describe "rb_class2name" do
    it "returns the module name" do
      @m.rb_class2name(CApiModuleSpecs::M).should == "CApiModuleSpecs::M"
    end
  end
end
