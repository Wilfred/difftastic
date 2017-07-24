require File.expand_path('../../../../spec_helper', __FILE__)

describe :kernel_method, shared: true do
  it "returns a method object for a valid method" do
    class KernelSpecs::Foo; def bar; 'done'; end; end
    m = KernelSpecs::Foo.new.send(@method, :bar)
    m.should be_an_instance_of Method
    m.call.should == 'done'
  end

  it "returns a method object for a valid singleton method" do
    class KernelSpecs::Foo; def self.bar; 'class done'; end; end
    m = KernelSpecs::Foo.send(@method, :bar)
    m.should be_an_instance_of Method
    m.call.should == 'class done'
  end

  it "returns a method object if we repond_to_missing? method" do
    m = KernelSpecs::RespondViaMissing.new.send(@method, :handled_publicly)
    m.should be_an_instance_of Method
    m.call(42).should == "Done handled_publicly([42])"
  end

  it "raises a NameError for an invalid method name" do
    class KernelSpecs::Foo; def bar; 'done'; end; end
    lambda {
      KernelSpecs::Foo.new.send(@method, :invalid_and_silly_method_name)
    }.should raise_error(NameError)
  end

  it "raises a NameError for an invalid singleton method name" do
    class KernelSpecs::Foo; def self.bar; 'done'; end; end
    lambda { KernelSpecs::Foo.send(@method, :baz) }.should raise_error(NameError)
  end

  it "changes the method called for super on a target aliased method" do
    c1 = Class.new do
      def a; 'a'; end
      def b; 'b'; end
    end
    c2 = Class.new(c1) do
      def a; super; end
      alias b a
    end

    c2.new.a.should == 'a'
    c2.new.b.should == 'a'
    c2.new.send(@method, :b).call.should == 'a'
  end
end
