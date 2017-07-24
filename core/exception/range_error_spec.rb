require File.expand_path('../../../spec_helper', __FILE__)

describe "RangeError" do
  it "is a superclass of FloatDomainError" do
    RangeError.should be_ancestor_of(FloatDomainError)
  end
end
