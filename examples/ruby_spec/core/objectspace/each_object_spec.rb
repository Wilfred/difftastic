require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "ObjectSpace.each_object" do
  it "calls the block once for each living, non-immediate object in the Ruby process" do
    klass = Class.new
    new_obj = klass.new

    yields = 0
    count = ObjectSpace.each_object(klass) do |obj|
      obj.should == new_obj
      yields += 1
    end
    count.should == 1
    yields.should == 1

    # this is needed to prevent the new_obj from being GC'd too early
    new_obj.should_not == nil
  end

  it "calls the block once for each class, module in the Ruby process" do
    klass = Class.new
    mod = Module.new

    [klass, mod].each do |k|
      yields = 0
      got_it = false
      count = ObjectSpace.each_object(k.class) do |obj|
        got_it = true if obj == k
        yields += 1
      end
      got_it.should == true
      count.should == yields
    end
  end

  it "returns an enumerator if not given a block" do
    klass = Class.new
    new_obj = klass.new

    counter = ObjectSpace.each_object(klass)
    counter.should be_an_instance_of(Enumerator)
    counter.each{}.should == 1
    # this is needed to prevent the new_obj from being GC'd too early
    new_obj.should_not == nil
  end

  it "finds an object stored in a global variable" do
    $object_space_global_variable = ObjectSpaceFixtures::ObjectToBeFound.new(:global)
    ObjectSpaceFixtures.to_be_found_symbols.should include(:global)
  end

  it "finds an object stored in a top-level constant" do
    ObjectSpaceFixtures.to_be_found_symbols.should include(:top_level_constant)
  end

  it "finds an object stored in a second-level constant" do
    ObjectSpaceFixtures.to_be_found_symbols.should include(:second_level_constant)
  end

  it "finds an object stored in a local variable" do
    local = ObjectSpaceFixtures::ObjectToBeFound.new(:local)
    ObjectSpaceFixtures.to_be_found_symbols.should include(:local)
  end

  it "finds an object stored in a local variable captured in a block explicitly" do
    proc = Proc.new {
      local_in_block = ObjectSpaceFixtures::ObjectToBeFound.new(:local_in_block_explicit)
      Proc.new { local_in_block }
    }.call

    ObjectSpaceFixtures.to_be_found_symbols.should include(:local_in_block_explicit)
  end

  it "finds an object stored in a local variable captured in a block implicitly" do
    proc = Proc.new {
      local_in_block = ObjectSpaceFixtures::ObjectToBeFound.new(:local_in_block_implicit)
      Proc.new { }
    }.call

    ObjectSpaceFixtures.to_be_found_symbols.should include(:local_in_block_implicit)
  end

  it "finds an object stored in a local variable captured in by a method defined with a block" do
    ObjectSpaceFixtures.to_be_found_symbols.should include(:captured_by_define_method)
  end

  it "finds an object stored in a local variable captured in a Proc#binding" do
    binding = Proc.new {
      local_in_proc_binding = ObjectSpaceFixtures::ObjectToBeFound.new(:local_in_proc_binding)
      Proc.new { }.binding
    }.call

    ObjectSpaceFixtures.to_be_found_symbols.should include(:local_in_proc_binding)
  end

  it "finds an object stored in a local variable captured in a Kernel#binding" do
    b = Proc.new {
      local_in_kernel_binding = ObjectSpaceFixtures::ObjectToBeFound.new(:local_in_kernel_binding)
      binding
    }.call

    ObjectSpaceFixtures.to_be_found_symbols.should include(:local_in_kernel_binding)
  end

  it "finds an object stored in a local variable set in a binding manually" do
    b = binding
    b.eval("local = ObjectSpaceFixtures::ObjectToBeFound.new(:local_in_manual_binding)")
    ObjectSpaceFixtures.to_be_found_symbols.should include(:local_in_manual_binding)
  end

  it "finds an object stored in an array" do
    array = [ObjectSpaceFixtures::ObjectToBeFound.new(:array)]
    ObjectSpaceFixtures.to_be_found_symbols.should include(:array)
  end

  it "finds an object stored in a hash key" do
    hash = {ObjectSpaceFixtures::ObjectToBeFound.new(:hash_key) => :value}
    ObjectSpaceFixtures.to_be_found_symbols.should include(:hash_key)
  end

  it "finds an object stored in a hash value" do
    hash = {a: ObjectSpaceFixtures::ObjectToBeFound.new(:hash_value)}
    ObjectSpaceFixtures.to_be_found_symbols.should include(:hash_value)
  end

  it "finds an object stored in an instance variable" do
    local = ObjectSpaceFixtures::ObjectWithInstanceVariable.new
    ObjectSpaceFixtures.to_be_found_symbols.should include(:instance_variable)
  end

  it "finds an object stored in a thread local" do
    thread = Thread.new {}
    thread.thread_variable_set(:object_space_thread_local, ObjectSpaceFixtures::ObjectToBeFound.new(:thread_local))
    ObjectSpaceFixtures.to_be_found_symbols.should include(:thread_local)
    thread.join
  end

  it "finds an object stored in a fiber local" do
    Thread.current[:object_space_fiber_local] = ObjectSpaceFixtures::ObjectToBeFound.new(:fiber_local)
    ObjectSpaceFixtures.to_be_found_symbols.should include(:fiber_local)
  end

  it "finds an object captured in an at_exit handler" do
    Proc.new {
      local = ObjectSpaceFixtures::ObjectToBeFound.new(:at_exit)

      at_exit do
        local
      end
    }.call

    ObjectSpaceFixtures.to_be_found_symbols.should include(:at_exit)
  end

  it "finds an object captured in finalizer" do
    alive = Object.new

    Proc.new {
      local = ObjectSpaceFixtures::ObjectToBeFound.new(:finalizer)

      ObjectSpace.define_finalizer(alive, Proc.new {
        local
      })
    }.call

    ObjectSpaceFixtures.to_be_found_symbols.should include(:finalizer)

    alive.should_not be_nil
  end

  describe "on singleton classes" do
    before :each do
      @klass = Class.new
      instance = @klass.new
      @sclass = instance.singleton_class
      @meta = @klass.singleton_class
    end

    it "does not walk hidden metaclasses" do
      klass = Class.new.singleton_class
      ancestors = ObjectSpace.each_object(Class).select { |c| klass.is_a? c }
      hidden = ancestors.find { |h| h.inspect.include? klass.inspect }
      hidden.should == nil
    end

    ruby_version_is ""..."2.3" do
      it "does not walk singleton classes" do
        @sclass.should be_kind_of(@meta)
        ObjectSpace.each_object(@meta).to_a.should_not include(@sclass)
      end
    end

    ruby_version_is "2.3" do
      it "walks singleton classes" do
        @sclass.should be_kind_of(@meta)
        ObjectSpace.each_object(@meta).to_a.should include(@sclass)
      end
    end
  end

  it "walks a class and its normal descendants when passed the class's singleton class" do
    a = Class.new
    b = Class.new(a)
    c = Class.new(a)
    d = Class.new(b)

    c_instance = c.new
    c_sclass = c_instance.singleton_class

    expected = [ a, b, c, d ]

    # singleton classes should be walked only on >= 2.3
    ruby_version_is "2.3" do
      expected << c_sclass
      c_sclass.should be_kind_of(a.singleton_class)
    end

    b.extend Enumerable # included modules should not be walked

    classes = ObjectSpace.each_object(a.singleton_class).to_a

    classes.sort_by(&:object_id).should == expected.sort_by(&:object_id)
  end
end
