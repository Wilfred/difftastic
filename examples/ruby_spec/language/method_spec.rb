require File.expand_path('../../spec_helper', __FILE__)

describe "A method send" do
  evaluate <<-ruby do
      def m(a) a end
    ruby

    a = b = m 1
    a.should == 1
    b.should == 1
  end

  context "with a single splatted Object argument" do
    before :all do
      def m(a) a end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      m(*x).should equal(x)
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([1])

      m(*x).should == 1
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      m(*x).should == x
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { m(*x) }.should raise_error(TypeError)
    end
  end

  context "with a leading splatted Object argument" do
    before :all do
      def m(a, b, *c, d, e) [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      m(*x, 1, 2, 3).should == [x, 1, [], 2, 3]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([1])

      m(*x, 2, 3, 4).should == [1, 2, [], 3, 4]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      m(*x, 2, 3, 4).should == [x, 2, [], 3, 4]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { m(*x, 2, 3) }.should raise_error(TypeError)
    end
  end

  context "with a middle splatted Object argument" do
    before :all do
      def m(a, b, *c, d, e) [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      m(1, 2, *x, 3, 4).should == [1, 2, [x], 3, 4]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([5, 6, 7])

      m(1, 2, *x, 3).should == [1, 2, [5, 6], 7, 3]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      m(1, 2, *x, 4).should == [1, 2, [], x, 4]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { m(1, *x, 2, 3) }.should raise_error(TypeError)
    end

    it "copies the splatted array" do
      args = [3, 4]
      m(1, 2, *args, 4, 5).should == [1, 2, [3, 4], 4, 5]
      m(1, 2, *args, 4, 5)[2].should_not equal(args)
    end

    it "allows an array being splatted to be modified by another argument" do
      args = [3, 4]
      m(1, args.shift, *args, 4, 5).should == [1, 3, [4], 4, 5]
    end
  end

  context "with a trailing splatted Object argument" do
    before :all do
      def m(a, *b, c) [a, b, c] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      m(1, 2, *x).should == [1, [2], x]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([5, 6, 7])

      m(1, 2, *x).should == [1, [2, 5, 6], 7]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      m(1, 2, *x, 4).should == [1, [2, x], 4]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { m(1, 2, *x) }.should raise_error(TypeError)
    end
  end
end

describe "An element assignment method send" do
  before :each do
    ScratchPad.clear
  end

  context "with a single splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.[]=(a, b) ScratchPad.record [a, b] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o[*x] = 1).should == 1
      ScratchPad.recorded.should == [x, 1]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([1])

      (@o[*x] = 2).should == 2
      ScratchPad.recorded.should == [1, 2]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o[*x] = 1).should == 1
      ScratchPad.recorded.should == [x, 1]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o[*x] = 1 }.should raise_error(TypeError)
    end
  end

  context "with a leading splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.[]=(a, b, *c, d, e) ScratchPad.record [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o[*x, 2, 3, 4] = 1).should == 1
      ScratchPad.recorded.should == [x, 2, [3], 4, 1]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([1, 2, 3])

      (@o[*x, 4, 5] = 6).should == 6
      ScratchPad.recorded.should == [1, 2, [3, 4], 5, 6]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o[*x, 2, 3, 4] = 5).should == 5
      ScratchPad.recorded.should == [x, 2, [3], 4, 5]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o[*x, 2, 3] = 4 }.should raise_error(TypeError)
    end
  end

  context "with a middle splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.[]=(a, b, *c, d, e) ScratchPad.record [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o[1, *x, 2, 3] = 4).should == 4
      ScratchPad.recorded.should == [1, x, [2], 3, 4]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([2, 3])

      (@o[1, *x, 4] = 5).should == 5
      ScratchPad.recorded.should == [1, 2, [3], 4, 5]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o[1, 2, *x, 3] = 4).should == 4
      ScratchPad.recorded.should == [1, 2, [x], 3, 4]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o[1, 2, *x, 3] = 4 }.should raise_error(TypeError)
    end
  end

  context "with a trailing splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.[]=(a, b, *c, d, e) ScratchPad.record [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o[1, 2, 3, 4, *x] = 5).should == 5
      ScratchPad.recorded.should == [1, 2, [3, 4], x, 5]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([4, 5])

      (@o[1, 2, 3, *x] = 6).should == 6
      ScratchPad.recorded.should == [1, 2, [3, 4], 5, 6]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o[1, 2, 3, *x] = 4).should == 4
      ScratchPad.recorded.should == [1, 2, [3], x, 4]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o[1, 2, 3, *x] = 4 }.should raise_error(TypeError)
    end
  end
