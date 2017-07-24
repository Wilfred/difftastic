require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_abs, shared: true do
  it "returns the modulus: |a + bi| = sqrt((a ^ 2) + (b ^ 2))" do
    Complex(0, 0).send(@method).should == 0
    Complex(3, 4).send(@method).should == 5 # well-known integer case
    Complex(-3, 4).send(@method).should == 5
    Complex(1, -1).send(@method).should be_close(Math.sqrt(2), TOLERANCE)
    Complex(6.5, 0).send(@method).should be_close(6.5, TOLERANCE)
    Complex(0, -7.2).send(@method).should be_close(7.2, TOLERANCE)
  end
end
