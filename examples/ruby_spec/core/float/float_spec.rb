require File.expand_path('../../../spec_helper', __FILE__)

describe "Float" do
  it "includes Comparable" do
    Float.include?(Comparable).should == true
  end

  it ".allocate raises a TypeError" do
    lambda do
      Float.allocate
    end.should raise_error(TypeError)
  end

  it ".new is undefined" do
    lambda do
      Float.new
    end.should raise_error(NoMethodError)
  end
end
