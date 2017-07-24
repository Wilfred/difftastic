require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/dup_clone', __FILE__)

describe "Kernel#clone" do
  it_behaves_like :kernel_dup_clone, :clone

  before :each do
    ScratchPad.clear
    @obj = KernelSpecs::Duplicate.new 1, :a
  end

  it "calls #initialize_copy on the new instance" do
    clone = @obj.clone
    ScratchPad.recorded.should_not == @obj.object_id
    ScratchPad.recorded.should == clone.object_id
  end

  it "uses the internal allocator and does not call #allocate" do
    klass = Class.new
    instance = klass.new

    def klass.allocate
      raise "allocate should not be called"
    end

    clone = instance.clone
    clone.class.should equal klass
  end

  it "copies frozen state from the original" do
    o2 = @obj.clone
    @obj.freeze
    o3 = @obj.clone

    o2.frozen?.should == false
    o3.frozen?.should == true
  end

  ruby_version_is '2.4' do
    it 'takes an option to copy freeze state or not' do
      @obj.clone(freeze: true).frozen?.should == false
      @obj.clone(freeze: false).frozen?.should == false
      @obj.freeze
      @obj.clone(freeze: true).frozen?.should == true
      @obj.clone(freeze: false).frozen?.should == false
    end
  end

  it "copies instance variables" do
    clone = @obj.clone
    clone.one.should == 1
    clone.two.should == :a
  end

  it "copies singleton methods" do
    def @obj.special() :the_one end
    clone = @obj.clone
    clone.special.should == :the_one
  end

  it "copies modules included in the singleton class" do
    class << @obj
      include KernelSpecs::DuplicateM
    end

    clone = @obj.clone
    clone.repr.should == "KernelSpecs::Duplicate"
  end

  it "copies constants defined in the singleton class" do
    class << @obj
      CLONE = :clone
    end

    clone = @obj.clone
    class << clone
      CLONE.should == :clone
    end
  end

  it "replaces a singleton object's metaclass with a new copy with the same superclass" do
    cls = Class.new do
      def bar
        ['a']
      end
    end

    object = cls.new
    object.define_singleton_method(:bar) do
      ['b', *super()]
    end
    object.bar.should == ['b', 'a']

    cloned = object.clone

    cloned.singleton_methods.should == [:bar]

    # bar should replace previous one
    cloned.define_singleton_method(:bar) do
      ['c', *super()]
    end
    cloned.bar.should == ['c', 'a']

    # bar should be removed and call through to superclass
    cloned.singleton_class.class_eval do
      remove_method :bar
    end

    cloned.bar.should == ['a']
  end

  it 'copies frozen? and tainted?' do
    o = ''.taint.freeze.clone
    o.frozen?.should be_true
    o.tainted?.should be_true
  end
end
