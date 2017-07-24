require File.expand_path('../../spec_helper', __FILE__)

describe "The '&&' statement" do

  it "short-circuits evaluation at the first condition to be false" do
    x = nil
    true && false && x = 1
    x.should be_nil
  end

  it "evaluates to the first condition not to be true" do
    value = nil
    (value && nil).should == nil
    (value && false).should == nil
    value = false
    (value && nil).should == false
    (value && false).should == false

    ("yes" && 1 && nil && true).should == nil
    ("yes" && 1 && false && true).should == false
  end

  it "evaluates to the last condition if all are true" do
    ("yes" && 1).should == 1
    (1 && "yes").should == "yes"
  end

  it "evaluates the full set of chained conditions during assignment" do
    x, y = nil
    x = 1 && y = 2
    # "1 && y = 2" is evaluated and then assigned to x
    x.should == 2
  end

  it "treats empty expressions as nil" do
    (() && true).should be_nil
    (true && ()).should be_nil
    (() && ()).should be_nil
  end

end

describe "The 'and' statement" do
  it "short-circuits evaluation at the first condition to be false" do
    x = nil
    true and false and x = 1
    x.should be_nil
  end

  it "evaluates to the first condition not to be true" do
    value = nil
    (value and nil).should == nil
    (value and false).should == nil
    value = false
    (value and nil).should == false
    (value and false).should == false

    ("yes" and 1 and nil and true).should == nil
    ("yes" and 1 and false and true).should == false
  end

  it "evaluates to the last condition if all are true" do
    ("yes" and 1).should == 1
    (1 and "yes").should == "yes"
  end

  it "when used in assignment, evaluates and assigns expressions individually" do
    x, y = nil
    x = 1 and y = 2
    # evaluates (x=1) and (y=2)
    x.should == 1
  end

  it "treats empty expressions as nil" do
    (() and true).should be_nil
    (true and ()).should be_nil
    (() and ()).should be_nil
  end

end
