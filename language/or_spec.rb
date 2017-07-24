require File.expand_path('../../spec_helper', __FILE__)

describe "The || operator" do
  it "evaluates to true if any of its operands are true" do
    if false || true || nil
      x = true
    end
    x.should == true
  end

  it "evaluated to false if all of its operands are false" do
    if false || nil
      x = true
    end
    x.should == nil
  end

  it "is evaluated before assignment operators" do
    x = nil || true
    x.should == true
  end

  it "has a lower precedence than the && operator" do
    x = 1 || false && x = 2
    x.should == 1
  end

  it "treats empty expressions as nil" do
    (() || true).should be_true
    (() || false).should be_false
    (true || ()).should be_true
    (false || ()).should be_nil
    (() || ()).should be_nil
  end

  it "has a higher precedence than 'break' in 'break true || false'" do
    # see also 'break true or false' below
    lambda { break false || true }.call.should be_true
  end

  it "has a higher precedence than 'next' in 'next true || false'" do
    lambda { next false || true }.call.should be_true
  end

  it "has a higher precedence than 'return' in 'return true || false'" do
    lambda { return false || true }.call.should be_true
  end
end

describe "The or operator" do
  it "evaluates to true if any of its operands are true" do
    x = nil
    if false or true
      x = true
    end
    x.should == true
  end

  it "is evaluated after variables are assigned" do
    x = nil or true
    x.should == nil
  end

  it "has a lower precedence than the || operator" do
    x,y = nil
    x = true || false or y = 1
    y.should == nil
  end

  it "treats empty expressions as nil" do
    (() or true).should be_true
    (() or false).should be_false
    (true or ()).should be_true
    (false or ()).should be_nil
    (() or ()).should be_nil
  end

  it "has a lower precedence than 'break' in 'break true or false'" do
    # see also 'break true || false' above
    lambda { eval "break true or false" }.should raise_error(SyntaxError, /void value expression/)
  end

  it "has a lower precedence than 'next' in 'next true or false'" do
    lambda { eval "next true or false" }.should raise_error(SyntaxError, /void value expression/)
  end

  it "has a lower precedence than 'return' in 'return true or false'" do
    lambda { eval "return true or false" }.should raise_error(SyntaxError, /void value expression/)
  end
end
