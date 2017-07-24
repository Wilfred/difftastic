require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#|" do
  it "returns self bitwise OR other" do
    (1 | 0).should == 1
    (5 | 4).should == 5
    (5 | 6).should == 7
    (248 | 4096).should == 4344
    (0xffff | bignum_value + 0xf0f0).should == 0x8000_0000_0000_ffff
  end

  it "returns self bitwise OR a Bignum" do
    (-1 | 2**64).should == -1
  end

  it "raises a TypeError when passed a Float" do
    lambda { (3 | 3.4) }.should raise_error(TypeError)
  end

  it "raises a TypeError and does not call #to_int when defined on an object" do
    obj = mock("fixnum bit or")
    obj.should_not_receive(:to_int)

    lambda { 3 | obj }.should raise_error(TypeError)
  end
end
