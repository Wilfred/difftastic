require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Delegator#method" do
  before :each do
    @simple = DelegateSpecs::Simple.new
    @delegate = DelegateSpecs::Delegator.new(@simple)
  end

  it "returns a method object for public methods of the delegate object" do
    m = @delegate.method(:pub)
    m.should be_an_instance_of(Method)
    m.call.should == :foo
  end

  it "raises a NameError for protected methods of the delegate object" do
    lambda {
      -> {
        @delegate.method(:prot)
      }.should complain(/delegator does not forward private method #prot/)
    }.should raise_error(NameError)
  end

  it "raises a NameError for a private methods of the delegate object" do
    lambda {
      -> {
        @delegate.method(:priv)
      }.should complain(/delegator does not forward private method #priv/)
    }.should raise_error(NameError)
  end

  it "returns a method object for public methods of the Delegator class" do
    m = @delegate.method(:extra)
    m.should be_an_instance_of(Method)
    m.call.should == :cheese
  end

  it "returns a method object for protected methods of the Delegator class" do
    m = @delegate.method(:extra_protected)
    m.should be_an_instance_of(Method)
    m.call.should == :baz
  end

  it "returns a method object for private methods of the Delegator class" do
    m = @delegate.method(:extra_private)
    m.should be_an_instance_of(Method)
    m.call.should == :bar
  end

  it "raises a NameError for an invalid method name" do
    lambda {
      @delegate.method(:invalid_and_silly_method_name)
    }.should raise_error(NameError)
  end

  it "returns a method that respond_to_missing?" do
    m = @delegate.method(:pub_too)
    m.should be_an_instance_of(Method)
    m.call.should == :pub_too
  end

  it "raises a NameError if method is no longer valid because object has changed" do
    m = @delegate.method(:pub)
    @delegate.__setobj__([1,2,3])
    lambda {
      m.call
    }.should raise_error(NameError)
  end
end
