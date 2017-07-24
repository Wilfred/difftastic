require File.expand_path('../../../spec_helper', __FILE__)

describe "Dir" do
  it "includes Enumerable" do
    Dir.include?(Enumerable).should == true
  end
end
