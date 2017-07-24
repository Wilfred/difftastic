require File.expand_path('../../../spec_helper', __FILE__)

describe "Module#define_singleton_method" do
  it "defines the given method as an class method with the given name in self" do
    klass = Module.new do
      define_singleton_method :a do
        42
      end
      define_singleton_method(:b, lambda {|x| 2*x })
    end

    klass.a.should == 42
    klass.b(10).should == 20
  end

  it "needs to be reviewed for spec completeness"
end
