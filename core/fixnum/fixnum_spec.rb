require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum" do
  it "includes Comparable" do
    Fixnum.include?(Comparable).should == true
  end

  it ".allocate raises a TypeError" do
    lambda do
      Fixnum.allocate
    end.should raise_error(TypeError)
  end

  it ".new is undefined" do
    lambda do
      Fixnum.new
    end.should raise_error(NoMethodError)
  end
end
