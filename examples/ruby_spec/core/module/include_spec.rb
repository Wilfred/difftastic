require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#include" do
  it "is a public method" do
    Module.should have_public_instance_method(:include, false)
  end

  it "calls #append_features(self) in reversed order on each module" do
    $appended_modules = []

    m = Module.new do
      def self.append_features(mod)
        $appended_modules << [ self, mod ]
      end
    end

    m2 = Module.new do
      def self.append_features(mod)
        $appended_modules << [ self, mod ]
      end
    end

    m3 = Module.new do
      def self.append_features(mod)
        $appended_modules << [ self, mod ]
      end
    end

    c = Class.new { include(m, m2, m3) }

    $appended_modules.should == [ [ m3, c], [ m2, c ], [ m, c ] ]
  end

  it "adds all ancestor modules when a previously included module is included again" do
    ModuleSpecs::MultipleIncludes.ancestors.should include(ModuleSpecs::MA, ModuleSpecs::MB)
    ModuleSpecs::MB.include(ModuleSpecs::MC)
    ModuleSpecs::MultipleIncludes.include(ModuleSpecs::MB)
    ModuleSpecs::MultipleIncludes.ancestors.should include(ModuleSpecs::MA, ModuleSpecs::MB, ModuleSpecs::MC)
  end

  it "raises a TypeError when the argument is not a Module" do
    lambda { ModuleSpecs::Basic.include(Class.new) }.should raise_error(TypeError)
  end

  it "does not raise a TypeError when the argument is an instance of a subclass of Module" do
    lambda { ModuleSpecs::SubclassSpec.include(ModuleSpecs::Subclass.new) }.should_not raise_error(TypeError)
  end

  it "imports constants to modules and classes" do
    ModuleSpecs::A.constants.should include(:CONSTANT_A)
    ModuleSpecs::B.constants.should include(:CONSTANT_A, :CONSTANT_B)
    ModuleSpecs::C.constants.should include(:CONSTANT_A, :CONSTANT_B)
  end

  it "shadows constants from ancestors" do
    klass = Class.new
    klass.include ModuleSpecs::ShadowingOuter::M
    klass::SHADOW.should == 123
    klass.include ModuleSpecs::ShadowingOuter::N
    klass::SHADOW.should == 456
  end

  it "does not override existing constants in modules and classes" do
    ModuleSpecs::A::OVERRIDE.should == :a
    ModuleSpecs::B::OVERRIDE.should == :b
    ModuleSpecs::C::OVERRIDE.should == :c
  end

  it "imports instance methods to modules and classes" do
    ModuleSpecs::A.instance_methods.should include(:ma)
    ModuleSpecs::B.instance_methods.should include(:ma,:mb)
    ModuleSpecs::C.instance_methods.should include(:ma,:mb)
  end

  it "does not import methods to modules and classes" do
    ModuleSpecs::A.methods.include?(:cma).should == true
    ModuleSpecs::B.methods.include?(:cma).should == false
    ModuleSpecs::B.methods.include?(:cmb).should == true
    ModuleSpecs::C.methods.include?(:cma).should == false
    ModuleSpecs::C.methods.include?(:cmb).should == false
  end

  it "attaches the module as the caller's immediate ancestor" do
    module IncludeSpecsTop
      def value; 5; end
    end

    module IncludeSpecsMiddle
      include IncludeSpecsTop
      def value; 6; end
    end

    class IncludeSpecsClass
      include IncludeSpecsMiddle
    end

    IncludeSpecsClass.new.value.should == 6
  end

  it "doesn't include module if it is included in a super class" do
    module ModuleSpecs::M1
      module M; end
      class A; include M; end
      class B < A; include M; end

      all = [A,B,M]

      (B.ancestors & all).should == [B, A, M]
    end
  end

  it "recursively includes new mixins" do
    module ModuleSpecs::M1
      module U; end
      module V; end
      module W; end
      module X; end
      module Y; end
      class A; include X; end;
      class B < A; include U, V, W; end;

      # update V
      module V; include X, U, Y; end

      # This code used to use Array#& and then compare 2 arrays, but
      # the ordering from Array#& is undefined, as it uses Hash internally.
      #
      # Loop is more verbose, but more explicit in what we're testing.

      anc = B.ancestors
      [B, U, V, W, A, X].each do |i|
        anc.include?(i).should be_true
      end

      class B; include V; end

      # the only new module is Y, it is added after U since it follows U in V mixin list:
      anc = B.ancestors
      [B, U, Y, V, W, A, X].each do |i|
        anc.include?(i).should be_true
      end
    end
  end

  it "preserves ancestor order" do
    module ModuleSpecs::M2
      module M1; end
      module M2; end
      module M3; include M2; end

      module M2; include M1; end
      module M3; include M2; end

      M3.ancestors.should == [M3, M2, M1]

    end
  end

  it "detects cyclic includes" do
    lambda {
      module ModuleSpecs::M
        include ModuleSpecs::M
      end
    }.should raise_error(ArgumentError)
  end

  ruby_version_is ''...'2.4' do
    it "accepts no-arguments" do
      lambda {
        Module.new do
          include
        end
      }.should_not raise_error
    end
  end

  ruby_version_is '2.4' do
    it "doesn't accept no-arguments" do
      lambda {
        Module.new do
          include
        end
      }.should raise_error(ArgumentError)
    end
  end

  it "returns the class it's included into" do
    m = Module.new
    r = nil
    c = Class.new { r = include m }
    r.should == c
  end

  it "ignores modules it has already included via module mutual inclusion" do
    module ModuleSpecs::AlreadyInc
      module M0
      end

      module M
        include M0
      end

      class K
        include M
        include M
      end

      K.ancestors[0].should == K
      K.ancestors[1].should == M
      K.ancestors[2].should == M0
    end
  end

  it "clears any caches" do
    module ModuleSpecs::M3
      module M1
        def foo
          :m1
        end
      end

      module M2
        def foo
          :m2
        end
      end

      class C
        include M1

        def get
          foo
        end
      end

      c = C.new
      c.get.should == :m1

      class C
        include M2
      end

      c.get.should == :m2

      remove_const :C
    end
  end
end

describe "Module#include?" do
  it "returns true if the given module is included by self or one of it's ancestors" do
    ModuleSpecs::Super.include?(ModuleSpecs::Basic).should == true
    ModuleSpecs::Child.include?(ModuleSpecs::Basic).should == true
    ModuleSpecs::Child.include?(ModuleSpecs::Super).should == true
    ModuleSpecs::Child.include?(Kernel).should == true

    ModuleSpecs::Parent.include?(ModuleSpecs::Basic).should == false
    ModuleSpecs::Basic.include?(ModuleSpecs::Super).should == false
  end

  it "returns false if given module is equal to self" do
    ModuleSpecs.include?(ModuleSpecs).should == false
  end

  it "raises a TypeError when no module was given" do
    lambda { ModuleSpecs::Child.include?("Test") }.should raise_error(TypeError)
    lambda { ModuleSpecs::Child.include?(ModuleSpecs::Parent) }.should raise_error(TypeError)
  end
end
