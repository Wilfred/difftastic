require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#class" do
  it "returns the class of the object" do
    Object.new.class.should equal(Object)

    1.class.should equal(Fixnum)
    3.14.class.should equal(Float)
    :hello.class.should equal(Symbol)
    "hello".class.should equal(String)
    [1, 2].class.should equal(Array)
    { 1 => 2 }.class.should equal(Hash)
  end

  it "returns Class for a class" do
    BasicObject.class.should equal(Class)
    String.class.should equal(Class)
  end

  it "returns the first non-singleton class" do
    a = "hello"
    def a.my_singleton_method; end
    a.class.should equal(String)
  end
end
