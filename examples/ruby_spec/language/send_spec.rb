require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/send', __FILE__)

# Why so many fixed arg tests?  JRuby and I assume other Ruby impls have
# separate call paths for simple fixed arity methods.  Testing up to five
# will verify special and generic arity code paths for all impls.
#
# Method naming conventions:
# M - Manditory Args
# O - Optional Arg
# R - Rest Arg
# Q - Post Manditory Args

specs = LangSendSpecs

describe "Invoking a method" do
  describe "with zero arguments" do
    it "requires no arguments passed" do
      specs.fooM0.should == 100
    end

    it "raises ArgumentError if the method has a positive arity" do
      lambda {
        specs.fooM1
      }.should raise_error(ArgumentError)
    end
  end

  describe "with only mandatory arguments" do
    it "requires exactly the same number of passed values" do
      specs.fooM1(1).should == [1]
      specs.fooM2(1,2).should == [1,2]
      specs.fooM3(1,2,3).should == [1,2,3]
      specs.fooM4(1,2,3,4).should == [1,2,3,4]
      specs.fooM5(1,2,3,4,5).should == [1,2,3,4,5]
    end

    it "raises ArgumentError if the methods arity doesn't match" do
      lambda {
        specs.fooM1(1,2)
      }.should raise_error(ArgumentError)
    end
  end

  describe "with optional arguments" do
    it "uses the optional argument if none is is passed" do
      specs.fooM0O1.should == [1]
    end

    it "uses the passed argument if available" do
      specs.fooM0O1(2).should == [2]
    end

    it "raises ArgumentError if extra arguments are passed" do
      lambda {
        specs.fooM0O1(2,3)
      }.should raise_error(ArgumentError)
    end
  end

  describe "with mandatory and optional arguments" do
    it "uses the passed values in left to right order" do
      specs.fooM1O1(2).should == [2,1]
    end

    it "raises an ArgumentError if there are no values for the mandatory args" do
      lambda {
        specs.fooM1O1
      }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError if too many values are passed" do
      lambda {
        specs.fooM1O1(1,2,3)
      }.should raise_error(ArgumentError)
    end
  end

  describe "with a rest argument" do
    it "is an empty array if there are no additional arguments" do
      specs.fooM0R().should == []
      specs.fooM1R(1).should == [1, []]
    end

    it "gathers unused arguments" do
      specs.fooM0R(1).should == [1]
      specs.fooM1R(1,2).should == [1, [2]]
    end
  end

  it "with a block makes it available to yield" do
    specs.oneb(10) { 200 }.should == [10,200]
  end

  it "with a block converts the block to a Proc" do
    prc = specs.makeproc { "hello" }
    prc.should be_kind_of(Proc)
    prc.call.should == "hello"
  end

  it "with an object as a block uses 'to_proc' for coercion" do
    o = LangSendSpecs::ToProc.new(:from_to_proc)

    specs.makeproc(&o).call.should == :from_to_proc

    specs.yield_now(&o).should == :from_to_proc
  end

  it "raises a SyntaxError with both a literal block and an object as block" do
    lambda {
      eval "specs.oneb(10, &l){ 42 }"
    }.should raise_error(SyntaxError)
  end

  it "with same names as existing variables is ok" do
    foobar = 100

    def foobar; 200; end

    foobar.should == 100
    foobar().should == 200
  end

  it "with splat operator makes the object the direct arguments" do
    a = [1,2,3]
    specs.fooM3(*a).should == [1,2,3]
  end

  it "without parentheses works" do
    (specs.fooM3 1,2,3).should == [1,2,3]
  end

  it "with a space separating method name and parenthesis treats expression in parenthesis as first argument" do
    specs.weird_parens().should == "55"
  end

  describe "allows []=" do
    before :each do
      @obj = LangSendSpecs::AttrSet.new
    end

    it "with *args in the [] expanded to individual arguments" do
      ary = [2,3]
      (@obj[1, *ary] = 4).should == 4
      @obj.result.should == [1,2,3,4]
    end

    it "with multiple *args" do
      ary = [2,3]
      post = [4,5]
      (@obj[1, *ary] = *post).should == [4,5]
      @obj.result.should == [1,2,3,[4,5]]
    end

    it "with multiple *args and does not unwrap the last splat" do
      ary = [2,3]
      post = [4]
      (@obj[1, *ary] = *post).should == [4]
      @obj.result.should == [1,2,3,[4]]
    end

    it "with a *args and multiple rhs args" do
      ary = [2,3]
      (@obj[1, *ary] = 4, 5).should == [4,5]
      @obj.result.should == [1,2,3,[4,5]]
    end
  end

  it "passes literal hashes without curly braces as the last parameter" do
    specs.fooM3('abc', 456, 'rbx' => 'cool',
          'specs' => 'fail sometimes', 'oh' => 'weh').should == \
      ['abc', 456, {'rbx' => 'cool', 'specs' => 'fail sometimes', 'oh' => 'weh'}]
  end

  it "passes a literal hash without curly braces or parens" do
    (specs.fooM3 'abc', 456, 'rbx' => 'cool',
         'specs' => 'fail sometimes', 'oh' => 'weh').should == \
      ['abc', 456, { 'rbx' => 'cool', 'specs' => 'fail sometimes', 'oh' => 'weh'}]
  end

  it "allows to literal hashes without curly braces as the only parameter" do
    specs.fooM1(rbx: :cool, specs: :fail_sometimes).should ==
      [{ rbx: :cool, specs: :fail_sometimes }]

    (specs.fooM1 rbx: :cool, specs: :fail_sometimes).should ==
      [{ rbx: :cool, specs: :fail_sometimes }]
  end

  describe "when the method is not available" do
    it "invokes method_missing if it is defined" do
      o = LangSendSpecs::MethodMissing.new
      o.not_there(1,2)
      o.message.should == :not_there
      o.args.should == [1,2]
    end

    it "raises NameError if invoked as a vcall" do
      lambda { no_such_method }.should raise_error NameError
    end

    it "raises NoMethodError if invoked as an unambiguous method call" do
      lambda { no_such_method() }.should raise_error NoMethodError
      lambda { no_such_method(1,2,3) }.should raise_error NoMethodError
    end
  end

