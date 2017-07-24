require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Class.inherited" do

  before :each do
    ScratchPad.record nil
  end

  it "is invoked with the child Class when self is subclassed" do
    begin
      top = Class.new do
        def self.inherited(cls)
          $child_class = cls
        end
      end

      child = Class.new(top)
      $child_class.should == child

      other_child = Class.new(top)
      $child_class.should == other_child
    ensure
      $child_class = nil
    end
  end

  it "is invoked only once per subclass" do
    expected = [
      [CoreClassSpecs::Inherited::A, CoreClassSpecs::Inherited::B],
      [CoreClassSpecs::Inherited::B, CoreClassSpecs::Inherited::C],
    ]

    CoreClassSpecs::Inherited::A::SUBCLASSES.should == expected
  end

  it "is called when marked as a private class method" do
    a = Class.new do
      def self.inherited(klass)
        ScratchPad.record klass
      end
    end
    a.private_class_method :inherited
    ScratchPad.recorded.should == nil
    b = Class.new(a)
    ScratchPad.recorded.should == b
  end

  it "is called when marked as a protected class method" do
    a = Class.new
    class << a
      def inherited(klass)
        ScratchPad.record klass
      end
      protected :inherited
    end
    ScratchPad.recorded.should == nil
    b = Class.new(a)
    ScratchPad.recorded.should == b
  end

  it "is called when marked as a public class method" do
    a = Class.new do
      def self.inherited(klass)
        ScratchPad.record klass
      end
    end
    a.public_class_method :inherited
    ScratchPad.recorded.should == nil
    b = Class.new(a)
    ScratchPad.recorded.should == b
  end

  it "is called by super from a method provided by an included module" do
    ScratchPad.recorded.should == nil
    e = Class.new(CoreClassSpecs::F)
    ScratchPad.recorded.should == e
  end

  it "is called by super even when marked as a private class method" do
    ScratchPad.recorded.should == nil
    CoreClassSpecs::H.private_class_method :inherited
    i = Class.new(CoreClassSpecs::H)
    ScratchPad.recorded.should == i
  end

  it "will be invoked by child class regardless of visibility" do
    top = Class.new do
      class << self
        def inherited(cls); end
      end
    end

    class << top; private :inherited; end
    lambda { Class.new(top) }.should_not raise_error

    class << top; protected :inherited; end
    lambda { Class.new(top) }.should_not raise_error
  end

end

