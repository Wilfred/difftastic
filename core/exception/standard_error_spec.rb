require File.expand_path('../../../spec_helper', __FILE__)

describe "StandardError" do
  it "is a superclass of ArgumentError" do
    StandardError.should be_ancestor_of(ArgumentError)
  end

  it "is a superclass of IOError" do
    StandardError.should be_ancestor_of(IOError)
  end

  it "is a superclass of IndexError" do
    StandardError.should be_ancestor_of(IndexError)
  end

  it "is a superclass of LocalJumpError" do
    StandardError.should be_ancestor_of(LocalJumpError)
  end

  it "is a superclass of NameError" do
    StandardError.should be_ancestor_of(NameError)
  end

  it "is a superclass of RangeError" do
    StandardError.should be_ancestor_of(RangeError)
  end

  it "is a superclass of RegexpError" do
    StandardError.should be_ancestor_of(RegexpError)
  end

  it "is a superclass of RuntimeError" do
    StandardError.should be_ancestor_of(RuntimeError)
  end

  it "is a superclass of SystemCallError" do
    StandardError.should be_ancestor_of(SystemCallError.new("").class)
  end
  it "is a superclass of ThreadError" do
    StandardError.should be_ancestor_of(ThreadError)
  end

  it "is a superclass of TypeError" do
    StandardError.should be_ancestor_of(TypeError)
  end

  it "is a superclass of ZeroDivisionError" do
    StandardError.should be_ancestor_of(ZeroDivisionError)
  end
end
