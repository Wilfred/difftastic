require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#to_f" do
  it "returns 0.0" do
    nil.to_f.should == 0.0
  end

  it "does not cause NilClass to be coerced to Float" do
    (0.0 == nil).should == false
  end
end
