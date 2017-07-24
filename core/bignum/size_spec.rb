require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#size" do
  it "returns the number of bytes required to hold the unsigned bignum data" do
    # that is, n such that 256 * n <= val.abs < 256 * (n+1)
    (256**7).size.should == 8
    (256**8).size.should == 9
    (256**9).size.should == 10
    (256**10).size.should == 11
    (256**10-1).size.should == 10
    (256**11).size.should == 12
    (256**12).size.should == 13
    (256**20-1).size.should == 20
    (256**40-1).size.should == 40
  end
end
