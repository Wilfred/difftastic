require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#respond_to_missing?" do
  before :each do
    @a = KernelSpecs::A.new
  end

  it "is a private method" do
    Kernel.should have_private_instance_method(:respond_to_missing?, false)
  end

  it "is only an instance method" do
    Kernel.method(:respond_to_missing?).owner.should == Kernel
  end

  it "is not called when #respond_to? would return true" do
    obj = mock('object')
    obj.stub!(:glark)
    obj.should_not_receive(:respond_to_missing?)
    obj.respond_to?(:glark).should be_true
  end

  it "is called with a 2nd argument of false when #respond_to? is" do
    obj = mock('object')
    obj.should_receive(:respond_to_missing?).with(:undefined_method, false)
    obj.respond_to?(:undefined_method, false)
  end

  it "is called a 2nd argument of false when #respond_to? is called with only 1 argument" do
    obj = mock('object')
    obj.should_receive(:respond_to_missing?).with(:undefined_method, false)
    obj.respond_to?(:undefined_method)
  end

  it "is called with true as the second argument when #respond_to? is" do
    obj = mock('object')
    obj.should_receive(:respond_to_missing?).with(:undefined_method, true)
    obj.respond_to?(:undefined_method, true)
  end

  it "is called when #respond_to? would return false" do
    obj = mock('object')
    obj.should_receive(:respond_to_missing?).with(:undefined_method, false)
    obj.respond_to?(:undefined_method)
  end

  it "causes #respond_to? to return true if called and not returning false" do
    obj = mock('object')
    obj.should_receive(:respond_to_missing?).with(:undefined_method, false).and_return(:glark)
    obj.respond_to?(:undefined_method).should be_true
  end

  it "causes #respond_to? to return false if called and returning false" do
    obj = mock('object')
    obj.should_receive(:respond_to_missing?).with(:undefined_method, false).and_return(false)
    obj.respond_to?(:undefined_method).should be_false
  end

  it "causes #respond_to? to return false if called and returning nil" do
    obj = mock('object')
    obj.should_receive(:respond_to_missing?).with(:undefined_method, false).and_return(nil)
    obj.respond_to?(:undefined_method).should be_false
  end

  it "isn't called when obj responds to the given public method" do
    @a.should_not_receive(:respond_to_missing?)
    @a.respond_to?(:pub_method).should be_true
  end

  it "isn't called when obj responds to the given public method, include_private = true" do
    @a.should_not_receive(:respond_to_missing?)
    @a.respond_to?(:pub_method, true).should be_true
  end

  it "is called when obj responds to the given protected method, include_private = false" do
    @a.should_receive(:respond_to_missing?)
    @a.respond_to?(:protected_method, false).should be_false
  end

  it "isn't called when obj responds to the given protected method, include_private = true" do
    @a.should_not_receive(:respond_to_missing?)
    @a.respond_to?(:protected_method, true).should be_true
  end

  it "is called when obj responds to the given private method, include_private = false" do
    @a.should_receive(:respond_to_missing?).with(:private_method, false)
    @a.respond_to?(:private_method)
  end

  it "isn't called when obj responds to the given private method, include_private = true" do
    @a.should_not_receive(:respond_to_missing?)
    @a.respond_to?(:private_method, true).should be_true
  end

  it "is called for missing class methods" do
    @a.class.should_receive(:respond_to_missing?).with(:oOoOoO, false)
    @a.class.respond_to?(:oOoOoO)
  end
end
