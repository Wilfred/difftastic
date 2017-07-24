require File.expand_path('../../../spec_helper', __FILE__)

describe "Proc.allocate" do
  it "raises a TypeError" do
    lambda {
      Proc.allocate
    }.should raise_error(TypeError)
  end
end
