require File.expand_path('../../spec_helper', __FILE__)

describe "The unless expression" do
  it "evaluates the unless body when the expression is false" do
    unless false
      a = true
    else
      a = false
    end

    a.should == true
  end

  it "returns the last statement in the body" do
    unless false
      'foo'
      'bar'
      'baz'
    end.should == 'baz'
  end

  it "evaluates the else body when the expression is true" do
    unless true
      'foo'
    else
      'bar'
    end.should == 'bar'
  end

  it "takes an optional then after the expression" do
    unless false then
      'baz'
    end.should == 'baz'
  end

  it "does not return a value when the expression is true" do
    unless true; end.should == nil
  end

  it "allows expression and body to be on one line (using 'then')" do
    unless false then 'foo'; else 'bar'; end.should == 'foo'
  end
end
