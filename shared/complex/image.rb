require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_image, shared: true do
  it "returns the imaginary part of self" do
    Complex(1, 0).send(@method).should == 0
    Complex(2, 1).send(@method).should == 1
    Complex(6.7, 8.9).send(@method).should == 8.9
    Complex(1, bignum_value).send(@method).should == bignum_value
  end
end
