require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

context "Creating UnboundMethods" do
  specify "there is no difference between Method#unbind and Module#instance_method" do
    UnboundMethodSpecs::Methods.instance_method(:foo).should be_kind_of(UnboundMethod)
    UnboundMethodSpecs::Methods.new.method(:foo).unbind.should be_kind_of(UnboundMethod)
  end
end

describe "UnboundMethod#==" do
  before :all do
    @from_module = UnboundMethodSpecs::Methods.instance_method(:foo)
    @from_unbind = UnboundMethodSpecs::Methods.new.method(:foo).unbind

    @with_block = UnboundMethodSpecs::Methods.instance_method(:with_block)

    @includee = UnboundMethodSpecs::Mod.instance_method(:from_mod)
    @includer = UnboundMethodSpecs::Methods.instance_method(:from_mod)

    @alias_1 = UnboundMethodSpecs::Methods.instance_method(:alias_1)
    @alias_2 = UnboundMethodSpecs::Methods.instance_method(:alias_2)

    @original_body = UnboundMethodSpecs::Methods.instance_method(:original_body)
    @identical_body = UnboundMethodSpecs::Methods.instance_method(:identical_body)

    @parent = UnboundMethodSpecs::Parent.instance_method(:foo)
    @child1 = UnboundMethodSpecs::Child1.instance_method(:foo)
    @child2 = UnboundMethodSpecs::Child2.instance_method(:foo)

    @child1_alt = UnboundMethodSpecs::Child1.instance_method(:foo)

    @discard_1 = UnboundMethodSpecs::Methods.instance_method(:discard_1)
    @discard_2 = UnboundMethodSpecs::Methods.instance_method(:discard_2)

    @method_one = UnboundMethodSpecs::Methods.instance_method(:one)
    @method_two = UnboundMethodSpecs::Methods.instance_method(:two)
  end

  it "returns true if objects refer to the same method" do
    (@from_module == @from_module).should == true
    (@from_unbind == @from_unbind).should == true
    (@from_module == @from_unbind).should == true
    (@from_unbind == @from_module).should == true
    (@with_block  == @with_block).should == true
  end

  it "returns true if either is an alias for the other" do
    (@from_module == @alias_1).should == true
    (@alias_1 == @from_module).should == true
  end

  it "returns true if both are aliases for a third method" do
    (@from_module == @alias_1).should == true
    (@alias_1 == @from_module).should == true

    (@from_module == @alias_2).should == true
    (@alias_2 == @from_module).should == true

    (@alias_1 == @alias_2).should == true
    (@alias_2 == @alias_1).should == true
  end

  it "returns true if same method is extracted from the same subclass" do
    (@child1 == @child1_alt).should == true
    (@child1_alt == @child1).should == true
  end

  it "returns false if UnboundMethods are different methods" do
    (@method_one == @method_two).should == false
    (@method_two == @method_one).should == false
  end

  it "returns false if both have identical body but are not the same" do
    (@original_body == @identical_body).should == false
    (@identical_body == @original_body).should == false
  end

  it "returns false if same method but one extracted from a subclass" do
    (@parent == @child1).should == false
    (@child1 == @parent).should == false
  end

  it "returns false if same method but extracted from two different subclasses" do
    (@child2 == @child1).should == false
    (@child1 == @child2).should == false
  end

  it "returns false if methods are the same but added from an included Module" do
    (@includee == @includer).should == false
    (@includer == @includee).should == false
  end

  it "returns false if both have same Module, same name, identical body but not the same" do
    class UnboundMethodSpecs::Methods
      def discard_1; :discard; end
    end

    (@discard_1 == UnboundMethodSpecs::Methods.instance_method(:discard_1)).should == false
  end
end
