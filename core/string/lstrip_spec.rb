require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#lstrip" do
  it "returns a copy of self with leading whitespace removed" do
   "  hello  ".lstrip.should == "hello  "
   "  hello world  ".lstrip.should == "hello world  "
   "\n\r\t\n\v\r hello world  ".lstrip.should == "hello world  "
   "hello".lstrip.should == "hello"
   "\000 \000hello\000 \000".lstrip.should == "\000 \000hello\000 \000"
  end

  it "does not strip leading \\0" do
   "\x00hello".lstrip.should == "\x00hello"
  end

  it "taints the result when self is tainted" do
    "".taint.lstrip.tainted?.should == true
    "ok".taint.lstrip.tainted?.should == true
    "   ok".taint.lstrip.tainted?.should == true
  end
end

describe "String#lstrip!" do
  it "modifies self in place and returns self" do
    a = "  hello  "
    a.lstrip!.should equal(a)
    a.should == "hello  "

    a = "\000 \000hello\000 \000"
    a.lstrip!
    a.should == "\000 \000hello\000 \000"
  end

  it "returns nil if no modifications were made" do
    a = "hello"
    a.lstrip!.should == nil
    a.should == "hello"
  end

  it "raises a RuntimeError on a frozen instance that is modified" do
    lambda { "  hello  ".freeze.lstrip! }.should raise_error(RuntimeError)
  end

  # see [ruby-core:23657]
  it "raises a RuntimeError on a frozen instance that would not be modified" do
    lambda { "hello".freeze.lstrip! }.should raise_error(RuntimeError)
    lambda { "".freeze.lstrip!      }.should raise_error(RuntimeError)
  end
end
