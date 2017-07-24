require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module.new" do
  it "creates a new anonymous Module" do
    Module.new.is_a?(Module).should == true
  end

  it "creates a new Module and passes it to the provided block" do
    test_mod = nil
    m = Module.new do |mod|
      mod.should_not == nil
      self.should == mod
      test_mod = mod
      mod.is_a?(Module).should == true
      Object.new # trying to return something
    end
    test_mod.should == m
  end

  it "evaluates a passed block in the context of the module" do
    fred = Module.new do
      def hello() "hello" end
      def bye()   "bye"   end
    end

    (o = mock('x')).extend(fred)
    o.hello.should == "hello"
    o.bye.should == "bye"
  end
end
