require File.expand_path('../../spec_helper', __FILE__)

# while bool-expr [do]
#   body
# end
#
# begin
#   body
# end while bool-expr
#
# expr while bool-expr
describe "The while expression" do
  it "runs while the expression is true" do
    i = 0
    while i < 3
      i += 1
    end
    i.should == 3
  end

  it "optionally takes a 'do' after the expression" do
    i = 0
    while i < 3 do
      i += 1
    end

    i.should == 3
  end

  it "allows body begin on the same line if do is used" do
    i = 0
    while i < 3 do i += 1
    end

    i.should == 3
  end

  it "executes code in containing variable scope" do
    i = 0
    while i != 1
      a = 123
      i = 1
    end

    a.should == 123
  end

  it "executes code in containing variable scope with 'do'" do
    i = 0
    while i != 1 do
      a = 123
      i = 1
    end

    a.should == 123
  end

  it "returns nil if ended when condition became false" do
    i = 0
    while i < 3
      i += 1
    end.should == nil
  end

  it "does not evaluate the body if expression is empty" do
    a = []
    while ()
      a << :body_evaluated
    end
    a.should == []
  end

  it "stops running body if interrupted by break" do
    i = 0
    while i < 10
      i += 1
      break if i > 5
    end
    i.should == 6
  end

  it "stops running body if interrupted by break in a parenthesized element op-assign-or value" do
    c = true
    a = []
    while c
      a[1] ||=
        (
          break if c
          c = false
        )
    end.should be_nil
  end

  it "stops running body if interrupted by break in a begin ... end element op-assign-or value" do
    c = true
    a = []
    while c
      a[1] ||= begin
        break if c
        c = false
      end
    end.should be_nil
  end

  it "stops running body if interrupted by break in a parenthesized element op-assign value" do
    c = true
    a = [1, 2]
    while c
      a[1] +=
        (
          break if c
          c = false
        )
    end.should be_nil
    a.should == [1, 2]
  end

  it "stops running body if interrupted by break in a begin ... end element op-assign value" do
    c = true
    a = [1, 2]
    while c
      a[1] += begin
        break if c
        c = false
      end
    end.should be_nil
    a.should == [1, 2]
  end

  it "stops running body if interrupted by break with unless in a parenthesized attribute op-assign-or value" do
    a = mock("attribute assignment break")
    a.should_receive(:m).twice.and_return(nil)
    a.should_receive(:m=)

    c = d = true
    while c
      a.m ||=
        (
          break unless d
          d = false
        )
    end.should be_nil
  end

  it "stops running body if interrupted by break with unless in a begin ... end attribute op-assign-or value" do
    a = mock("attribute assignment break")
    a.should_receive(:m).twice.and_return(nil)
    a.should_receive(:m=)

    c = d = true
    while c
      a.m ||= begin
        break unless d
        d = false
      end
    end.should be_nil
  end

  it "stops running body if interrupted by break in a parenthesized attribute op-assign-or value" do
    a = mock("attribute assignment break")
    a.should_receive(:m).and_return(nil)
    a.should_not_receive(:m=)

    c = true
    while c
      a.m +=
        (
          break if c
          c = false
        )
    end.should be_nil
  end

  it "stops running body if interrupted by break in a begin ... end attribute op-assign-or value" do
    a = mock("attribute assignment break")
    a.should_receive(:m).and_return(nil)
    a.should_not_receive(:m=)

    c = true
    while c
      a.m += begin
        break if c
        c = false
      end
    end.should be_nil
  end

  it "returns value passed to break if interrupted by break" do
    while true
      break 123
    end.should == 123
  end

  it "returns nil if interrupted by break with no arguments" do
    while true
      break
    end.should == nil
  end

  it "skips to end of body with next" do
    a = []
    i = 0
    while (i+=1)<5
      next if i==3
      a << i
    end
    a.should == [1, 2, 4]
  end

  it "restarts the current iteration without reevaluating condition with redo" do
    a = []
    i = 0
    j = 0
    while (i+=1)<3
      a << i
      j+=1
      redo if j<3
    end
    a.should == [1, 1, 1, 2]
  end
end

describe "The while modifier" do
  it "runs preceding statement while the condition is true" do
    i = 0
    i += 1 while i < 3
    i.should == 3
  end

  it "evaluates condition before statement execution" do
    a = []
    i = 0
    a << i while (i+=1) < 3
    a.should == [1, 2]
  end

  it "does not run preceding statement if the condition is false" do
    i = 0
    i += 1 while false
    i.should == 0
  end

  it "does not run preceding statement if the condition is empty" do
    i = 0
    i += 1 while ()
    i.should == 0
  end

  it "returns nil if ended when condition became false" do
    i = 0
    (i += 1 while i<10).should == nil
  end

  it "returns value passed to break if interrupted by break" do
    (break 123 while true).should == 123
  end

  it "returns nil if interrupted by break with no arguments" do
    (break while true).should == nil
  end

  it "skips to end of body with next" do
    i = 0
    j = 0
    ((i+=1) == 3 ? next : j+=i) while i <= 10
    j.should == 63
  end

  it "restarts the current iteration without reevaluating condition with redo" do
    i = 0
    j = 0
    (i+=1) == 4 ? redo : j+=i while (i+=1) <= 10
    j.should == 34
  end
end

describe "The while modifier with begin .. end block" do
  it "runs block while the expression is true" do
    i = 0
    begin
      i += 1
    end while i < 3

    i.should == 3
  end

  it "stops running block if interrupted by break" do
    i = 0
    begin
      i += 1
      break if i > 5
    end while i < 10

    i.should == 6
  end

  it "returns value passed to break if interrupted by break" do
    (begin; break 123; end while true).should == 123
  end

  it "returns nil if interrupted by break with no arguments" do
    (begin; break; end while true).should == nil
  end

  it "runs block at least once (even if the expression is false)" do
    i = 0
    begin
      i += 1
    end while false

    i.should == 1
  end

  it "evaluates condition after block execution" do
    a = []
    i = 0
    begin
      a << i
    end while (i+=1)<5
    a.should == [0, 1, 2, 3, 4]
  end

  it "skips to end of body with next" do
    a = []
    i = 0
    begin
      next if i==3
      a << i
    end while (i+=1)<5
    a.should == [0, 1, 2, 4]
  end

  it "restarts the current iteration without reevaluting condition with redo" do
    a = []
    i = 0
    j = 0
    begin
      a << i
      j+=1
      redo if j<3
    end while (i+=1)<3
    a.should == [0, 0, 0, 1, 2]
  end
end