end

describe "An attribute assignment method send" do
  context "with a single splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.m=(a, b) [a, b] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o.send :m=, *x, 1).should == [x, 1]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([1])

      (@o.send :m=, *x, 2).should == [1, 2]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o.send :m=, *x, 1).should == [x, 1]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o.send :m=, *x, 1 }.should raise_error(TypeError)
    end
  end

  context "with a leading splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.m=(a, b, *c, d, e) [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o.send :m=, *x, 2, 3, 4, 1).should == [x, 2, [3], 4, 1]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([1, 2, 3])

      (@o.send :m=, *x, 4, 5, 6).should == [1, 2, [3, 4], 5, 6]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o.send :m=, *x, 2, 3, 4, 5).should == [x, 2, [3], 4, 5]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o.send :m=, *x, 2, 3, 4 }.should raise_error(TypeError)
    end
  end

  context "with a middle splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.m=(a, b, *c, d, e) [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o.send :m=, 1, *x, 2, 3, 4).should == [1, x, [2], 3, 4]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([2, 3])

      (@o.send :m=, 1, *x, 4, 5).should == [1, 2, [3], 4, 5]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o.send :m=, 1, 2, *x, 3, 4).should == [1, 2, [x], 3, 4]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o.send :m=, 1, 2, *x, 3, 4 }.should raise_error(TypeError)
    end
  end

  context "with a trailing splatted Object argument" do
    before :all do
      @o = mock("element set receiver")
      def @o.m=(a, b, *c, d, e) [a, b, c, d, e] end
    end

    it "does not call #to_ary" do
      x = mock("splat argument")
      x.should_not_receive(:to_ary)

      (@o.send :m=, 1, 2, 3, 4, *x, 5).should == [1, 2, [3, 4], x, 5]
    end

    it "calls #to_a" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return([4, 5])

      (@o.send :m=, 1, 2, 3, *x, 6).should == [1, 2, [3, 4], 5, 6]
    end

    it "wraps the argument in an Array if #to_a returns nil" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(nil)

      (@o.send :m=, 1, 2, 3, *x, 4).should == [1, 2, [3], x, 4]
    end

    it "raises a TypeError if #to_a does not return an Array" do
      x = mock("splat argument")
      x.should_receive(:to_a).and_return(1)

      lambda { @o.send :m=, 1, 2, 3, *x, 4 }.should raise_error(TypeError)
    end
  end
end

