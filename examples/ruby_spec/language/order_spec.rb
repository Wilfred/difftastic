require File.expand_path('../../spec_helper', __FILE__)

describe "A method call" do
  before :each do
    @obj = Object.new
    def @obj.foo0(&a)
      [a ? a.call : nil]
    end
    def @obj.foo1(a, &b)
      [a, b ? b.call : nil]
    end
    def @obj.foo2(a, b, &c)
      [a, b, c ? c.call : nil]
    end
    def @obj.foo3(a, b, c, &d)
      [a, b, c, d ? d.call : nil]
    end
    def @obj.foo4(a, b, c, d, &e)
      [a, b, c, d, e ? e.call : nil]
    end
  end

  it "evaluates the receiver first" do
    (obj = @obj).foo1(obj = nil).should == [nil, nil]
    (obj = @obj).foo2(obj = nil, obj = nil).should == [nil, nil, nil]
    (obj = @obj).foo3(obj = nil, obj = nil, obj = nil).should == [nil, nil, nil, nil]
    (obj = @obj).foo4(obj = nil, obj = nil, obj = nil, obj = nil).should == [nil, nil, nil, nil, nil]
  end

  it "evaluates arguments after receiver" do
    a = 0
    (a += 1; @obj).foo1(a).should == [1, nil]
    (a += 1; @obj).foo2(a, a).should == [2, 2, nil]
    (a += 1; @obj).foo3(a, a, a).should == [3, 3, 3, nil]
    (a += 1; @obj).foo4(a, a, a, a).should == [4, 4, 4, 4, nil]
    a.should == 4
  end

  it "evaluates arguments left-to-right" do
    a = 0
    @obj.foo1(a += 1).should == [1, nil]
    @obj.foo2(a += 1, a += 1).should == [2, 3, nil]
    @obj.foo3(a += 1, a += 1, a += 1).should == [4, 5, 6, nil]
    @obj.foo4(a += 1, a += 1, a += 1, a += 1).should == [7, 8, 9, 10, nil]
    a.should == 10
  end

  it "evaluates block pass after arguments" do
    a = 0
    p = proc {true}
    @obj.foo1(a += 1, &(a += 1; p)).should == [1, true]
    @obj.foo2(a += 1, a += 1, &(a += 1; p)).should == [3, 4, true]
    @obj.foo3(a += 1, a += 1, a += 1, &(a += 1; p)).should == [6, 7, 8, true]
    @obj.foo4(a += 1, a += 1, a += 1, a += 1, &(a += 1; p)).should == [10, 11, 12, 13, true]
    a.should == 14
  end

  it "evaluates block pass after receiver" do
    p1 = proc {true}
    p2 = proc {false}
    p1.should_not == p2

    p = p1
    (p = p2; @obj).foo0(&p).should == [false]
    p = p1
    (p = p2; @obj).foo1(1, &p).should == [1, false]
    p = p1
    (p = p2; @obj).foo2(1, 1, &p).should == [1, 1, false]
    p = p1
    (p = p2; @obj).foo3(1, 1, 1, &p).should == [1, 1, 1, false]
    p = p1
    (p = p2; @obj).foo4(1, 1, 1, 1, &p).should == [1, 1, 1, 1, false]
    p = p1
  end
end
