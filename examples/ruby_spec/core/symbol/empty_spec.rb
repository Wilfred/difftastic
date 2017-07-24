require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol#empty?" do
  it "returns true if self is empty" do
    :"".empty?.should be_true
  end

  it "returns false if self is non-empty" do
    :"a".empty?.should be_false
  end
end
