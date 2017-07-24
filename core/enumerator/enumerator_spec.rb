require File.expand_path('../../../spec_helper', __FILE__)

describe "Enumerator" do
  it "includes Enumerable" do
    Enumerator.include?(Enumerable).should == true
  end
end
