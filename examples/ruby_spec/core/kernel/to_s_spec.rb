require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#to_s" do
  it "returns a String containing the name of self's class" do
    Object.new.to_s.should =~ /Object/
  end

  it "returns a tainted result if self is tainted" do
    Object.new.taint.to_s.tainted?.should be_true
  end

  it "returns an untrusted result if self is untrusted" do
    Object.new.untrust.to_s.untrusted?.should be_true
  end
end