end

describe "Invoking a public setter method" do
  it 'returns the set value' do
    klass = Class.new do
      def foobar=(*)
        1
      end
    end

    (klass.new.foobar = 'bar').should == 'bar'
    (klass.new.foobar = 'bar', 'baz').should == ["bar", "baz"]
  end
end

describe "Invoking []= methods" do
  it 'returns the set value' do
    klass = Class.new do
      def []=(*)
        1
      end
    end

    (klass.new[33] = 'bar').should == 'bar'
    (klass.new[33] = 'bar', 'baz').should == ['bar', 'baz']
    (klass.new[33, 34] = 'bar', 'baz').should == ['bar', 'baz']
  end
end

describe "Invoking a private setter method" do
  describe "permits self as a receiver" do
    it "for normal assignment" do
      receiver = LangSendSpecs::PrivateSetter.new
      receiver.call_self_foo_equals(42)
      receiver.foo.should == 42
    end

    it "for multiple assignment" do
      receiver = LangSendSpecs::PrivateSetter.new
      receiver.call_self_foo_equals_masgn(42)
      receiver.foo.should == 42
    end
  end
end

describe "Invoking a private getter method" do
  it "does not permit self as a receiver" do
    receiver = LangSendSpecs::PrivateGetter.new
    lambda { receiver.call_self_foo }.should raise_error(NoMethodError)
    lambda { receiver.call_self_foo_or_equals(6) }.should raise_error(NoMethodError)
  end
end

