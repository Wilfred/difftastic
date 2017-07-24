require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum" do
  it "includes Comparable" do
    Bignum.include?(Comparable).should == true
  end

  it ".allocate raises a TypeError" do
    lambda do
      Bignum.allocate
    end.should raise_error(TypeError)
  end

  it ".new is undefined" do
    lambda do
      Bignum.new
    end.should raise_error(NoMethodError)
  end
end
