require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Method#curry" do
  it "returns a curried proc" do
    x = Object.new
    def x.foo(a,b,c); [a,b,c]; end

    c = x.method(:foo).curry
    c.should be_kind_of(Proc)
    c.call(1).call(2, 3).should == [1,2,3]
  end

  describe "with optional arity argument" do
    before(:each) do
      @obj = MethodSpecs::Methods.new
    end

    it "returns a curried proc when given correct arity" do
      @obj.method(:one_req).curry(1).should be_kind_of(Proc)
      @obj.method(:zero_with_splat).curry(100).should be_kind_of(Proc)
      @obj.method(:two_req_with_splat).curry(2).should be_kind_of(Proc)
    end

    it "raises ArgumentError when the method requires less arguments than the given arity" do
      lambda { @obj.method(:zero).curry(1) }.should raise_error(ArgumentError)
      lambda { @obj.method(:one_req_one_opt).curry(3) }.should raise_error(ArgumentError)
      lambda { @obj.method(:two_req_one_opt_with_block).curry(4) }.should raise_error(ArgumentError)
    end

    it "raises ArgumentError when the method requires more arguments than the given arity" do
      lambda { @obj.method(:two_req_with_splat).curry(1) }.should raise_error(ArgumentError)
      lambda { @obj.method(:one_req).curry(0) }.should raise_error(ArgumentError)
    end
  end
end
