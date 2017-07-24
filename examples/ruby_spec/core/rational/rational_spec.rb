require File.expand_path('../../../spec_helper', __FILE__)

describe "Rational" do
  it "includes Comparable" do
    Rational.include?(Comparable).should == true
  end
end
