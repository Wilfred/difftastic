require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol" do
  it "includes Comparable" do
    Symbol.include?(Comparable).should == true
  end

  it ".allocate raises a TypeError" do
    lambda do
      Symbol.allocate
    end.should raise_error(TypeError)
  end

  it ".new is undefined" do
    lambda do
      Symbol.new
    end.should raise_error(NoMethodError)
  end
end
