require File.expand_path('../../spec_helper', __FILE__)

# until bool-expr [do]
#   body
# end
#
# begin
#   body
# end until bool-expr
#
# expr until bool-expr
describe "The until expression" do
  it "runs while the expression is false" do
    i = 0
    until i > 9
      i += 1
    end

    i.should == 10
  end

  it "optionally takes a 'do' after the expression" do
    i = 0
    until i > 9 do
      i += 1
    end

    i.should == 10
  end

  it "allows body begin on the same line if do is used" do
    i = 0
    until i > 9 do i += 1
    end

    i.should == 10
  end

  it "executes code in containing variable scope" do
    i = 0
    until i == 1
      a = 123
      i = 1
    end

    a.should == 123
  end

  it "executes code in containing variable scope with 'do'" do
    i = 0
    until i == 1 do
      a = 123
      i = 1
    end

    a.should == 123
  end

  it "returns nil if ended when condition became true" do
    i = 0
    until i > 9
      i += 1
    end.should == nil
  end

  it "evaluates the body if expression is empty" do
    a = []
    until ()
      a << :body_evaluated
      break
    end
    a.should == [:body_evaluated]
  end

  it "stops running body if interrupted by break" do
    i = 0
    until i > 9
      i += 1
      break if i > 5
    end
    i.should == 6
  end

  it "returns value passed to break if interrupted by break" do
    until false
      break 123
    end.should == 123
  end

  it "returns nil if interrupted by break with no arguments" do
    until false
      break
    end.should == nil
  end

  it "skips to end of body with next" do
    a = []
    i = 0
    until (i+=1)>=5
      next if i==3
      a << i
    end
    a.should == [1, 2, 4]
  end

  it "restarts the current iteration without reevaluating condition with redo" do
    a = []
    i = 0
    j = 0
    until (i+=1)>=3
      a << i
      j+=1
      redo if j<3
    end
    a.should == [1, 1, 1, 2]
  end
end

describe "The until modifier" do
  it "runs preceding statement while the condition is false" do
    i = 0
    i += 1 until i > 9
    i.should == 10
  end

  it "evaluates condition before statement execution" do
    a = []
    i = 0
    a << i until (i+=1) >= 3
    a.should == [1, 2]
  end

  it "does not run preceding statement if the condition is true" do
    i = 0
    i += 1 until true
    i.should == 0
  end

  it "returns nil if ended when condition became true" do
    i = 0
    (i += 1 until i>9).should == nil
  end

  it "returns value passed to break if interrupted by break" do
    (break 123 until false).should == 123
  end

  it "returns nil if interrupted by break with no arguments" do
    (break until false).should == nil
  end

  it "skips to end of body with next" do
    i = 0
    j = 0
    ((i+=1) == 3 ? next : j+=i) until i > 10
    j.should == 63
  end

  it "restarts the current iteration without reevaluating condition with redo" do
    i = 0
    j = 0
    (i+=1) == 4 ? redo : j+=i until (i+=1) > 10
    j.should == 34
  end
end

describe "The until modifier with begin .. end block" do
  it "runs block while the expression is false" do
    i = 0
    begin
      i += 1
    end until i > 9

    i.should == 10
  end

  it "stops running block if interrupted by break" do
    i = 0
    begin
      i += 1
      break if i > 5
    end until i > 9

    i.should == 6
  end

  it "returns value passed to break if interrupted by break" do
    (begin; break 123; end until false).should == 123
  end

  it "returns nil if interrupted by break with no arguments" do
    (begin; break; end until false).should == nil
  end

  it "runs block at least once (even if the expression is true)" do
    i = 0
    begin
      i += 1
    end until true

    i.should == 1
  end

  it "evaluates condition after block execution" do
    a = []
    i = 0
    begin
      a << i
    end until (i+=1)>=5
    a.should == [0, 1, 2, 3, 4]
  end

  it "skips to end of body with next" do
    a = []
    i = 0
    begin
      next if i==3
      a << i
    end until (i+=1)>=5
    a.should == [0, 1, 2, 4]
  end

  it "restart the current iteration without reevaluting condition with redo" do
    a = []
    i = 0
    j = 0
    begin
      a << i
      j+=1
      redo if j<3
    end until (i+=1)>=3
    a.should == [0, 0, 0, 1, 2]
  end
end
