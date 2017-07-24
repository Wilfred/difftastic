require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require 'thread'

describe "Module#autoload?" do
  it "returns the name of the file that will be autoloaded" do
    ModuleSpecs::Autoload.autoload :Autoload, "autoload.rb"
    ModuleSpecs::Autoload.autoload?(:Autoload).should == "autoload.rb"
  end

  it "returns nil if no file has been registered for a constant" do
    ModuleSpecs::Autoload.autoload?(:Manualload).should be_nil
  end
end

describe "Module#autoload" do
  before :all do
    @non_existent = fixture __FILE__, "no_autoload.rb"
  end

  before :each do
    @loaded_features = $".dup
    @frozen_module = Module.new.freeze

    ScratchPad.clear
  end

  after :each do
    $".replace @loaded_features
  end

  it "registers a file to load the first time the named constant is accessed" do
    ModuleSpecs::Autoload.autoload :A, @non_existent
    ModuleSpecs::Autoload.autoload?(:A).should == @non_existent
  end

  it "sets the autoload constant in the constants table" do
    ModuleSpecs::Autoload.autoload :B, @non_existent
    ModuleSpecs::Autoload.should have_constant(:B)
  end

  it "loads the registered constant when it is accessed" do
    ModuleSpecs::Autoload.should_not have_constant(:X)
    ModuleSpecs::Autoload.autoload :X, fixture(__FILE__, "autoload_x.rb")
    ModuleSpecs::Autoload::X.should == :x
    ModuleSpecs::Autoload.send(:remove_const, :X)
  end

  it "loads the registered constant into a dynamically created class" do
    cls = Class.new { autoload :C, fixture(__FILE__, "autoload_c.rb") }
    ModuleSpecs::Autoload::DynClass = cls

    ScratchPad.recorded.should be_nil
    ModuleSpecs::Autoload::DynClass::C.new.loaded.should == :dynclass_c
    ScratchPad.recorded.should == :loaded
  end

  it "loads the registered constant into a dynamically created module" do
    mod = Module.new { autoload :D, fixture(__FILE__, "autoload_d.rb") }
    ModuleSpecs::Autoload::DynModule = mod

    ScratchPad.recorded.should be_nil
    ModuleSpecs::Autoload::DynModule::D.new.loaded.should == :dynmodule_d
    ScratchPad.recorded.should == :loaded
  end

  it "loads the registered constant when it is opened as a class" do
    ModuleSpecs::Autoload.autoload :E, fixture(__FILE__, "autoload_e.rb")
    class ModuleSpecs::Autoload::E
    end
    ModuleSpecs::Autoload::E.new.loaded.should == :autoload_e
  end

  it "loads the registered constant when it is opened as a module" do
    ModuleSpecs::Autoload.autoload :F, fixture(__FILE__, "autoload_f.rb")
    module ModuleSpecs::Autoload::F
    end
    ModuleSpecs::Autoload::F.loaded.should == :autoload_f
  end

  it "loads the registered constant when it is inherited from" do
    ModuleSpecs::Autoload.autoload :G, fixture(__FILE__, "autoload_g.rb")
    class ModuleSpecs::Autoload::Gsub < ModuleSpecs::Autoload::G
    end
    ModuleSpecs::Autoload::Gsub.new.loaded.should == :autoload_g
  end

  it "loads the registered constant when it is included" do
    ModuleSpecs::Autoload.autoload :H, fixture(__FILE__, "autoload_h.rb")
    class ModuleSpecs::Autoload::HClass
      include ModuleSpecs::Autoload::H
    end
    ModuleSpecs::Autoload::HClass.new.loaded.should == :autoload_h
  end

  it "does not load the file when the constant is already set" do
    ModuleSpecs::Autoload.autoload :I, fixture(__FILE__, "autoload_i.rb")
    ModuleSpecs::Autoload.const_set :I, 3
    ModuleSpecs::Autoload::I.should == 3
    ScratchPad.recorded.should be_nil
  end

  it "loads a file with .rb extension when passed the name without the extension" do
    ModuleSpecs::Autoload.autoload :J, fixture(__FILE__, "autoload_j")
    ModuleSpecs::Autoload::J.should == :autoload_j
  end

  it "does not load the file if the file is manually required" do
    filename = fixture(__FILE__, "autoload_k.rb")
    ModuleSpecs::Autoload.autoload :KHash, filename

    require filename
    ScratchPad.recorded.should == :loaded
    ScratchPad.clear

    ModuleSpecs::Autoload::KHash.should be_kind_of(Class)
    ModuleSpecs::Autoload::KHash::K.should == :autoload_k
    ScratchPad.recorded.should be_nil
  end

  it "ignores the autoload request if the file is already loaded" do
    filename = fixture(__FILE__, "autoload_s.rb")

    require filename

    ScratchPad.recorded.should == :loaded
    ScratchPad.clear

    ModuleSpecs::Autoload.autoload :S, filename
    ModuleSpecs::Autoload.autoload?(:S).should be_nil
    ModuleSpecs::Autoload.send(:remove_const, :S)
  end

  it "retains the autoload even if the request to require fails" do
    filename = fixture(__FILE__, "a_path_that_should_not_exist.rb")

    ModuleSpecs::Autoload.autoload :NotThere, filename
    ModuleSpecs::Autoload.autoload?(:NotThere).should == filename

    lambda {
      require filename
    }.should raise_error(LoadError)

    ModuleSpecs::Autoload.autoload?(:NotThere).should == filename
  end

  it "allows multiple autoload constants for a single file" do
    filename = fixture(__FILE__, "autoload_lm.rb")
    ModuleSpecs::Autoload.autoload :L, filename
    ModuleSpecs::Autoload.autoload :M, filename
    ModuleSpecs::Autoload::L.should == :autoload_l
    ModuleSpecs::Autoload::M.should == :autoload_m
  end

  it "runs for an exception condition class and doesn't trample the exception" do
    filename = fixture(__FILE__, "autoload_ex1.rb")
    ModuleSpecs::Autoload.autoload :EX1, filename
    ModuleSpecs::Autoload.use_ex1.should == :good
  end

  it "does not load the file when referring to the constant in defined?" do
    module ModuleSpecs::Autoload::Q
      autoload :R, fixture(__FILE__, "autoload.rb")
      defined?(R).should == "constant"
    end
    ModuleSpecs::Autoload::Q.should have_constant(:R)
  end

  it "does not remove the constant from the constant table if load fails" do
    ModuleSpecs::Autoload.autoload :Fail, @non_existent
    ModuleSpecs::Autoload.should have_constant(:Fail)

    lambda { ModuleSpecs::Autoload::Fail }.should raise_error(LoadError)
    ModuleSpecs::Autoload.should have_constant(:Fail)
  end

  it "does not remove the constant from the constant table if the loaded files does not define it" do
    ModuleSpecs::Autoload.autoload :O, fixture(__FILE__, "autoload_o.rb")
    ModuleSpecs::Autoload.should have_constant(:O)

    lambda { ModuleSpecs::Autoload::O }.should raise_error(NameError)
    ModuleSpecs::Autoload.should have_constant(:O)
  end

  it "returns 'constant' on referring the constant with defined?()" do
    module ModuleSpecs::Autoload::Q
      autoload :R, fixture(__FILE__, "autoload.rb")
      defined?(R).should == 'constant'
    end
    ModuleSpecs::Autoload::Q.should have_constant(:R)
  end

  it "does not load the file when removing an autoload constant" do
    module ModuleSpecs::Autoload::Q
      autoload :R, fixture(__FILE__, "autoload.rb")
      remove_const :R
    end
    ModuleSpecs::Autoload::Q.should_not have_constant(:R)
  end

  it "does not load the file when accessing the constants table of the module" do
    ModuleSpecs::Autoload.autoload :P, @non_existent
    ModuleSpecs::Autoload.const_defined?(:P).should be_true
  end

  it "loads the file when opening a module that is the autoloaded constant" do
    module ModuleSpecs::Autoload::U
      autoload :V, fixture(__FILE__, "autoload_v.rb")

      class V
        X = get_value
      end
    end

    ModuleSpecs::Autoload::U::V::X.should == :autoload_uvx
  end

  it "loads the file that defines subclass XX::YY < YY and YY is a top level constant" do

    module ModuleSpecs::Autoload::XX
      autoload :YY, fixture(__FILE__, "autoload_subclass.rb")
    end

    ModuleSpecs::Autoload::XX::YY.superclass.should == YY
  end


  it "looks up the constant in the scope where it is referred" do
    module ModuleSpecs
      module Autoload
        autoload :QQ, fixture(__FILE__, "autoload_scope.rb")
        class PP
          QQ.new.should be_kind_of(ModuleSpecs::Autoload::PP::QQ)
        end
      end
    end
  end

  it "looks up the constant when in a meta class scope" do
    module ModuleSpecs
      module Autoload
        autoload :R, fixture(__FILE__, "autoload_r.rb")
        class << self
          def r
            R.new
          end
        end
      end
    end
    ModuleSpecs::Autoload.r.should be_kind_of(ModuleSpecs::Autoload::R)
  end

  # [ruby-core:19127] [ruby-core:29941]
  it "does NOT raise a NameError when the autoload file did not define the constant and a module is opened with the same name" do
    module ModuleSpecs::Autoload
      class W
        autoload :Y, fixture(__FILE__, "autoload_w.rb")

        class Y
        end
      end
    end

    ModuleSpecs::Autoload::W::Y.should be_kind_of(Class)
    ScratchPad.recorded.should == :loaded
    ModuleSpecs::Autoload::W.send(:remove_const, :Y)
  end

  it "calls #to_path on non-string filenames" do
    p = mock('path')
    p.should_receive(:to_path).and_return @non_existent
    ModuleSpecs.autoload :A, p
  end

  it "raises an ArgumentError when an empty filename is given" do
    lambda { ModuleSpecs.autoload :A, "" }.should raise_error(ArgumentError)
  end

  it "raises a NameError when the constant name starts with a lower case letter" do
    lambda { ModuleSpecs.autoload "a", @non_existent }.should raise_error(NameError)
  end

  it "raises a NameError when the constant name starts with a number" do
    lambda { ModuleSpecs.autoload "1two", @non_existent }.should raise_error(NameError)
  end

  it "raises a NameError when the constant name has a space in it" do
    lambda { ModuleSpecs.autoload "a name", @non_existent }.should raise_error(NameError)
  end

  it "shares the autoload request across dup'ed copies of modules" do
    require fixture(__FILE__, "autoload_s.rb")
    filename = fixture(__FILE__, "autoload_t.rb")
    mod1 = Module.new { autoload :T, filename }
    lambda {
      ModuleSpecs::Autoload::S = mod1
    }.should complain(/already initialized constant/)
    mod2 = mod1.dup

    mod1.autoload?(:T).should == filename
    mod2.autoload?(:T).should == filename

    mod1::T.should == :autoload_t
    lambda { mod2::T }.should raise_error(NameError)
  end

  it "raises a TypeError if opening a class with a different superclass than the class defined in the autoload file" do
    ModuleSpecs::Autoload.autoload :Z, fixture(__FILE__, "autoload_z.rb")
    class ModuleSpecs::Autoload::ZZ
    end

    lambda do
      class ModuleSpecs::Autoload::Z < ModuleSpecs::Autoload::ZZ
      end
    end.should raise_error(TypeError)
  end

  it "raises a TypeError if not passed a String or object respodning to #to_path for the filename" do
    name = mock("autoload_name.rb")

    lambda { ModuleSpecs::Autoload.autoload :Str, name }.should raise_error(TypeError)
  end

  it "calls #to_path on non-String filename arguments" do
    name = mock("autoload_name.rb")
    name.should_receive(:to_path).and_return("autoload_name.rb")

    lambda { ModuleSpecs::Autoload.autoload :Str, name }.should_not raise_error
  end

  describe "on a frozen module" do
    it "raises a RuntimeError before setting the name" do
      lambda { @frozen_module.autoload :Foo, @non_existent }.should raise_error(RuntimeError)
      @frozen_module.should_not have_constant(:Foo)
    end
  end

  describe "(concurrently)" do
    it "blocks a second thread while a first is doing the autoload" do
      ModuleSpecs::Autoload.autoload :Concur, fixture(__FILE__, "autoload_concur.rb")

      start = false

      ScratchPad.record []

      t1_val = nil
      t2_val = nil

      fin = false

      t1 = Thread.new do
        Thread.pass until start
        t1_val = ModuleSpecs::Autoload::Concur
        ScratchPad.recorded << :t1_post
        fin = true
      end

      t2_exc = nil

      t2 = Thread.new do
        Thread.pass until t1 and t1[:in_autoload_rb]
        begin
          t2_val = ModuleSpecs::Autoload::Concur
        rescue Exception => e
          t2_exc = e
        else
          Thread.pass until fin
          ScratchPad.recorded << :t2_post
        end
      end

      start = true

      t1.join
      t2.join

      ScratchPad.recorded.should == [:con_pre, :con_post, :t1_post, :t2_post]

      t1_val.should == 1
      t2_val.should == t1_val

      t2_exc.should be_nil

      ModuleSpecs::Autoload.send(:remove_const, :Concur)
    end
  end

  describe "when changing $LOAD_PATH" do

    before do
      $LOAD_PATH.unshift(File.expand_path('../fixtures/path1', __FILE__))
    end

    after do
      $LOAD_PATH.shift
      $LOAD_PATH.shift
    end

    it "does not reload a file due to a different load path" do
      ModuleSpecs::Autoload.autoload :LoadPath, "load_path"
      ModuleSpecs::Autoload::LoadPath.loaded.should == :autoload_load_path
    end

  end

  describe "(concurrently)" do
    ruby_bug "#10892", ""..."2.3" do
      it "blocks others threads while doing an autoload" do
        file_path     = fixture(__FILE__, "repeated_concurrent_autoload.rb")
        autoload_path = file_path.sub(/\.rb\Z/, '')
        mod_count     = 30
        thread_count  = 16

        mod_names = []
        mod_count.times do |i|
          mod_name = :"Mod#{i}"
          Object.autoload mod_name, autoload_path
          mod_names << mod_name
        end

        barrier = ModuleSpecs::CyclicBarrier.new thread_count
        ScratchPad.record ModuleSpecs::ThreadSafeCounter.new

        threads = (1..thread_count).map do
          Thread.new do
            mod_names.each do |mod_name|
              break false unless barrier.enabled?

              was_last_one_in = barrier.await # wait for all threads to finish the iteration
              # clean up so we can autoload the same file again
              $LOADED_FEATURES.delete(file_path) if was_last_one_in && $LOADED_FEATURES.include?(file_path)
              barrier.await # get ready for race

              begin
                Object.const_get(mod_name).foo
              rescue NoMethodError
                barrier.disable!
                break false
              end
            end
          end
        end

        # check that no thread got a NoMethodError because of partially loaded module
        threads.all? {|t| t.value}.should be_true

        # check that the autoloaded file was evaled exactly once
        ScratchPad.recorded.get.should == mod_count

        mod_names.each do |mod_name|
          Object.send(:remove_const, mod_name)
        end
      end
    end
  end

  it "loads the registered constant even if the constant was already loaded by another thread" do
    Thread.new {
      ModuleSpecs::Autoload::FromThread::D.foo
    }.value.should == :foo
  end
end
