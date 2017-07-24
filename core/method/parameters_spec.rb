require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Method#parameters" do
  class MethodSpecs::Methods
    def one_key(a: 1); end
    def one_keyrest(**a); end

    def one_keyreq(a:); end

    def one_splat_one_req(*a,b); end
    def one_splat_two_req(*a,b,c); end
    def one_splat_one_req_with_block(*a,b,&blk); end

    def one_opt_with_stabby(a=->(b){true}); end

    def one_unnamed_splat(*); end

    def one_splat_one_block(*args, &block)
      local_is_not_parameter = {}
    end

    define_method(:one_optional_defined_method) {|x = 1|}
  end

  it "returns an empty Array when the method expects no arguments" do
    MethodSpecs::Methods.instance_method(:zero).parameters.should == []
  end

  it "returns [[:req,:name]] for a method expecting one required argument called 'name'" do
    MethodSpecs::Methods.instance_method(:one_req).parameters.should == [[:req,:a]]
  end

  it "returns [[:req,:a],[:req,:b]] for a method expecting two required arguments called 'a' and 'b''" do
    m = MethodSpecs::Methods.instance_method(:two_req)
    m.parameters.should == [[:req,:a], [:req,:b]]
  end

  it "returns [[:block,:blk]] for a method expecting one block argument called 'a'" do
    m = MethodSpecs::Methods.instance_method(:zero_with_block)
    m.parameters.should == [[:block,:blk]]
  end

  it "returns [[:req,:a],[:block,:b] for a method expecting a required argument ('a') and a block argument ('b')" do
    m = MethodSpecs::Methods.instance_method(:one_req_with_block)
    m.parameters.should == [[:req,:a], [:block,:blk]]
  end

  it "returns [[:req,:a],[:req,:b],[:block,:c] for a method expecting two required arguments ('a','b') and a block argument ('c')" do
    m = MethodSpecs::Methods.instance_method(:two_req_with_block)
    m.parameters.should == [[:req,:a], [:req,:b], [:block,:blk]]
  end

  it "returns [[:opt,:a]] for a method expecting one optional argument ('a')" do
    m = MethodSpecs::Methods.instance_method(:one_opt)
    m.parameters.should == [[:opt,:a]]
  end

  it "returns [[:req,:a],[:opt,:b]] for a method expecting one required argument ('a') and one optional argument ('b')" do
    m = MethodSpecs::Methods.instance_method(:one_req_one_opt)
    m.parameters.should == [[:req,:a],[:opt,:b]]
  end

  it "returns [[:req,:a],[:opt,:b]] for a method expecting one required argument ('a') and one optional argument ('b')" do
    m = MethodSpecs::Methods.instance_method(:one_req_one_opt)
    m.parameters.should == [[:req,:a],[:opt,:b]]
  end

  it "returns [[:req,:a],[:opt,:b],[:opt,:c]] for a method expecting one required argument ('a') and two optional arguments ('b','c')" do
    m = MethodSpecs::Methods.instance_method(:one_req_two_opt)
    m.parameters.should == [[:req,:a],[:opt,:b],[:opt,:c]]
  end

  it "returns [[:req,:a],[:req,:b],[:opt,:c]] for a method expecting two required arguments ('a','b') and one optional arguments ('c')" do
    m = MethodSpecs::Methods.instance_method(:two_req_one_opt)
    m.parameters.should == [[:req,:a],[:req,:b],[:opt,:c]]
  end

  it "returns [[:opt,:a],[:block,:b]] for a method expecting one required argument ('a') and one block argument ('b')" do
    m = MethodSpecs::Methods.instance_method(:one_opt_with_block)
    m.parameters.should == [[:opt,:a],[:block,:blk]]
  end

  it "returns [[:req,:a],[:opt,:b],[:block,:c]] for a method expecting one required argument ('a'), one optional argument ('b'), and a block ('c')" do
    m = MethodSpecs::Methods.instance_method(:one_req_one_opt_with_block)
    m.parameters.should == [[:req,:a],[:opt,:b],[:block,:blk]]
  end

  it "returns [[:req,:a],[:opt,:b],[:opt,:c],[:block,:d]] for a method expecting one required argument ('a'), two optional arguments ('b','c'), and a block ('d')" do
    m = MethodSpecs::Methods.instance_method(:one_req_two_opt_with_block)
    m.parameters.should == [[:req,:a],[:opt,:b],[:opt,:c],[:block,:blk]]
  end

  it "returns [[:rest,:a]] for a method expecting a single splat argument ('a')" do
    m = MethodSpecs::Methods.instance_method(:zero_with_splat)
    m.parameters.should == [[:rest,:a]]
  end

  it "returns [[:req,:a],[:rest,:b]] for a method expecting a splat argument ('a') and a required argument ('b')" do
    m = MethodSpecs::Methods.instance_method(:one_req_with_splat)
    m.parameters.should == [[:req,:a],[:rest,:b]]
  end

  it "returns [[:req,:a],[:req,:b],[:rest,:c]] for a method expecting two required arguments ('a','b') and a splat argument ('c')" do
    m = MethodSpecs::Methods.instance_method(:two_req_with_splat)
    m.parameters.should == [[:req,:a],[:req,:b],[:rest,:c]]
  end

  it "returns [[:req,:a],[:opt,:b],[:rest,:c]] for a method expecting a required argument ('a','b'), an optional argument ('b'), and a splat argument ('c')" do
    m = MethodSpecs::Methods.instance_method(:one_req_one_opt_with_splat)
    m.parameters.should == [[:req,:a],[:opt,:b],[:rest,:c]]
  end

  it "returns [[:req,:a],[:req,:b],[:opt,:b],[:rest,:d]] for a method expecting two required arguments ('a','b'), an optional argument ('c'), and a splat argument ('d')" do
    m = MethodSpecs::Methods.instance_method(:two_req_one_opt_with_splat)
    m.parameters.should == [[:req,:a],[:req,:b],[:opt,:c],[:rest,:d]]
  end

  it "returns [[:req,:a],[:opt,:b],[:opt,:c],[:rest,:d]] for a method expecting a required argument ('a'), two optional arguments ('b','c'), and a splat argument ('d')" do
    m = MethodSpecs::Methods.instance_method(:one_req_two_opt_with_splat)
    m.parameters.should == [[:req,:a],[:opt,:b],[:opt,:c],[:rest,:d]]
  end

  it "returns [[:rest,:a],[:block,:b]] for a method expecting a splat argument ('a') and a block argument ('b')" do
    m = MethodSpecs::Methods.instance_method(:zero_with_splat_and_block)
    m.parameters.should == [[:rest,:a],[:block,:blk]]
  end

  it "returns [[:req,:a],[:rest,:b],[:block,:c]] for a method expecting a required argument ('a'), a splat argument ('b'), and a block ('c')" do
    m = MethodSpecs::Methods.instance_method(:one_req_with_splat_and_block)
    m.parameters.should == [[:req,:a],[:rest,:b],[:block,:blk]]
  end

  it "returns [[:req,:a],[:req,:b],[:rest,:c],[:block,:d]] for a method expecting two required arguments ('a','b'), a splat argument ('c'), and a block ('d')" do
    m = MethodSpecs::Methods.instance_method(:two_req_with_splat_and_block)
    m.parameters.should == [[:req,:a],[:req,:b],[:rest,:c],[:block,:blk]]
  end

  it "returns [[:req,:a],[:opt,:b],[:rest,:c],[:block,:d]] for a method expecting a required argument ('a'), a splat argument ('c'), and a block ('d')" do
    m = MethodSpecs::Methods.instance_method(:one_req_one_opt_with_splat_and_block)
    m.parameters.should == [[:req,:a],[:opt,:b],[:rest,:c],[:block,:blk]]
  end

  it "returns [[:req,:a],[:req,:b],[:opt,:c],[:block,:d]] for a method expecting two required arguments ('a','b'), an optional argument ('c'), a splat argument ('d'), and a block ('e')" do
    m = MethodSpecs::Methods.instance_method(:two_req_one_opt_with_splat_and_block)
    m.parameters.should == [[:req,:a],[:req,:b],[:opt,:c],[:rest,:d],[:block,:blk]]
  end

  it "returns [[:rest,:a],[:req,:b]] for a method expecting a splat argument ('a') and a required argument ('b')" do
    m = MethodSpecs::Methods.instance_method(:one_splat_one_req)
    m.parameters.should == [[:rest,:a],[:req,:b]]
  end

  it "returns [[:rest,:a],[:req,:b],[:req,:c]] for a method expecting a splat argument ('a') and two required arguments ('b','c')" do
    m = MethodSpecs::Methods.instance_method(:one_splat_two_req)
    m.parameters.should == [[:rest,:a],[:req,:b],[:req,:c]]
  end

  it "returns [[:rest,:a],[:req,:b],[:block,:c]] for a method expecting a splat argument ('a'), a required argument ('b'), and a block ('c')" do
    m = MethodSpecs::Methods.instance_method(:one_splat_one_req_with_block)
    m.parameters.should == [[:rest,:a],[:req,:b],[:block,:blk]]
  end

  it "returns [[:key,:a]] for a method with a single optional keyword argument" do
    m = MethodSpecs::Methods.instance_method(:one_key)
    m.parameters.should == [[:key,:a]]
  end

  it "returns [[:keyrest,:a]] for a method with a keyword rest argument" do
    m = MethodSpecs::Methods.instance_method(:one_keyrest)
    m.parameters.should == [[:keyrest,:a]]
  end

  it "returns [[:keyreq,:a]] for a method with a single required keyword argument" do
    m = MethodSpecs::Methods.instance_method(:one_keyreq)
    m.parameters.should == [[:keyreq,:a]]
  end

  it "works with ->(){} as the value of an optional argument" do
    m = MethodSpecs::Methods.instance_method(:one_opt_with_stabby)
    m.parameters.should == [[:opt,:a]]
  end

  # define_method variants
  it "returns [] for a define_method method with explicit no-args || specification" do
    m = MethodSpecs::Methods.instance_method(:zero_defined_method)
    m.parameters.should == []
  end

  it "returns [[:rest, :x]] for a define_method method with rest arg 'x' only" do
    m = MethodSpecs::Methods.instance_method(:zero_with_splat_defined_method)
    m.parameters.should == [[:rest, :x]]
  end

  it "returns [[:req, :x]] for a define_method method expecting one required argument 'x'" do
    m = MethodSpecs::Methods.instance_method(:one_req_defined_method)
    m.parameters.should == [[:req, :x]]
  end

  it "returns [[:req, :x], [:req, :y]] for a define_method method expecting two required arguments 'x' and 'y'" do
    m = MethodSpecs::Methods.instance_method(:two_req_defined_method)
    m.parameters.should == [[:req, :x], [:req, :y]]
  end

  it "returns [] for a define_method method with no args specification" do
    m = MethodSpecs::Methods.instance_method(:no_args_defined_method)
    m.parameters.should == []
  end

  it "returns [[:req]] for a define_method method with a grouping as its only argument" do
    m = MethodSpecs::Methods.instance_method(:two_grouped_defined_method)
    m.parameters.should == [[:req]]
  end

  it "returns [[:opt, :x]] for a define_method method with an optional argument 'x'" do
    m = MethodSpecs::Methods.instance_method(:one_optional_defined_method)
    m.parameters.should == [[:opt, :x]]
  end

  it "returns [[:rest]] for a Method generated by respond_to_missing?" do
    m = MethodSpecs::Methods.new
    m.method(:handled_via_method_missing).parameters.should == [[:rest]]
  end

  it "adds nameless rest arg for \"star\" argument" do
    m = MethodSpecs::Methods.new
    m.method(:one_unnamed_splat).parameters.should == [[:rest]]
  end

  it "returns the args and block for a splat and block argument" do
    m = MethodSpecs::Methods.new
    m.method(:one_splat_one_block).parameters.should == [[:rest, :args], [:block, :block]]
  end

  it "returns [] for a Method generated by attr_reader" do
    m = MethodSpecs::Methods.new
    m.method(:reader).parameters.should == []
  end

  it "return [[:req]] for a Method generated by attr_writer" do
    m = MethodSpecs::Methods.new
    m.method(:writer=).parameters.should == [[:req]]
  end
end
