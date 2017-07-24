require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/private', __FILE__)

describe "The private keyword" do
  it "marks following methods as being private" do
    a = Private::A.new
    a.methods.should_not include(:bar)
    lambda { a.bar }.should raise_error(NoMethodError)

    b = Private::B.new
    b.methods.should_not include(:bar)
    lambda { b.bar }.should raise_error(NoMethodError)
  end

  # def expr.meth() methods are always public
  it "has no effect on def expr.meth() methods" do
    Private::B.public_defs_method.should == 0
  end

  it "is overridden when a new class is opened" do
    c = Private::B::C.new
    c.methods.should include(:baz)
    c.baz
    Private::B.public_class_method1.should == 1
    lambda { Private::B.private_class_method1 }.should raise_error(NoMethodError)
  end

  it "is no longer in effect when the class is closed" do
    b = Private::B.new
    b.methods.should include(:foo)
    b.foo
  end

  it "changes visibility of previously called method" do
    klass = Class.new do
      def foo
       "foo"
      end
    end
    f = klass.new
    f.foo
    klass.class_eval do
      private :foo
    end
    lambda { f.foo }.should raise_error(NoMethodError)
  end

  it "changes visiblity of previously called methods with same send/call site" do
    g = ::Private::G.new
    lambda {
      2.times do
        g.foo
        module ::Private
          class G
            private :foo
          end
        end
      end
    }.should raise_error(NoMethodError)
  end

  it "changes the visibility of the existing method in the subclass" do
    ::Private::A.new.foo.should == 'foo'
    lambda {::Private::H.new.foo}.should raise_error(NoMethodError)
    ::Private::H.new.send(:foo).should == 'foo'
  end
end
