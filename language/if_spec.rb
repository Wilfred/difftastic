require File.expand_path('../../spec_helper', __FILE__)

describe "The if expression" do
  it "evaluates body if expression is true" do
    a = []
    if true
      a << 123
    end
    a.should == [123]
  end

  it "does not evaluate body if expression is false" do
    a = []
    if false
      a << 123
    end
    a.should == []
  end

  it "does not evaluate body if expression is empty" do
    a = []
    if ()
      a << 123
    end
    a.should == []
  end

  it "does not evaluate else-body if expression is true" do
    a = []
    if true
      a << 123
    else
      a << 456
    end
    a.should == [123]
  end

  it "evaluates only else-body if expression is false" do
    a = []
    if false
      a << 123
    else
      a << 456
    end
    a.should == [456]
  end

  it "returns result of then-body evaluation if expression is true" do
    if true
      123
    end.should == 123
  end

  it "returns result of last statement in then-body if expression is true" do
    if true
      'foo'
      'bar'
      'baz'
    end.should == 'baz'
  end

  it "returns result of then-body evaluation if expression is true and else part is present" do
    if true
      123
    else
      456
    end.should == 123
  end

  it "returns result of else-body evaluation if expression is false" do
    if false
      123
    else
      456
    end.should == 456
  end

  it "returns nil if then-body is empty and expression is true" do
    if true
    end.should == nil
  end

  it "returns nil if then-body is empty, expression is true and else part is present" do
    if true
    else
      456
    end.should == nil
  end

  it "returns nil if then-body is empty, expression is true and else part is empty" do
    if true
    else
    end.should == nil
  end

  it "returns nil if else-body is empty and expression is false" do
    if false
      123
    else
    end.should == nil
  end

  it "returns nil if else-body is empty, expression is false and then-body is empty" do
    if false
    else
    end.should == nil
  end

  it "considers an expression with nil result as false" do
    if nil
      123
    else
      456
    end.should == 456
  end

  it "considers a non-nil and non-boolean object in expression result as true" do
    if mock('x')
      123
    else
      456
    end.should == 123
  end

  it "considers a zero integer in expression result as true" do
    if 0
      123
    else
      456
    end.should == 123
  end

  it "allows starting else-body on the same line" do
    if false
      123
    else 456
    end.should == 456
  end

  it "evaluates subsequent elsif statements and execute body of first matching" do
    if false
      123
    elsif false
      234
    elsif true
      345
    elsif true
      456
    end.should == 345
  end

  it "evaluates else-body if no if/elsif statements match" do
    if false
      123
    elsif false
      234
    elsif false
      345
    else
      456
    end.should == 456
  end

  it "allows 'then' after expression when then-body is on the next line" do
    if true then
      123
    end.should == 123

    if true then ; 123; end.should == 123
  end

  it "allows then-body on the same line separated with 'then'" do
    if true then 123
    end.should == 123

    if true then 123; end.should == 123
  end

  it "returns nil when then-body on the same line separated with 'then' and expression is false" do
    if false then 123
    end.should == nil

    if false then 123; end.should == nil
  end

  it "returns nil when then-body separated by 'then' is empty and expression is true" do
    if true then
    end.should == nil

    if true then ; end.should == nil
  end

  it "returns nil when then-body separated by 'then', expression is false and no else part" do
    if false then
    end.should == nil

    if false then ; end.should == nil
  end

  it "evaluates then-body when then-body separated by 'then', expression is true and else part is present" do
    if true then 123
    else 456
    end.should == 123

    if true then 123; else 456; end.should == 123
  end

  it "evaluates else-body when then-body separated by 'then' and expression is false" do
    if false then 123
    else 456
    end.should == 456

    if false then 123; else 456; end.should == 456
  end

  describe "with a boolean range ('flip-flop' operator)" do
    before :each do
      ScratchPad.record []
    end

    after :each do
      ScratchPad.clear
    end

    it "mimics an awk conditional with a single-element inclusive-end range" do
      10.times { |i| ScratchPad << i if (i == 4)..(i == 4) }
      ScratchPad.recorded.should == [4]
    end

    it "mimics an awk conditional with a many-element inclusive-end range" do
      10.times { |i| ScratchPad << i if (i == 4)..(i == 7) }
      ScratchPad.recorded.should == [4, 5, 6, 7]
    end

    it "mimics a sed conditional with a zero-element exclusive-end range" do
      eval "10.times { |i| ScratchPad << i if (i == 4)...(i == 4) }"
      ScratchPad.recorded.should == [4, 5, 6, 7, 8, 9]
    end

    it "mimics a sed conditional with a many-element exclusive-end range" do
      10.times { |i| ScratchPad << i if (i == 4)...(i == 5) }
      ScratchPad.recorded.should == [4, 5]
    end

    it "allows combining two flip-flops" do
      10.times { |i| ScratchPad << i if (i == 4)...(i == 5) or (i == 7)...(i == 8) }
      ScratchPad.recorded.should == [4, 5, 7, 8]
    end

    it "evaluates the first conditions lazily with inclusive-end range" do
      collector = proc { |i| ScratchPad << i }
      eval "10.times { |i| i if collector[i]...false }"
      ScratchPad.recorded.should == [0]
    end

    it "evaluates the first conditions lazily with exclusive-end range" do
      collector = proc { |i| ScratchPad << i }
      eval "10.times { |i| i if collector[i]..false }"
      ScratchPad.recorded.should == [0]
    end

    it "evaluates the second conditions lazily with inclusive-end range" do
      collector = proc { |i| ScratchPad << i }
      10.times { |i| i if (i == 4)...collector[i] }
      ScratchPad.recorded.should == [5]
    end

    it "evaluates the second conditions lazily with exclusive-end range" do
      collector = proc { |i| ScratchPad << i }
      10.times { |i| i if (i == 4)..collector[i] }
      ScratchPad.recorded.should == [4]
    end

    it "scopes state by flip-flop" do
      store_me = proc { |i| ScratchPad << i if (i == 4)..(i == 7) }
      store_me[1]
      store_me[4]
      proc { store_me[1] }.call
      store_me[7]
      store_me[5]
      ScratchPad.recorded.should == [4, 1, 7]
    end

    it "keeps flip-flops from interfering" do
      a = eval "proc { |i| ScratchPad << i if (i == 4)..(i == 7) }"
      b = eval "proc { |i| ScratchPad << i if (i == 4)..(i == 7) }"
      6.times(&a)
      6.times(&b)
      ScratchPad.recorded.should == [4, 5, 4, 5]
    end
  end
end

describe "The postfix if form" do
  it "evaluates statement if expression is true" do
    a = []
    a << 123 if true
    a.should == [123]
  end

  it "does not evaluate statement if expression is false" do
    a = []
    a << 123 if false
    a.should == []
  end

  it "returns result of expression if value is true" do
    (123 if true).should == 123
  end

  it "returns nil if expression is false" do
    (123 if false).should == nil
  end

  it "considers a nil expression as false" do
    (123 if nil).should == nil
  end

  it "considers a non-nil object as true" do
    (123 if mock('x')).should == 123
  end

  it "evaluates then-body in containing scope" do
    a = 123
    if true
      b = a+1
    end
    b.should == 124
  end

  it "evaluates else-body in containing scope" do
    a = 123
    if false
      b = a+1
    else
      b = a+2
    end
    b.should == 125
  end

  it "evaluates elsif-body in containing scope" do
    a = 123
    if false
      b = a+1
    elsif false
      b = a+2
    elsif true
      b = a+3
    else
      b = a+4
    end
    b.should == 126
  end
end