describe "Invoking a method" do
  describe "with required args after the rest arguments" do
    it "binds the required arguments first" do
      specs.fooM0RQ1(1).should == [[], 1]
      specs.fooM0RQ1(1,2).should == [[1], 2]
      specs.fooM0RQ1(1,2,3).should == [[1,2], 3]

      specs.fooM1RQ1(1,2).should == [1, [], 2]
      specs.fooM1RQ1(1,2,3).should == [1, [2], 3]
      specs.fooM1RQ1(1,2,3,4).should == [1, [2, 3], 4]

      specs.fooM1O1RQ1(1,2).should == [1, 9, [], 2]
      specs.fooM1O1RQ1(1,2,3).should == [1, 2, [], 3]
      specs.fooM1O1RQ1(1,2,3,4).should == [1, 2, [3], 4]

      specs.fooM1O1RQ2(1,2,3).should == [1, 9, [], 2, 3]
      specs.fooM1O1RQ2(1,2,3,4).should == [1, 2, [], 3, 4]
      specs.fooM1O1RQ2(1,2,3,4,5).should == [1, 2, [3], 4, 5]
    end
  end

  describe "with mandatory arguments after optional arguments" do
    it "binds the required arguments first" do
      specs.fooO1Q1(0,1).should == [0,1]
      specs.fooO1Q1(2).should == [1,2]

      specs.fooM1O1Q1(2,3,4).should == [2,3,4]
      specs.fooM1O1Q1(1,3).should == [1,2,3]

      specs.fooM2O1Q1(1,2,4).should == [1,2,3,4]

      specs.fooM2O2Q1(1,2,3,4,5).should == [1,2,3,4,5]
      specs.fooM2O2Q1(1,2,3,5).should == [1,2,3,4,5]
      specs.fooM2O2Q1(1,2,5).should == [1,2,3,4,5]

      specs.fooO4Q1(1,2,3,4,5).should == [1,2,3,4,5]
      specs.fooO4Q1(1,2,3,5).should == [1,2,3,4,5]
      specs.fooO4Q1(1,2,5).should == [1,2,3,4,5]
      specs.fooO4Q1(1,5).should == [1,2,3,4,5]
      specs.fooO4Q1(5).should == [1,2,3,4,5]

      specs.fooO4Q2(1,2,3,4,5,6).should == [1,2,3,4,5,6]
      specs.fooO4Q2(1,2,3,5,6).should == [1,2,3,4,5,6]
      specs.fooO4Q2(1,2,5,6).should == [1,2,3,4,5,6]
      specs.fooO4Q2(1,5,6).should == [1,2,3,4,5,6]
      specs.fooO4Q2(5,6).should == [1,2,3,4,5,6]
    end
  end

  it "with .() invokes #call" do
    q = proc { |z| z }
    q.(1).should == 1

    obj = mock("paren call")
    obj.should_receive(:call).and_return(:called)
    obj.().should == :called
  end

  it "allows a vestigial trailing ',' in the arguments" do
    specs.fooM1(1,).should == [1]
  end

  it "with splat operator attempts to coerce it to an Array if the object respond_to?(:to_a)" do
    ary = [2,3,4]
    obj = mock("to_a")
    obj.should_receive(:to_a).and_return(ary).twice
    specs.fooM0R(*obj).should == ary
    specs.fooM1R(1,*obj).should == [1, ary]
  end

  it "with splat operator * and non-Array value uses value unchanged if it does not respond_to?(:to_ary)" do
    obj = Object.new
    obj.should_not respond_to(:to_a)

    specs.fooM0R(*obj).should == [obj]
    specs.fooM1R(1,*obj).should == [1, [obj]]
  end

  it "accepts additional arguments after splat expansion" do
    a = [1,2]
    specs.fooM4(*a,3,4).should == [1,2,3,4]
    specs.fooM4(0,*a,3).should == [0,1,2,3]
  end

  it "does not expand final array arguments after a splat expansion" do
    a = [1, 2]
    specs.fooM3(*a, [3, 4]).should == [1, 2, [3, 4]]
  end

  it "accepts final explicit literal Hash arguments after the splat" do
    a = [1, 2]
    specs.fooM0RQ1(*a, { a: 1 }).should == [[1, 2], { a: 1 }]
  end

  it "accepts final implicit literal Hash arguments after the splat" do
    a = [1, 2]
    specs.fooM0RQ1(*a, a: 1).should == [[1, 2], { a: 1 }]
  end

  it "accepts final Hash arguments after the splat" do
    a = [1, 2]
    b = { a: 1 }
    specs.fooM0RQ1(*a, b).should == [[1, 2], { a: 1 }]
  end

  it "accepts mandatory and explicit literal Hash arguments after the splat" do
    a = [1, 2]
    specs.fooM0RQ2(*a, 3, { a: 1 }).should == [[1, 2], 3, { a: 1 }]
  end

  it "accepts mandatory and implicit literal Hash arguments after the splat" do
    a = [1, 2]
    specs.fooM0RQ2(*a, 3, a: 1).should == [[1, 2], 3, { a: 1 }]
  end

  it "accepts mandatory and Hash arguments after the splat" do
    a = [1, 2]
    b = { a: 1 }
    specs.fooM0RQ2(*a, 3, b).should == [[1, 2], 3, { a: 1 }]
  end

  it "converts a final splatted explicit Hash to an Array" do
    a = [1, 2]
    specs.fooR(*a, 3, *{ a: 1 }).should == [1, 2, 3, [:a, 1]]
  end

  it "calls #to_a to convert a final splatted Hash object to an Array" do
    a = [1, 2]
    b = { a: 1 }
    b.should_receive(:to_a).and_return([:a, 1])

    specs.fooR(*a, 3, *b).should == [1, 2, 3, :a, 1]
  end

  it "accepts multiple splat expansions in the same argument list" do
    a = [1,2,3]
    b = 7
    c = mock("pseudo-array")
    c.should_receive(:to_a).and_return([0,0])

    d = [4,5]
    specs.rest_len(*a,*d,6,*b).should == 7
    specs.rest_len(*a,*a,*a).should == 9
    specs.rest_len(0,*a,4,*5,6,7,*c,-1).should == 11
  end

  it "expands an array to arguments grouped in parentheses" do
    specs.destructure2([40,2]).should == 42
  end

  it "expands an array to arguments grouped in parentheses and ignores any rest arguments in the array" do
    specs.destructure2([40,2,84]).should == 42
  end

  it "expands an array to arguments grouped in parentheses and sets not specified arguments to nil" do
    specs.destructure2b([42]).should == [42, nil]
  end

  it "expands an array to arguments grouped in parentheses which in turn takes rest arguments" do
    specs.destructure4r([1, 2, 3]).should == [1, 2, [], 3, nil]
    specs.destructure4r([1, 2, 3, 4]).should == [1, 2, [], 3, 4]
    specs.destructure4r([1, 2, 3, 4, 5]).should == [1, 2, [3], 4, 5]
  end

  it "with optional argument(s), expands an array to arguments grouped in parentheses" do
    specs.destructure4o(1, [2, 3]).should == [1, 1, nil, [2, 3]]
    specs.destructure4o(1, [], 2).should == [1, nil, nil, 2]
    specs.destructure4os(1, [2, 3]).should == [1, 2, [3]]
    specs.destructure5o(1, [2, 3]).should == [1, 2, 1, nil, [2, 3]]
    specs.destructure7o(1, [2, 3]).should == [1, 2, 1, nil, 2, 3]
    specs.destructure7b(1, [2, 3]) do |(a,*b,c)|
      [a, c]
    end.should == [1, 3]
  end

  describe "new-style hash arguments" do
    describe "as the only parameter" do
      it "passes without curly braces" do
        specs.fooM1(rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          [{ rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "passes without curly braces or parens" do
        (specs.fooM1 rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          [{ rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "handles a hanging comma without curly braces" do
        specs.fooM1(abc: 123,).should == [{abc: 123}]
        specs.fooM1(rbx: 'cool', specs: :fail_sometimes, non_sym: 1234,).should ==
          [{ rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end
    end

    describe "as the last parameter" do
      it "passes without curly braces" do
        specs.fooM3('abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "passes without curly braces or parens" do
        (specs.fooM3 'abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "handles a hanging comma without curly braces" do
        specs.fooM3('abc', 123, abc: 123,).should == ['abc', 123, {abc: 123}]
        specs.fooM3('abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234,).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end
    end
  end

  describe "mixed new- and old-style hash arguments" do
    describe "as the only parameter" do
      it "passes without curly braces" do
        specs.fooM1(rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          [{ rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "passes without curly braces or parens" do
        (specs.fooM1 rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          [{ rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "handles a hanging comma without curly braces" do
        specs.fooM1(rbx: 'cool', specs: :fail_sometimes, non_sym: 1234,).should ==
          [{ rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end
    end

    describe "as the last parameter" do
      it "passes without curly braces" do
        specs.fooM3('abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "passes without curly braces or parens" do
        (specs.fooM3 'abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end

      it "handles a hanging comma without curly braces" do
        specs.fooM3('abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234,).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end
    end
  end

end

describe "allows []= with arguments after splat" do
  before :each do
    @obj = LangSendSpecs::Attr19Set.new
    @ary = ["a"]
  end

  it "with *args in the [] and post args" do
    @obj[1,*@ary,123] = 2
    @obj.result.should == [1, "a", 123, 2]
  end
end