describe "A method" do
  SpecEvaluate.desc = "for definition"

  context "assigns no local variables" do
    evaluate <<-ruby do
        def m
        end
      ruby

      m.should be_nil
    end

    evaluate <<-ruby do
        def m()
        end
      ruby

      m.should be_nil
    end
  end

  context "assigns local variables from method parameters" do
    evaluate <<-ruby do
        def m(a) a end
      ruby

      m((args = 1, 2, 3)).should equal(args)
    end

    evaluate <<-ruby do
        def m((a)) a end
      ruby

      m(1).should == 1
      m([1, 2, 3]).should == 1
    end

    evaluate <<-ruby do
        def m((*a, b)) [a, b] end
      ruby

      m(1).should == [[], 1]
      m([1, 2, 3]).should == [[1, 2], 3]
    end

    evaluate <<-ruby do
        def m(a=1) a end
      ruby

      m().should == 1
      m(2).should == 2
    end

    evaluate <<-ruby do
        def m(*) end
      ruby

      m().should be_nil
      m(1).should be_nil
      m(1, 2, 3).should be_nil
    end

    evaluate <<-ruby do
        def m(*a) a end
      ruby

      m().should == []
      m(1).should == [1]
      m(1, 2, 3).should == [1, 2, 3]
    end

    evaluate <<-ruby do
        def m(a:) a end
      ruby

      lambda { m() }.should raise_error(ArgumentError)
      m(a: 1).should == 1
      lambda { m("a" => 1, a: 1) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(a: 1) a end
      ruby

      m().should == 1
      m(a: 2).should == 2
    end

    evaluate <<-ruby do
        def m(**) end
      ruby

      m().should be_nil
      m(a: 1, b: 2).should be_nil
      lambda { m(1) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(**k) k end
      ruby

      m().should == {}
      m(a: 1, b: 2).should == { a: 1, b: 2 }
      lambda { m(2) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(&b) b end
      ruby

      m { }.should be_an_instance_of(Proc)
    end

    evaluate <<-ruby do
        def m(a, b) [a, b] end
      ruby

      m(1, 2).should == [1, 2]
    end

    evaluate <<-ruby do
        def m(a, (b, c)) [a, b, c] end
      ruby

      m(1, 2).should == [1, 2, nil]
      m(1, [2, 3, 4]).should == [1, 2, 3]
    end

    evaluate <<-ruby do
        def m((a), (b)) [a, b] end
      ruby

      m(1, 2).should == [1, 2]
      m([1, 2], [3, 4]).should == [1, 3]
    end

    evaluate <<-ruby do
        def m((*), (*)) end
      ruby

      m(2, 3).should be_nil
      m([2, 3, 4], [5, 6]).should be_nil
      lambda { m a: 1 }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m((*a), (*b)) [a, b] end
      ruby

      m(1, 2).should == [[1], [2]]
      m([1, 2], [3, 4]).should == [[1, 2], [3, 4]]
    end

    evaluate <<-ruby do
        def m((a, b), (c, d))
          [a, b, c, d]
        end
      ruby

      m(1, 2).should == [1, nil, 2, nil]
      m([1, 2, 3], [4, 5, 6]).should == [1, 2, 4, 5]
    end

    evaluate <<-ruby do
        def m((a, *b), (*c, d))
          [a, b, c, d]
        end
      ruby

      m(1, 2).should == [1, [], [], 2]
      m([1, 2, 3], [4, 5, 6]).should == [1, [2, 3], [4, 5], 6]
    end

    evaluate <<-ruby do
        def m((a, b, *c, d), (*e, f, g), (*h))
          [a, b, c, d, e, f, g, h]
        end
      ruby

      m(1, 2, 3).should == [1, nil, [], nil, [], 2, nil, [3]]
      result = m([1, 2, 3], [4, 5, 6, 7, 8], [9, 10])
      result.should == [1, 2, [], 3, [4, 5, 6], 7, 8, [9, 10]]
    end

    evaluate <<-ruby do
        def m(a, (b, (c, *d), *e))
          [a, b, c, d, e]
        end
      ruby

      m(1, 2).should == [1, 2, nil, [], []]
      m(1, [2, [3, 4, 5], 6, 7, 8]).should == [1, 2, 3, [4, 5], [6, 7, 8]]
    end

    evaluate <<-ruby do
        def m(a, (b, (c, *d, (e, (*f)), g), (h, (i, j))))
          [a, b, c, d, e, f, g, h, i, j]
        end
      ruby

      m(1, 2).should == [1, 2, nil, [], nil, [nil], nil, nil, nil, nil]
      result = m(1, [2, [3, 4, 5, [6, [7, 8]], 9], [10, [11, 12]]])
      result.should == [1, 2, 3, [4, 5], 6, [7, 8], 9, 10, 11, 12]
    end

    evaluate <<-ruby do
        def m(a, b=1) [a, b] end
      ruby

      m(2).should == [2, 1]
      m(1, 2).should == [1, 2]
    end

    evaluate <<-ruby do
        def m(a, *) a end
      ruby

      m(1).should == 1
      m(1, 2, 3).should == 1
    end

    evaluate <<-ruby do
        def m(a, *b) [a, b] end
      ruby

      m(1).should == [1, []]
      m(1, 2, 3).should == [1, [2, 3]]
    end

    evaluate <<-ruby do
        def m(a, b:) [a, b] end
      ruby

      m(1, b: 2).should == [1, 2]
      lambda { m("a" => 1, b: 2) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(a, b: 1) [a, b] end
      ruby

      m(2).should == [2, 1]
      m(1, b: 2).should == [1, 2]
      m("a" => 1, b: 2).should == [{"a" => 1, b: 2}, 1]
    end

    evaluate <<-ruby do
        def m(a, **) a end
      ruby

      m(1).should == 1
      m(1, a: 2, b: 3).should == 1
      m("a" => 1, b: 2).should == {"a" => 1, b: 2}
    end

    evaluate <<-ruby do
        def m(a, **k) [a, k] end
      ruby

      m(1).should == [1, {}]
      m(1, a: 2, b: 3).should == [1, {a: 2, b: 3}]
      m("a" => 1, b: 2).should == [{"a" => 1, b: 2}, {}]
    end

    evaluate <<-ruby do
        def m(a, &b) [a, b] end
      ruby

      m(1).should == [1, nil]
      m(1, &(l = -> {})).should == [1, l]
    end

    evaluate <<-ruby do
        def m(a=1, b) [a, b] end
      ruby

      m(2).should == [1, 2]
      m(2, 3).should == [2, 3]
    end

    evaluate <<-ruby do
        def m(a=1, *) a end
      ruby

      m().should == 1
      m(2, 3, 4).should == 2
    end

    evaluate <<-ruby do
        def m(a=1, *b) [a, b] end
      ruby

      m().should == [1, []]
      m(2, 3, 4).should == [2, [3, 4]]
    end

    evaluate <<-ruby do
        def m(a=1, (b, c)) [a, b, c] end
      ruby

      m(2).should == [1, 2, nil]
      m(2, 3).should == [2, 3, nil]
      m(2, [3, 4, 5]).should == [2, 3, 4]
    end

    evaluate <<-ruby do
        def m(a=1, (b, (c, *d))) [a, b, c, d] end
      ruby

      m(2).should == [1, 2, nil, []]
      m(2, 3).should == [2, 3, nil, []]
      m(2, [3, [4, 5, 6], 7]).should == [2, 3, 4, [5, 6]]
    end

    evaluate <<-ruby do
        def m(a=1, (b, (c, *d), *e)) [a, b, c, d, e] end
      ruby

      m(2).should == [1, 2, nil, [], []]
      m(2, [3, 4, 5, 6]).should == [2, 3, 4, [], [5, 6]]
      m(2, [3, [4, 5, 6], 7]).should == [2, 3, 4, [5, 6], [7]]
    end

    evaluate <<-ruby do
        def m(a=1, (b), (c)) [a, b, c] end
      ruby

      m(2, 3).should == [1, 2, 3]
      m(2, 3, 4).should == [2, 3, 4]
      m(2, [3, 4], [5, 6, 7]).should == [2, 3, 5]
    end

    evaluate <<-ruby do
        def m(a=1, (*b), (*c)) [a, b, c] end
      ruby

      lambda { m() }.should raise_error(ArgumentError)
      lambda { m(2) }.should raise_error(ArgumentError)
      m(2, 3).should == [1, [2], [3]]
      m(2, [3, 4], [5, 6]).should == [2, [3, 4], [5, 6]]
    end

    evaluate <<-ruby do
        def m(a=1, (b, c), (d, e)) [a, b, c, d, e] end
      ruby

      m(2, 3).should == [1, 2, nil, 3, nil]
      m(2, [3, 4, 5], [6, 7, 8]).should == [2, 3, 4, 6, 7]
    end

    evaluate <<-ruby do
        def m(a=1, (b, *c), (*d, e))
          [a, b, c, d, e]
        end
      ruby

      m(1, 2).should == [1, 1, [], [], 2]
      m(1, [2, 3], [4, 5, 6]).should == [1, 2, [3], [4, 5], 6]
    end

    evaluate <<-ruby do
        def m(a=1, (b, *c), (d, (*e, f)))
          [a, b, c, d, e, f]
        end
      ruby

      m(1, 2).should == [1, 1, [], 2, [], nil]
      m(nil, nil).should == [1, nil, [], nil, [], nil]
      result = m([1, 2, 3], [4, 5, 6], [7, 8, 9])
      result.should == [[1, 2, 3], 4, [5, 6], 7, [], 8]
    end

    evaluate <<-ruby do
        def m(a=1, b:) [a, b] end
      ruby

      m(b: 2).should == [1, 2]
      m(2, b: 1).should == [2, 1]
      m("a" => 1, b: 2).should == [{"a" => 1}, 2]
    end

    evaluate <<-ruby do
        def m(a=1, b: 2) [a, b] end
      ruby

      m().should == [1, 2]
      m(2).should == [2, 2]
      m(b: 3).should == [1, 3]
      m("a" => 1, b: 2).should == [{"a" => 1}, 2]
    end

    evaluate <<-ruby do
        def m(a=1, **) a end
      ruby

      m().should == 1
      m(2, a: 1, b: 0).should == 2
      m("a" => 1, a: 2).should == {"a" => 1}
    end

    evaluate <<-ruby do
        def m(a=1, **k) [a, k] end
      ruby

      m().should == [1, {}]
      m(2, a: 1, b: 2).should == [2, {a: 1, b: 2}]
    end

    evaluate <<-ruby do
        def m(a=1, &b) [a, b] end
      ruby

      m().should == [1, nil]
      m(&(l = -> {})).should == [1, l]

      p = -> {}
      l = mock("to_proc")
      l.should_receive(:to_proc).and_return(p)
      m(&l).should == [1, p]
    end

    evaluate <<-ruby do
        def m(*, a) a end
      ruby

      m(1).should == 1
      m(1, 2, 3).should == 3
    end

    evaluate <<-ruby do
        def m(*a, b) [a, b] end
      ruby

      m(1).should == [[], 1]
      m(1, 2, 3).should == [[1, 2], 3]
    end

    evaluate <<-ruby do
        def m(*, a:) a end
      ruby

      m(a: 1).should == 1
      m(1, 2, a: 3).should == 3
      m("a" => 1, a: 2).should == 2
    end

    evaluate <<-ruby do
        def m(*a, b:) [a, b] end
      ruby

      m(b: 1).should == [[], 1]
      m(1, 2, b: 3).should == [[1, 2], 3]
      m("a" => 1, b: 2).should == [[{"a" => 1}], 2]
    end

    evaluate <<-ruby do
        def m(*, a: 1) a end
      ruby

      m().should == 1
      m(1, 2).should == 1
      m(a: 2).should == 2
      m(1, a: 2).should == 2
      m("a" => 1, a: 2).should == 2
    end

    evaluate <<-ruby do
        def m(*a, b: 1) [a, b] end
      ruby

      m().should == [[], 1]
      m(1, 2, 3, b: 4).should == [[1, 2, 3], 4]
      m("a" => 1, b: 2).should == [[{"a" => 1}], 2]

      a = mock("splat")
      a.should_not_receive(:to_ary)
      m(*a).should == [[a], 1]
    end

    evaluate <<-ruby do
        def m(*, **) end
      ruby

      m().should be_nil
      m(a: 1, b: 2).should be_nil
      m(1, 2, 3, a: 4, b: 5).should be_nil

      h = mock("keyword splat")
      h.should_receive(:to_hash).and_return({a: 1})
      m(h).should be_nil

      h = mock("keyword splat")
      error = RuntimeError.new("error while converting to a hash")
      h.should_receive(:to_hash).and_raise(error)
      lambda { m(h) }.should raise_error(error)
    end

    evaluate <<-ruby do
        def m(*a, **) a end
      ruby

      m().should == []
      m(1, 2, 3, a: 4, b: 5).should == [1, 2, 3]
      m("a" => 1, a: 1).should == [{"a" => 1}]
      m(1, **{a: 2}).should == [1]

      h = mock("keyword splat")
      h.should_receive(:to_hash)
      lambda { m(**h) }.should raise_error(TypeError)
    end

    evaluate <<-ruby do
        def m(*, **k) k end
      ruby

      m().should == {}
      m(1, 2, 3, a: 4, b: 5).should == {a: 4, b: 5}
      m("a" => 1, a: 1).should == {a: 1}

      h = mock("keyword splat")
      h.should_receive(:to_hash).and_return({a: 1})
      m(h).should == {a: 1}
    end

    evaluate <<-ruby do
        def m(a = nil, **k) [a, k] end
      ruby

      m().should == [nil, {}]
      m("a" => 1).should == [{"a" => 1}, {}]
      m(a: 1).should == [nil, {a: 1}]
      m("a" => 1, a: 1).should == [{"a" => 1}, {a: 1}]
      m({ "a" => 1 }, a: 1).should == [{"a" => 1}, {a: 1}]
      m({a: 1}, {}).should == [{a: 1}, {}]

      h = {"a" => 1, b: 2}
      m(h).should == [{"a" => 1}, {b: 2}]
      h.should == {"a" => 1, b: 2}

      h = {"a" => 1}
      m(h).first.should == h

      h = {}
      r = m(h)
      r.first.should be_nil
      r.last.should == {}

      hh = {}
      h = mock("keyword splat empty hash")
      h.should_receive(:to_hash).and_return(hh)
      r = m(h)
      r.first.should be_nil
      r.last.should == {}

      h = mock("keyword splat")
      h.should_receive(:to_hash).and_return({"a" => 1, a: 2})
      m(h).should == [{"a" => 1}, {a: 2}]
    end

    evaluate <<-ruby do
        def m(*a, **k) [a, k] end
      ruby

      m().should == [[], {}]
      m(1).should == [[1], {}]
      m(a: 1, b: 2).should == [[], {a: 1, b: 2}]
      m(1, 2, 3, a: 2).should == [[1, 2, 3], {a: 2}]

      m("a" => 1).should == [[{"a" => 1}], {}]
      m(a: 1).should == [[], {a: 1}]
      m("a" => 1, a: 1).should == [[{"a" => 1}], {a: 1}]
      m({ "a" => 1 }, a: 1).should == [[{"a" => 1}], {a: 1}]
      m({a: 1}, {}).should == [[{a: 1}], {}]
      m({a: 1}, {"a" => 1}).should == [[{a: 1}, {"a" => 1}], {}]

      bo = BasicObject.new
      def bo.to_a; [1, 2, 3]; end
      def bo.to_hash; {:b => 2, :c => 3}; end

      m(*bo, **bo).should == [[1, 2, 3], {:b => 2, :c => 3}]
    end

    evaluate <<-ruby do
        def m(*, &b) b end
      ruby

      m().should be_nil
      m(1, 2, 3, 4).should be_nil
      m(&(l = ->{})).should equal(l)
    end

    evaluate <<-ruby do
        def m(*a, &b) [a, b] end
      ruby

      m().should == [[], nil]
      m(1).should == [[1], nil]
      m(1, 2, 3, &(l = -> {})).should == [[1, 2, 3], l]
    end

    evaluate <<-ruby do
        def m(a:, b:) [a, b] end
      ruby

      m(a: 1, b: 2).should == [1, 2]
      lambda { m("a" => 1, a: 1, b: 2) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(a:, b: 1) [a, b] end
      ruby

      m(a: 1).should == [1, 1]
      m(a: 1, b: 2).should == [1, 2]
      lambda { m("a" => 1, a: 1, b: 2) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(a:, **) a end
      ruby

      m(a: 1).should == 1
      m(a: 1, b: 2).should == 1
      lambda { m("a" => 1, a: 1, b: 2) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(a:, **k) [a, k] end
      ruby

      m(a: 1).should == [1, {}]
      m(a: 1, b: 2, c: 3).should == [1, {b: 2, c: 3}]
      lambda { m("a" => 1, a: 1, b: 2) }.should raise_error(ArgumentError)
    end

    evaluate <<-ruby do
        def m(a:, &b) [a, b] end
      ruby

      m(a: 1).should == [1, nil]
      m(a: 1, &(l = ->{})).should == [1, l]
    end

    evaluate <<-ruby do
        def m(a: 1, b:) [a, b] end
      ruby

      m(b: 0).should == [1, 0]
      m(b: 2, a: 3).should == [3, 2]
    end

    evaluate <<-ruby do
        def m(a: def m(a: 1) a end, b:)
          [a, b]
        end
      ruby

      m(a: 2, b: 3).should == [2, 3]
      m(b: 1).should == [:m, 1]

      # Note the default value of a: in the original method.
      m().should == 1
    end

    evaluate <<-ruby do
        def m(a: 1, b: 2) [a, b] end
      ruby

      m().should == [1, 2]
      m(b: 3, a: 4).should == [4, 3]
    end

    evaluate <<-ruby do
        def m(a: 1, **) a end
      ruby

      m().should == 1
      m(a: 2, b: 1).should == 2
    end

    evaluate <<-ruby do
        def m(a: 1, **k) [a, k] end
      ruby

      m(b: 2, c: 3).should == [1, {b: 2, c: 3}]
    end

    evaluate <<-ruby do
        def m(a: 1, &b) [a, b] end
      ruby

      m(&(l = ->{})).should == [1, l]
      m().should == [1, nil]
    end

    evaluate <<-ruby do
        def m(**, &b) b end
      ruby

      m(a: 1, b: 2, &(l = ->{})).should == l
    end

    evaluate <<-ruby do
        def m(**k, &b) [k, b] end
      ruby

      m(a: 1, b: 2).should == [{ a: 1, b: 2}, nil]
    end

    evaluate <<-ruby do
        def m(a, b=1, *c, (*d, (e)), f: 2, g:, h:, **k, &l)
          [a, b, c, d, e, f, g, h, k, l]
        end
      ruby

      result = m(9, 8, 7, 6, f: 5, g: 4, h: 3, &(l = ->{}))
      result.should == [9, 8, [7], [], 6, 5, 4, 3, {}, l]
    end

    evaluate <<-ruby do
        def m a, b=1, *c, d, e:, f: 2, g:, **k, &l
          [a, b, c, d, e, f, g, k, l]
        end
      ruby

      result = m(1, 2, e: 3, g: 4, h: 5, i: 6, &(l = ->{}))
      result.should == [1, 1, [], 2, 3, 2, 4, { h: 5, i: 6 }, l]
    end

    evaluate <<-ruby do
        def m (a, b = nil, c = nil, d, e: nil, **f)
          [a, b, c, d, e, f]
        end
    ruby

      result = m(1, 2)
      result.should == [1, nil, nil, 2, nil, {}]
    end
  end
end

describe "A method call with a space between method name and parentheses" do
  before(:each) do
    def m(*args)
      args
    end

    def n(value, &block)
      [value, block.call]
    end
  end

  context "when no arguments provided" do
    it "assigns nil" do
      args = m ()
      args.should == [nil]
    end
  end

  context "when a single argument provided" do
    it "assigns it" do
      args = m (1 == 1 ? true : false)
      args.should == [true]
    end
  end

  context "when 2+ arguments provided" do
    it "raises a syntax error" do
      lambda {
        eval("m (1, 2)")
      }.should raise_error(SyntaxError)

      lambda {
        eval("m (1, 2, 3)")
      }.should raise_error(SyntaxError)
    end
  end

  it "allows to pass a block with curly braces" do
    args = n () { :block_value }
    args.should == [nil, :block_value]

    args = n (1) { :block_value }
    args.should == [1, :block_value]
  end

  it "allows to pass a block with do/end" do
    args = n () do
      :block_value
    end
    args.should == [nil, :block_value]

    args = n (1) do
      :block_value
    end
    args.should == [1, :block_value]
  end
end

describe "An array-dereference method ([])" do
  SpecEvaluate.desc = "for definition"

  context "received the passed-in block" do
    evaluate <<-ruby do
        def [](*, &b)
          b.call
        end
    ruby
      pr = proc {:ok}

      self[&pr].should == :ok
      self['foo', &pr].should == :ok
      self.[](&pr).should == :ok
      self.[]('foo', &pr).should == :ok
    end

    evaluate <<-ruby do
        def [](*)
          yield
        end
    ruby
      pr = proc {:ok}

      self[&pr].should == :ok
      self['foo', &pr].should == :ok
      self.[](&pr).should == :ok
      self.[]('foo', &pr).should == :ok
    end
  end
end
