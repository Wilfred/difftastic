require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#bit_length" do
  it "returns the position of the leftmost bit of a positive number" do
    (2**1000-1).bit_length.should == 1000
    (2**1000).bit_length.should == 1001
    (2**1000+1).bit_length.should == 1001

    (2**10000-1).bit_length.should == 10000
    (2**10000).bit_length.should == 10001
    (2**10000+1).bit_length.should == 10001

    (1 << 100).bit_length.should == 101
    (1 << 100).succ.bit_length.should == 101
    (1 << 100).pred.bit_length.should == 100
    (1 << 10000).bit_length.should == 10001
  end

  it "returns the position of the leftmost 0 bit of a negative number" do
    (-2**10000-1).bit_length.should == 10001
    (-2**10000).bit_length.should == 10000
    (-2**10000+1).bit_length.should == 10000

    (-2**1000-1).bit_length.should == 1001
    (-2**1000).bit_length.should == 1000
    (-2**1000+1).bit_length.should == 1000

    ((-1 << 100)-1).bit_length.should == 101
    ((-1 << 100)-1).succ.bit_length.should == 100
    ((-1 << 100)-1).pred.bit_length.should == 101
    ((-1 << 10000)-1).bit_length.should == 10001
  end
end
