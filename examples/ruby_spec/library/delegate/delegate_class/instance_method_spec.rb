require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "DelegateClass.instance_method" do
  before :all do
    @klass = DelegateSpecs::DelegateClass
    @obj = @klass.new(DelegateSpecs::Simple.new)
  end

  it "returns a method object for public instance methods of the delegated class" do
    m = @klass.instance_method(:pub)
    m.should be_an_instance_of(UnboundMethod)
    m.bind(@obj).call.should == :foo
  end

  it "returns a method object for protected instance methods of the delegated class" do
    m = @klass.instance_method(:prot)
    m.should be_an_instance_of(UnboundMethod)
    m.bind(@obj).call.should == :protected
  end

  it "raises a NameError for a private instance methods of the delegated class" do
    lambda {
      @klass.instance_method(:priv)
    }.should raise_error(NameError)
  end

  it "returns a method object for public instance methods of the DelegateClass class" do
    m = @klass.instance_method(:extra)
    m.should be_an_instance_of(UnboundMethod)
    m.bind(@obj).call.should == :cheese
  end

  it "returns a method object for protected instance methods of the DelegateClass class" do
    m = @klass.instance_method(:extra_protected)
    m.should be_an_instance_of(UnboundMethod)
    m.bind(@obj).call.should == :baz
  end

  it "returns a method object for private instance methods of the DelegateClass class" do
    m = @klass.instance_method(:extra_private)
    m.should be_an_instance_of(UnboundMethod)
    m.bind(@obj).call.should == :bar
  end

  it "raises a NameError for an invalid method name" do
    lambda {
      @klass.instance_method(:invalid_and_silly_method_name)
    }.should raise_error(NameError)
  end

end
