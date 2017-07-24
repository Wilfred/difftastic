require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# NOTE: This is actually implemented by Module#initialize_copy
describe "Class#dup" do
  it "duplicates both the class and the singleton class" do
    klass = Class.new do
      def hello
        "hello"
      end

      def self.message
        "text"
      end
    end

    klass_dup = klass.dup

    klass_dup.new.hello.should == "hello"
    klass_dup.message.should == "text"
  end

  it "retains an included module in the ancestor chain for the singleton class" do
    klass = Class.new
    mod = Module.new do
      def hello
        "hello"
      end
    end

    klass.extend(mod)
    klass_dup = klass.dup
    klass_dup.hello.should == "hello"
  end

  it "retains the correct ancestor chain for the singleton class" do
    super_klass = Class.new do
      def hello
        "hello"
      end

      def self.message
        "text"
      end
    end

    klass = Class.new(super_klass)
    klass_dup = klass.dup

    klass_dup.new.hello.should == "hello"
    klass_dup.message.should == "text"
  end

  it "sets the name from the class to nil if not assigned to a constant" do
    copy = CoreClassSpecs::Record.dup
    copy.name.should be_nil
  end

  it "stores the new name if assigned to a constant" do
    CoreClassSpecs::RecordCopy = CoreClassSpecs::Record.dup
    CoreClassSpecs::RecordCopy.name.should == "CoreClassSpecs::RecordCopy"
  end

end
