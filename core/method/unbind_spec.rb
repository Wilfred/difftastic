require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Method#unbind" do
  before :each do
    @normal = MethodSpecs::Methods.new
    @normal_m = @normal.method :foo
    @normal_um = @normal_m.unbind
    @pop_um = MethodSpecs::MySub.new.method(:bar).unbind
    @string = @pop_um.inspect.sub(/0x\w+/, '0xXXXXXX')
  end

  it "returns an UnboundMethod" do
    @normal_um.should be_kind_of(UnboundMethod)
  end

  it "returns a String containing 'UnboundMethod'" do
    @string.should =~ /\bUnboundMethod\b/
  end

  it "returns a String containing the method name" do
    @string.should =~ /\#bar/
  end

  it "returns a String containing the Module the method is defined in" do
    @string.should =~ /MethodSpecs::MyMod/
  end

  it "returns a String containing the Module the method is referenced from" do
    @string.should =~ /MethodSpecs::MySub/
  end

  specify "rebinding UnboundMethod to Method's obj produces exactly equivalent Methods" do
    @normal_um.bind(@normal).should == @normal_m
    @normal_m.should == @normal_um.bind(@normal)
  end
end
