require File.expand_path('../../../spec_helper', __FILE__)

describe "BasicObject#singleton_method_undefined" do
  before :each do
    ScratchPad.clear
  end

  it "is a private method" do
    BasicObject.should have_private_instance_method(:singleton_method_undefined)
  end

  it "is called when a method is removed on self" do
    klass = Class.new
    def klass.singleton_method_undefined(name)
      ScratchPad.record [:singleton_method_undefined, name]
    end
    def klass.singleton_method_to_undefine
    end
    class << klass
      undef_method :singleton_method_to_undefine
    end
    ScratchPad.recorded.should == [:singleton_method_undefined, :singleton_method_to_undefine]
  end
end
