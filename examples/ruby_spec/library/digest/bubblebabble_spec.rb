require File.expand_path('../../../spec_helper', __FILE__)
require 'digest/bubblebabble'

describe "Digest.bubblebabble" do
  it "returns a String" do
    Digest.bubblebabble('').should be_an_instance_of(String)
  end

  it "returns a String in the The Bubble Babble Binary Data Encoding format" do
    Digest.bubblebabble('').should == 'xexax'
    Digest.bubblebabble('foo').should == 'xinik-zorox'
    Digest.bubblebabble('bar').should == 'ximik-cosex'
    Digest.bubblebabble('1234567890').should == 'xesef-disof-gytuf-katof-movif-baxux'
  end

  it "calls #to_str on an object and returns the bubble babble value of the result" do
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return('foo')
    Digest.bubblebabble(obj).should == 'xinik-zorox'
  end

  it "raises a TypeError when passed nil" do
    lambda { Digest.bubblebabble(nil) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a Fixnum" do
    lambda { Digest.bubblebabble(9001) }.should raise_error(TypeError)
  end
end
