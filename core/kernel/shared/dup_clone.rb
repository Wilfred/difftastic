class ObjectSpecDup
  def initialize()
    @obj = :original
  end

  attr_accessor :obj
end

class ObjectSpecDupInitCopy
  def initialize()
    @obj = :original
  end

  attr_accessor :obj, :original

  def initialize_copy(original)
    @obj = :init_copy
    @original = original
  end

  private :initialize_copy
end

describe :kernel_dup_clone, shared: true do
  it "returns a new object duplicated from the original" do
    o = ObjectSpecDup.new
    o2 = ObjectSpecDup.new

    o.obj = 10

    o3 = o.send(@method)

    o3.obj.should == 10
    o2.obj.should == :original
  end

  it "produces a shallow copy, contained objects are not recursively dupped" do
    o = ObjectSpecDup.new
    array = [1, 2]
    o.obj = array

    o2 = o.send(@method)
    o2.obj.should equal(o.obj)
  end

  it "calls #initialize_copy on the NEW object if available, passing in original object" do
    o = ObjectSpecDupInitCopy.new
    o2 = o.send(@method)

    o.obj.should == :original
    o2.obj.should == :init_copy
    o2.original.should equal(o)
  end

  it "preserves tainted state from the original" do
    o = ObjectSpecDupInitCopy.new
    o2 = o.send(@method)
    o.taint
    o3 = o.send(@method)

    o2.tainted?.should == false
    o3.tainted?.should == true
  end

  it "does not preserve the object_id" do
    o1 = ObjectSpecDupInitCopy.new
    old_object_id = o1.object_id
    o2 = o1.send(@method)
    o2.object_id.should_not == old_object_id
  end

  it "preserves untrusted state from the original" do
    o = ObjectSpecDupInitCopy.new
    o2 = o.send(@method)
    o.untrust
    o3 = o.send(@method)

    o2.untrusted?.should == false
    o3.untrusted?.should == true
  end

  ruby_version_is ''...'2.4' do
    it "raises a TypeError for NilClass" do
      lambda { nil.send(@method) }.should raise_error(TypeError)
    end

    it "raises a TypeError for TrueClass" do
      lambda { true.send(@method) }.should raise_error(TypeError)
    end

    it "raises a TypeError for FalseClass" do
      lambda { false.send(@method) }.should raise_error(TypeError)
    end

    it "raises a TypeError for Fixnum" do
      lambda { 1.send(@method) }.should raise_error(TypeError)
    end

    it "raises a TypeError for Symbol" do
      lambda { :my_symbol.send(@method) }.should raise_error(TypeError)
    end
  end

  ruby_version_is '2.4' do
    it "returns nil for NilClass" do
      nil.send(@method).should == nil
    end

    it "returns true for TrueClass" do
      true.send(@method).should == true
    end

    it "returns false for FalseClass" do
      false.send(@method).should == false
    end

    it "returns the same Integer for Integer" do
      1.send(@method).should == 1
    end

    it "returns the same Symbol for Symbol" do
      :my_symbol.send(@method).should == :my_symbol
    end
  end
end
