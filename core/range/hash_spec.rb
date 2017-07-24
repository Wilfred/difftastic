require File.expand_path('../../../spec_helper', __FILE__)

describe "Range#hash" do
  it "is provided" do
    (0..1).respond_to?(:hash).should == true
    ('A'..'Z').respond_to?(:hash).should == true
    (0xfffd..0xffff).respond_to?(:hash).should == true
    (0.5..2.4).respond_to?(:hash).should == true
  end

  it "generates the same hash values for Ranges with the same start, end and exclude_end? values" do
    (0..1).hash.should == (0..1).hash
    (0...10).hash.should == (0...10).hash
    (0..10).hash.should_not == (0...10).hash
  end

  it "generates a Fixnum for the hash value" do
    (0..0).hash.should be_an_instance_of(Fixnum)
    (0..1).hash.should be_an_instance_of(Fixnum)
    (0...10).hash.should be_an_instance_of(Fixnum)
    (0..10).hash.should be_an_instance_of(Fixnum)
  end

end
