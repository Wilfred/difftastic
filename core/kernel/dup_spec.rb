require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/dup_clone', __FILE__)

describe "Kernel#dup" do
  it_behaves_like :kernel_dup_clone, :dup

  before :each do
    ScratchPad.clear
    @obj = KernelSpecs::Duplicate.new 1, :a
  end

  it "calls #initialize_copy on the new instance" do
    dup = @obj.dup
    ScratchPad.recorded.should_not == @obj.object_id
    ScratchPad.recorded.should == dup.object_id
  end

  it "uses the internal allocator and does not call #allocate" do
    klass = Class.new
    instance = klass.new

    def klass.allocate
      raise "allocate should not be called"
    end

    dup = instance.dup
    dup.class.should equal klass
  end

  it "does not copy frozen state from the original" do
    @obj.freeze
    dup = @obj.dup

    dup.frozen?.should == false
  end

  it "copies instance variables" do
    dup = @obj.dup
    dup.one.should == 1
    dup.two.should == :a
  end

  it "does not copy singleton methods" do
    def @obj.special() :the_one end
    dup = @obj.dup
    lambda { dup.special }.should raise_error(NameError)
  end

  it "does not copy modules included in the singleton class" do
    class << @obj
      include KernelSpecs::DuplicateM
    end

    dup = @obj.dup
    lambda { dup.repr }.should raise_error(NameError)
  end

  it "does not copy constants defined in the singleton class" do
    class << @obj
      CLONE = :clone
    end

    dup = @obj.dup
    lambda { class << dup; CLONE; end }.should raise_error(NameError)
  end
end
